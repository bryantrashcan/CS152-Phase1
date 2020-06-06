%{
#include "structs.h"

int yyerror(const char* s);
int yylex(void);


stringstream *all_code; /* intermediated code to be put in file */

string makeIntCode(string *dst, string op, string *val1, string *val2);
/* generating intermediate code*/

string conv2String(char* s);
string conv2String(int s);

string *create_temp();
string *create_label();
int temp1 = 0;
int temp2 = 0;

string go_to(string *s);

string labdclr_label(string *s); /* label declare and variable temp declare*/
string vardclr_temp(string *s);

void expression_code( Terminal &nterm,  Terminal t2, Terminal t3, string op);

bool pass = true;
bool hasMain = false;

map<string,Var> arr_vars;
stack<Loop> loop_stack;

void add_map(string name, Var v);
bool bool_map(string name);
void bool_map_dec(string name);



%}

%union{
    int		int_val;
    char 	str_val[256];


    struct{
        stringstream *term_code;
    }NonTerminal;

    struct Terminal Terminal;
}

%error-verbose

%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY
%token INTEGER ARRAY OF 
%token IF THEN ENDIF ELSE WHILE DO BEGINLOOP ENDLOOP CONTINUE 
%token READ WRITE RETURN
%token AND OR NOT TRUE FALSE 
%token SUB ADD MULT DIV MOD EQ NEQ LT GT LTE GTE 
%token SEMICOLON COLON COMMA L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET ASSIGN
%token NUMBER IDENT

%start program_start
%type <int_val> NUMBER
%type <str_val> IDENT

%type <NonTerminal> program_start functions
%type <Terminal>  stmt_options stmt_loop 
%type <Terminal> function bool_exp bool_choice     
%type <Terminal> relation_and_expr relandexpr_choice  
%type <Terminal> relation_expr rel_choice 
%type <Terminal> comp expression expr_choice multiplicative_expression mult_choice   
%type <Terminal> term term_choice term_paren term_choice2 term_comma       
%type <Terminal> var var_choice          
%type <Terminal> declare_loop ident_loop ident_loop2 ident_loop_choice ident_term
%type <Terminal> s1 s2 s2_choice s3 s4 s6 s6_choice s7 s7_choice s8 s9 beg_loop  


%%

program_start: 

functions{
	$$.term_code = $1.term_code;
    if(!hasMain){
		yyerror("Error: main function is undeclared.");
	}
}
              
functions:      

function functions
{
	$$.term_code = $1.term_code;
	*($$.term_code) << $2.term_code->str();
        all_code = $$.term_code;
} 
	| 
{ // function functions | epsilon
	$$.term_code = new stringstream(); // empty
};
          

function:   FUNCTION ident_term SEMICOLON BEGIN_PARAMS declare_loop END_PARAMS BEGIN_LOCALS declare_loop END_LOCALS BEGIN_BODY stmt_loop END_BODY{
         
                $$.term_code = new stringstream(); 
                string tempstr = *$2.term_place;
                if(tempstr.compare("main")){
                    hasMain = true;
                }
                *($$.term_code)  << "func " << tempstr << "\n" << $5.term_code->str() << $8.term_code->str();
                for(int i = 0; i < $5.vars->size(); ++i){
                    if((*$5.vars)[i].var_type == INT_ARR){
                        yyerror("Error: cannot pass arrays to function.");
                    }
                    else if((*$5.vars)[i].var_type == INT){
                        *($$.term_code) << "= " << *((*$5.vars)[i].var_place) << ", " << "$"<< conv2String(i) << "\n";
                    }else{
                        yyerror("Error: invalid type");
                    }
                }
                 *($$.term_code) << $11.term_code->str();
                *($$.term_code) << "endfunc\n";
            }
;
ident_term: IDENT {
            string tempstr = $1;
            Var myf = Var();
            myf.var_type = FUNC;
            if(!bool_map(tempstr)){
                add_map(tempstr,myf); 
            }
            $$.term_place = new string();
            *$$.term_place = tempstr;
        };

stmt_loop: stmt_options SEMICOLON stmt_loop{
                $$.term_code = $1.term_code;
                *($$.term_code) << $3.term_code->str();
              } 
            | {$$.term_code = new stringstream();
		$$.vars = new vector<Var>();};

declare_loop:  ident_loop SEMICOLON declare_loop {
                $$.term_code = $1.term_code;
                $$.vars = $1.vars;
                for( int i = 0; i < $3.vars->size(); ++i){
                    $$.vars->push_back((*$3.vars)[i]);
                }
                *($$.term_code) << $3.term_code->str();
                } 
            | {
                $$.term_code = new stringstream();
                $$.vars = new vector<Var>();
              }
            ;


ident_loop:    IDENT ident_loop2 {

                    $$.term_code = $2.term_code;
                    $$.term_type = $2.term_type;
                    $$.term_length = $2.term_length;

                    $$.vars = $2.vars;
                    Var v = Var();
                    v.var_type = $2.term_type;
                    v.var_length = $2.term_length;
                    v.var_place = new string();
                    *v.var_place = $1;
                    $$.vars->push_back(v);
                    if($2.term_type == INT_ARR){
                        if($2.term_length <= 0){
                            yyerror("Error: array size is <= 0.");
                        }
                        *($$.term_code) << ".[] " << $1 << ", " << $2.term_length << "\n";
                        string s = $1;
                        if(!bool_map(s)){
                            add_map(s,v);
                        }
                        else{
                            string tempstr = "Error: Symbol \"" + s + "\" is multiply-defined";
                            yyerror(tempstr.c_str());
                        }
                    }

                    else if($2.term_type == INT){
                        *($$.term_code) << ". " << $1 << "\n";
                        string s = $1;
                        if(!bool_map(s)){
                            add_map(s,v);
                        }
                        else{
                            string tempstr = "Error: Symbol \"" + s + "\" is multiply-defined";
                            yyerror(tempstr.c_str());
                        }
                    }else{
                            yyerror("Error: not a valid type.");
                    }

                }
                ;

ident_loop2:  COMMA IDENT ident_loop2 {
                    $$.term_code = $3.term_code;
                    $$.term_type = $3.term_type;
                    $$.term_length = $3.term_length;
                    $$.vars = $3.vars;
                    Var v = Var();
                    v.var_type = $3.term_type;
                    v.var_length = $3.term_length;
                    v.var_place = new string();
                    *v.var_place = $2;
                    $$.vars->push_back(v);
                    if($3.term_type == INT_ARR){
                        *($$.term_code) << ".[] " << $2 << ", " << $3.term_length << "\n";
                        string s = $2;
                        if(!bool_map(s)){
                            add_map(s,v);
                        }
                        else{
                            string tempstr = "Error: Symbol \"" + s + "\" is multiply-defined";
                            yyerror(tempstr.c_str());
                        }
                    }
                    else if($3.term_type == INT){
                        *($$.term_code) << ". " << $2 << "\n";
                        string s = $2;
                        if(!bool_map(s)){
                            add_map(s,v);
                        }
                        else{
                            string tempstr = "Error: Symbol \"" + s + "\" is multiply-defined";
                            yyerror(tempstr.c_str());
                        }
                    }else{
                    }
                }
                | COLON ident_loop_choice INTEGER {
                    $$.term_code = $2.term_code;
                    $$.term_type = $2.term_type;
                    $$.term_length = $2.term_length;
                    $$.vars = $2.vars;
                }
                ;

ident_loop_choice:  ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF{
                    $$.term_code = new stringstream();
                    $$.vars = new vector<Var>();
                    $$.term_type = INT_ARR;
                    $$.term_length = $3;
                }
                | {
                    $$.term_code = new stringstream();
                    $$.vars = new vector<Var>();
                    $$.term_type = INT;
                    $$.term_length = 0;
                  }
                ;

stmt_options:      

	s1 {
		$$.term_code = $1.term_code;
	}
	| s2 {
		$$.term_code = $1.term_code;
	}
	| s3 {
		$.term_code = $1.term_code;
	}
	| s4 {
		$$.term_code = $1.term_code;
	}
	| s6 {
		$$.term_code = $1.term_code;
	}
	| s7 {
		$$.term_code = $1.term_code;
	}
	| s8 {
		$$.term_code = $1.term_code;
	}
	| s9 {
		$$.term_code = $1.term_code;
	};

s1:    var ASSIGN expression{
                    $$.term_code = $1.term_code;
                    *($$.term_code) << $3.term_code->str();
                    if($1.term_type == INT && $3.term_type == INT){
                       *($$.term_code) << "= " << *$1.term_place << ", " << *$3.term_place << "\n";
                    }
                    else if($1.term_type == INT && $3.term_type == INT_ARR){
                        *($$.term_code) << makeIntCode($1.term_place, "=[]", $3.term_place, $3.term_index);
                    }
                    else if($1.term_type == INT_ARR && $3.term_type == INT && $1.term_value != NULL){
                        *($$.term_code) << makeIntCode($1.term_value, "[]=", $1.term_index, $3.term_place);
                    }
                    else if($1.term_type == INT_ARR && $3.term_type == INT_ARR){
                        string *tempstr = create_temp();
                        *($$.term_code) << vardclr_temp(tempstr) << makeIntCode(tempstr, "=[]", $3.term_place, $3.term_index);
                        *($$.term_code) << makeIntCode($1.term_value, "[]=", $1.term_index, tempstr);
                    }
                    else{
                        yyerror("Error: expression cannot be of NULL type.");
                    }
                }
                ;

s2:    IF bool_exp THEN stmt_loop s2_choice ENDIF{
                    $$.term_code = new stringstream();
                    $$.begin_term = create_label();
                    $$.end_term = create_label();
                    *($$.term_code) << $2.term_code->str() << "?:= " << *$$.begin_term << ", " <<  *$2.term_place << "\n";
                    if($5.begin_term != NULL){                       
                        *($$.term_code) << go_to($5.begin_term); 
                        *($$.term_code) << labdclr_label($$.begin_term)  << $4.term_code->str() << go_to($$.end_term);
                        *($$.term_code) << labdclr_label($5.begin_term) << $5.term_code->str();
                    }
                    else{
                        *($$.term_code) << go_to($$.end_term)<< labdclr_label($$.begin_term)  << $4.term_code->str();
                    }
                    *($$.term_code) << labdclr_label($$.end_term);
                }
                ;

s2_choice:   {
                    $$.term_code = new stringstream();
                    $$.begin_term = NULL;
                }
                | ELSE stmt_loop{
                    $$.term_code = $2.term_code;
                    $$.begin_term = create_label();
                }
                ;

s3:    WHILE bool_exp beg_loop BEGINLOOP stmt_loop ENDLOOP{
                    $$.term_code = new stringstream();
                    $$.begin_term = $3.begin_term;
                    $$.term_parent = $3.term_parent;
                    $$.end_term = $3.end_term;
                    *($$.term_code) << labdclr_label($$.term_parent) << $2.term_code->str() << "?:= " << *$$.begin_term << ", " << *$2.term_place << "\n" 
                    << go_to($$.end_term) << labdclr_label($$.begin_term) << $5.term_code->str() << go_to($$.term_parent) << labdclr_label($$.end_term);
                    loop_stack.pop();

                }
                ;

beg_loop: BEGINLOOP{
                    $$.term_code = new stringstream();
                    $$.begin_term = create_label();
                    $$.term_parent = create_label();
                    $$.end_term = create_label();
                    Loop l = Loop();
                    l.loop_parent = $$.term_parent;
                    l.begin_loop = $$.begin_term;
                    l.end_loop = $$.end_term;
                    loop_stack.push(l);
                };

s4:    DO beg_loop  stmt_loop ENDLOOP WHILE bool_exp{
                    $$.term_code = new stringstream();
                    $$.begin_term = $2.begin_term;
                    $$.term_parent = $2.term_parent;
                    $$.end_term = $2.end_term;
                    *($$.term_code) << labdclr_label($$.begin_term) << $3.term_code->str() << labdclr_label($$.term_parent) << $6.term_code->str() << "?:= " << *$$.begin_term << ", " << *$6.term_place << "\n" << labdclr_label($$.end_term);
                    loop_stack.pop();
                }
                ;

s6:    READ var s6_choice{
                    $$.term_code = $2.term_code;
                    if($2.term_type == INT){
                       *($$.term_code) << ".< " << *$2.term_place << "\n"; 
                    }
                    else{
                       *($$.term_code) << ".[]< " << *$2.term_place << ", " << $2.term_index << "\n"; 
                    }
                    *($$.term_code) << $3.term_code->str();
                }
                ;

s6_choice:   COMMA var s6_choice {
                    $$.term_code = $2.term_code;
                    if($2.term_type == INT){
                       *($$.term_code) << ".< " << *$2.term_place << "\n"; 
                    }
                    else{
                       *($$.term_code) << ".[]< " << *$2.term_place << ", " << $2.term_index << "\n"; 
                    }
                    *($$.term_code) << $3.term_code->str();
                }
                | {
                    $$.term_code = new stringstream();
                  }
                ;

s7:    WRITE var s7_choice{
                    $$.term_code = $2.term_code;
                    if($2.term_type == INT){
                       *($$.term_code) << ".> " << *$2.term_place << "\n"; 
                    }
                    else{
                       *($$.term_code) << ".[]> " << *$2.term_value << ", " << *$2.term_index << "\n"; 
                    }
                    *($$.term_code) << $3.term_code->str();
                  }
                ;

s7_choice:   COMMA var s7_choice{
                    $$.term_code = $2.term_code;
                    if($2.term_type == INT){
                       *($$.term_code) << ".> " << *$2.term_place << "\n"; 
                    }
                    else{
                       *($$.term_code) << ".[]> " << *$2.term_value << ", " << *$2.term_index << "\n"; 
                    }
                    *($$.term_code) << $3.term_code->str();
                  }
                |{
                    $$.term_code = new stringstream();
                 }
                ;

s8: CONTINUE{
                    $$.term_code = new stringstream();
                    if(loop_stack.size() <= 0){
                        yyerror("Error: continue statement cannot be used outside of a loop.");
                    }
                    else{
                        Loop l = loop_stack.top();
                        *($$.term_code) << ":= " << *l.loop_parent << "\n";
                    }
                };

s9: RETURN expression{
                    $$.term_code = $2.term_code;
                    $$.term_place = $2.term_place;
                    *($$.term_code) << "ret " << *$$.term_place << "\n";
                };
bool_exp:       relation_and_expr bool_choice{
                    $$.term_code = $1.term_code;
                    *($$.term_code) << $2.term_code->str();
                    if($2.op != NULL && $2.term_place != NULL)
                    {                        
                        $$.term_place = create_temp();
                       
                       *($$.term_code) << vardclr_temp($$.term_place) << makeIntCode($$.term_place, *$2.op, $1.term_place, $2.term_place);
                     
                    }
                    else{
                        $$.term_place = $1.term_place;
                        $$.op = $1.op;
                    }
                }
                ;

bool_choice:      OR relation_and_expr bool_choice{
                 
                    expression_code($$,$2,$3,"||");


                }
                |{
                    $$.term_code = new stringstream();
                    $$.op = NULL;
                 }
                ; 

relation_and_expr:    

relation_expr relandexpr_choice{
	$$.term_code = $1.term_code;
	*($$.term_code) << $2.term_code->str();
	if($2.op != NULL && $2.term_place != NULL)
	{                        
		$$.term_place = create_temp();
		*($$.term_code) << vardclr_temp($$.term_place) << makeIntCode($$.term_place, *$2.op, $1.term_place, $2.term_place);
 	}
	else{
		$$.term_place = $1.term_place;
		$$.op = $1.op;
	}
};

relandexpr_choice:   AND relation_expr relandexpr_choice{
                    expression_code($$,$2,$3,"&&");

                }
                |{
                    $$.term_code = new stringstream();
                    $$.op = NULL;
                 }
                ;

relation_expr:   rel_choice{
                    $$.term_code = $1.term_code;
                    $$.term_place = $1.term_place; 
                }
                | NOT rel_choice{
                    $$.term_code = $2.term_code;
                    $$.term_place = create_temp();
                    *($$.term_code) << vardclr_temp($$.term_place) << makeIntCode($$.term_place, "!", $2.term_place, NULL);
                }
                ;

rel_choice: expression comp expression{
                    $$.term_code = $1.term_code;
                    *($$.term_code) << $2.term_code->str();
                    *($$.term_code) << $3.term_code->str();
                    $$.term_place = create_temp();
                    *($$.term_code)<< vardclr_temp($$.term_place) << makeIntCode($$.term_place, *$2.op, $1.term_place, $3.term_place);
                }
                | TRUE{                    
                    $$.term_code = new stringstream();
                    $$.term_place = new string();
                    *$$.term_place = "1";
                    }
                | FALSE{
                    $$.term_code = new stringstream();
                    $$.term_place = new string();
                    *$$.term_place = "0";
                  }
                | L_PAREN bool_exp R_PAREN{
                    $$.term_code = $2.term_code;
                    $$.term_place = $2.term_place;
                }
                ;

comp:           EQ{
                    $$.term_code = new stringstream();
                    $$.op = new string();
                    *$$.op = "==";
                  }
                | NEQ{
                    $$.term_code = new stringstream();
                    $$.op = new string();
                    *$$.op = "!=";
                  }
                | LT{
                    $$.term_code = new stringstream();
                    $$.op = new string();
                    *$$.op = "<";
                  }
                | GT{
                    $$.term_code = new stringstream();
                    $$.op = new string();
                    *$$.op = ">";
                  }
                | LTE{
                    $$.term_code = new stringstream();
                    $$.op = new string();
                    *$$.op = "<=";
                  }
                | GTE{
                    $$.term_code = new stringstream();
                    $$.op = new string();
                    *$$.op = ">=";
                  }
                ;

expression:     multiplicative_expression expr_choice{
                    $$.term_code = $1.term_code;
                    *($$.term_code) << $2.term_code->str();
                    if($2.op != NULL && $2.term_place != NULL)
                    {                        
                        $$.term_place = create_temp();
                       *($$.term_code)<< vardclr_temp($$.term_place) << makeIntCode($$.term_place, *$2.op, $1.term_place, $2.term_place);
                    }
                    else{
                        $$.term_place = $1.term_place;
                        $$.op = $1.op;
                    }
                    $$.term_type = INT;
                  }
                ;

expr_choice:   ADD multiplicative_expression expr_choice {

                    expression_code($$,$2,$3,"+");

                  }
                | SUB multiplicative_expression expr_choice{expression_code($$,$2,$3,"-");
                  }
                | {
                    $$.term_code = new stringstream();
                    $$.op = NULL;
                  }
                ;

multiplicative_expression:      term mult_choice{
                    $$.term_code = $1.term_code;
                    *($$.term_code) << $2.term_code->str();
                    if($2.op != NULL && $2.term_place != NULL)
                    {                        
                        $$.term_place = create_temp();
                       *($$.term_code)<< vardclr_temp($$.term_place)<< makeIntCode($$.term_place, *$2.op, $1.term_place, $2.term_place);
                    }
                    else{
                        $$.term_place = $1.term_place;
                        $$.op = $1.op;
                    }
                  }
                ;


mult_choice:    MULT term mult_choice{
                    expression_code($$,$2,$3,"*");

                  }
                | DIV term mult_choice{
                    expression_code($$,$2,$3,"/");
                  }
                | MOD term mult_choice{
                    expression_code($$,$2,$3,"%");
                  }
                |{
                    $$.term_code = new stringstream();
                    $$.op = NULL;
                 }
                ;

term:           SUB term_choice{
                    $$.term_code = $2.term_code;
                    $$.term_place = create_temp();
                    string tempstr = "-1";
                    *($$.term_code)<< vardclr_temp($$.term_place) << makeIntCode($$.term_place, "*",$2.term_place, &tempstr );
                  }
                | term_choice{
                    $$.term_code = $1.term_code;
                    $$.term_place = $1.term_place;
                  }
                | term_paren{
                    $$.term_code = $1.term_code;
                    $$.term_place = $1.term_place;
                  }
                ;

term_choice:         var{
                    $$.term_code = $1.term_code;
                    $$.term_place= $1.term_place;
                    $$.term_index = $1.term_index;
                  }
                | NUMBER{
                    $$.term_code = new stringstream();
                    $$.term_place = new string();
                    *$$.term_place = conv2String($1);
                  }
                | L_PAREN expression R_PAREN{
                    $$.term_code = $2.term_code;
                    $$.term_place = $2.term_place;
                  }
                ;

term_paren:         IDENT L_PAREN term_choice2 R_PAREN{
                    $$.term_code = $3.term_code;
                    $$.term_place = create_temp();
                    *($$.term_code) << vardclr_temp($$.term_place)<< "call " << $1 << ", " << *$$.term_place << "\n";
                    string tempstr = $1;
                    bool_map_dec(tempstr);
                }
                ;

term_choice2:        expression term_comma{
                    $$.term_code = $1.term_code;
                    *($$.term_code) << $2.term_code->str();
                    *($$.term_code) << "param " << *$1.term_place << "\n";
                } 
                | {
                    $$.term_code = new stringstream(); 
                  }
                ;
term_comma:        COMMA term_choice2{
                    $$.term_code = $2.term_code;
                } 
                | {
                    $$.term_code = new stringstream();
                  }

var:            IDENT var_choice{
                    $$.term_code = $2.term_code;
                    $$.term_type = $2.term_type;
                    string tempstr = $1;
                    bool_map_dec(tempstr);
                    if(bool_map(tempstr) && arr_vars[tempstr].var_type != $2.term_type){
                        if($2.term_type == INT_ARR){ /* type is int */
                            string output ="Error: used variable \"" + tempstr + "\" is not of type array.";
                            yyerror(output.c_str());
                        }
                        else if($2.term_type == INT){ /* type is arr int */
                            string output ="Error: used array variable \"" + tempstr + "\" is missing a specified index.";
                            yyerror(output.c_str());
                        }
                    }

                    if($2.term_index == NULL){
                        $$.term_place = new string();
                        *$$.term_place = $1;
                    }
                    else{
                        $$.term_index = $2.term_index;
                        $$.term_place = create_temp();
                        string* tempstr = new string();
                        *tempstr = $1;
                        *($$.term_code) << vardclr_temp($$.term_place) << makeIntCode($$.term_place, "=[]", tempstr,$2.term_index);
                        $$.term_value = new string();
                        *$$.term_value = $1;
                    }
                }
                ;

var_choice:          L_SQUARE_BRACKET expression R_SQUARE_BRACKET{
                    $$.term_code = $2.term_code;
                    $$.term_place = NULL;
                    $$.term_index = $2.term_place;
                    $$.term_type = INT_ARR;
                }
                |{
                    $$.term_code = new stringstream();
                    $$.term_index = NULL;
                    $$.term_place = NULL;
                    $$.term_type = INT;
                 }
                ;
            
%%




string makeIntCode(string *dst, string op, string *src1, string *src2){
    if(op == "!"){
        return op + " " + *dst + ", " + *src1 + "\n";
    }
    else{
        return op + " " + *dst + ", " + *src1 + ", "+ *src2 +"\n";
    }
}

string conv2String(char* s){
    ostringstream c;
    c << s;
    return c.str();
}

string conv2String(int s){
    ostringstream c;
    c << s;
    return c.str();
}
string go_to(string *s){
    return ":= "+ *s + "\n"; 
}
string labdclr_label(string *s){
    return ": " +*s + "\n"; 
}
string vardclr_temp(string *s){
    return ". " +*s + "\n"; 
}
string * create_temp(){
    string * t = new string();
    ostringstream conv;
    conv << temp1;
    *t = "__temp__"+ conv.str();
    temp1++;
    return t;
}
string * create_label(){
    string * t = new string();
    ostringstream conv;
    conv << temp2;
    *t = "__label__"+ conv.str();
    temp2++;
    return t;
}
 
void expression_code( Terminal &nterm, Terminal t2, Terminal t3, string op){
    nterm.term_code = t2.term_code;
    *(nterm.term_code) << t3.term_code->str();
    if(t3.op == NULL){
        nterm.term_place = t2.term_place;
        nterm.op = new string();
        *nterm.op = op;
    }
    else{
        nterm.term_place = create_temp();
        nterm.op = new string();
        *nterm.op = op;

        *(nterm.term_code) << vardclr_temp(nterm.term_place)<< makeIntCode(nterm.term_place , *t3.op, t2.term_place, t3.term_place);
    } 
}


void add_map(string name, Var v){
    if(arr_vars.find(name) == arr_vars.end()){
        arr_vars[name] = v;
    }
    else{
        string tempstr = "ERROR: " + name + " already exists.";
        yyerror(tempstr.c_str());
    }
}
bool bool_map(string name){
    if(arr_vars.find(name) == arr_vars.end()){
        return false;
    }
    return true;
}
void bool_map_dec(string name){
    if(!bool_map(name)){
        string tempstr = "ERROR: No name of \"" + name + "\" in map.";
        yyerror(tempstr.c_str());
    }
}


int yyerror(const char *s)
{
    extern int line_cnt;
    extern int cursor_pos;
    pass = false;
    printf(">>> Line %d, position %d: %s\n",line_cnt,cursor_pos,s);
    return -1;
}


int main(int argc, char **argv) {
    FILE *filein;

    if ((argc > 1) && (filein = fopen(argv[1],"r")) == NULL){
        printf("syntax: %s filename\n", argv[0]);
        return 1;
    }

    yyparse();

    if(pass){
        ofstream file;
        file.open("mil_code.mil");
        file << all_code->str();
        file.close();
    }
    else{
        cout << "Program failed to run." << endl;
    }


    return 0;
}
