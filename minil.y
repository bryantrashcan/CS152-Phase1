%{
/*valid c code declaration*/
#include <stdio.h>
extern FILE * yyin;
extern int currLine;
extern int currPos;
void yyerror(const char *msg);

%}

/* declarations*/

%union{
	char * cVal;
	int iVal;
}


%error-verbose
%start program_start
%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY
%token INTEGER ARRAY OF 
%token IF THEN ENDIF ELSE WHILE DO FOR BEGINLOOP ENDLOOP CONTINUE
%token READ WRITE
%token AND OR NOT TRUE FALSE RETURN
%token SUB ADD MULT DIV MOD EQ NEQ LT GT LTE GTE 
%token NUMBER IDENT
%token SEMICOLON COLON COMMA L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET ASSIGN





%%

/*grammar rules*/
program_start: functions {printf("program_start -> functions\n");}

functions: /*epsilon*/ {printf("functions -> EPSILON\n");}
	 | function functions {printf("functions -> function functions\n");}

function: FUNCTION IDENT SEMICOLON BEGIN_PARAMS declare_loop END_PARAMS BEGIN_LOCALS declare_loop END_LOCALS BEGIN_BODY stmt_loop END_BODY{printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declare_loop END_PARAMS BEGIN_LOCALS declare_loop END_LOCALS BEGIN_BODY stmt_loop END_BODY\n");}

/*-------------------------------------------*/
/* All terminals associated with declaration */
/*-------------------------------------------*/

declare_loop: /*epsilon*/ {printf("declare_loop -> EPSILON\n");}
	    | IDENT ident_loop COLON dclr_choice INTEGER SEMICOLON declare_loop {printf("declare_loop -> IDENT ident_loop COLON dclr_choice INTEGER SEMICOLON declare_loop\n");}

ident_loop: /*epsilon*/{printf("ident_loop -> EPSILON\n");}
	  | COMMA IDENT ident_loop {printf("ident_loop->IDENT COMMA ident_loop\n");}

dclr_choice: /*epsilon*/ {printf("dclr_choice -> EPSILON\n");}
	    | ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET dclr_choice2 OF {printf("dclr_choice -> AARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET dclr_choice2 OF\n");}

dclr_choice2: /*epsilon*/ {printf("dclr_choice2 -> EPSILON\n");}
	    | L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET {printf("dclr_choice2 -> L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET\n");}

/*-----------------------------------------*/
/* All terminals associated with stmt_loop */
/*-----------------------------------------*/

stmt_loop: stmt_options SEMICOLON choose_tostop {printf("stmt_loop -> stmt_options SEMICOLON choose_to_stop\n");}

choose_tostop: /*epsilon*/ {printf("choose_tostop -> EPSILON\n");}
	     | stmt_loop {printf("choose_tostop -> stmt_loop\n");}

stmt_options: s1 {printf("stmt_options -> s1\n");}
	    | s2 {printf("stmt_options -> s2\n");}
	    | s3 {printf("stmt_options -> s3\n");}
            | s4 {printf("stmt_options -> s4\n");}
            | s5 {printf("stmt_options -> s5\n");}
            | s6 {printf("stmt_options -> s6\n");}
            | s7 {printf("stmt_options -> s7\n");}
            | s8 {printf("stmt_options -> s8\n");}
            | s9 {printf("stmt_options -> s9\n");}

s1: var ASSIGN expression {printf("s1 -> var ASSIGN expression\n");}

s2: IF bool_expr THEN stmt_options SEMICOLON s2_choice ENDIF {printf("s2 -> IF bool_expr THEN stmt_options SEMICOLON s2_choice ENDIF\n");}
s2_choice: /*epsilon*/ {printf("s2_choice -> EPSILON\n");}
	 | stmt_options SEMICOLON s2_choice {printf("s2_choice -> stmt_options SEMICOLON\n");}
	 | ELSE stmt_options SEMICOLON s2_choice2 {printf("s2_choice -> ELSE stmt_options SEMICOLON s2_choice2\n");}
s2_choice2: /*epsilon*/ {printf("s2_choice2 -> EPSILON\n");}
	  | stmt_options SEMICOLON s2_choice2 {printf("s2_choice2 -> stmt_options SEMICOLON s2_choice2\n");} 

s3: WHILE bool_expr BEGINLOOP stmt_options SEMICOLON s3_choice ENDLOOP {printf("s3 -> WHILE bool_expr BEGINLOOP stmt_options SEMICOLON s3_choice ENDLOOP\n");}
s3_choice: /*epsilon*/ {printf("s3_choice -> EPSILON\n");}
	 | stmt_options SEMICOLON s3_choice {printf("s3_choice -> stmt_options SEMICOLON s3_choice\n");} 

s4: DO BEGINLOOP stmt_options SEMICOLON s4_choice ENDLOOP WHILE bool_expr {printf("s4 -> DO BEGINLOOP stmt_options SEMICOLON s4_choice ENDLOOP WHILE bool_expr\n");}
s4_choice: /*epsilon*/ {printf("s4_choice -> EPSILON\n");}
	 | stmt_options SEMICOLON s4_choice {printf("s4_choice -> stmt_options SEMICOLON s4_choice\n");} 

s5: FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP stmt_options SEMICOLON s5_choice ENDLOOP {printf("s5 -> FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP stmt_options SEMICOLON s5_choice ENDLOOP\n");}
s5_choice: /*epsilon*/ {printf("s5_choice -> EPSILON\n");}
	 |stmt_options SEMICOLON s5_choice {printf("s5_choice -> stmt_options SEMICOLON s5_choice\n");} 

s6: READ var s6_choice {printf("s6 -> READ var s6_choice\n");}
s6_choice: /*epsilon*/ {printf("s6_choice -> EPSILON\n");}
	   | COMMA var s6_choice {printf("s6_choice -> COMMA var s6_choice\n");} 

s7: WRITE var s7_choice {printf("s6 -> WRITE var s7_choice\n");}
s7_choice: /*epsilon*/ {printf("s7_choice -> EPSILON\n");}
	 | COMMA var s7_choice {printf("s7_choice -> COMMA var s7_choice\n");} 

s8: CONTINUE {printf("s8 -> CONTINUE\n");} 

s9: RETURN expression {printf("s9 -> RETURN expression\n");} 

bool_expr: relation_and_expr bool_choice {printf("bool_expr -> relation_and_expr bool_choice\n");}
bool_choice: /*epsilon*/ {printf("bool_choice -> EPSILON\n");}
	   | OR relation_and_expr bool_choice {printf("bool_choice -> OR relation_and_expr bool_choicen");}

relation_and_expr: relation_expr relandexpr_choice {printf("relation_and_expr -> relation_expr relandexpr_choice\n");}
relandexpr_choice: /*epsilon*/ {printf("relandexpr_choice -> EPSILON\n");}
	         | AND relation_expr relandexpr_choice {printf("relandexpr_choice -> AND relation_expr relandexpr_choice\n");}


relation_expr: rel_choice {printf("relation_expr -> rel_choice\n");}
 	     | NOT rel_choice {printf("relation_expr -> NOT rel_choice\n");}
rel_choice: expression comp expression {printf("rel_choice -> expression comp expression\n");}
	  | TRUE {printf("rel_choice -> TRUE \n");}
   	  | FALSE {printf("rel_choice -> FALSE\n");}
	  | L_PAREN bool_expr R_PAREN {printf("rel_choice -> L_PAREN bool_expr R_PAREN\n");}

comp: EQ {printf("comp -> EQ\n");}
    | NEQ {printf("comp -> NEQ\n");}
    | LT {printf("comp -> LT\n");}
    | GT {printf("comp -> GT\n");}
    | LTE {printf("comp -> LTE\n");}
    | GTE  {printf("comp -> GTE\n");}

/* variable */
var: IDENT var_choice {printf("var -> IDENT var_choice\n");}

var_choice: /*epsilon*/ {printf("var_choice -> EPSILON\n");}
	  | L_SQUARE_BRACKET expression R_SQUARE_BRACKET var_choice2 {printf("var_choice -> IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET var_choice2\n");}

var_choice2: /*epsilon*/ {printf("var_choice2 -> EPSILON\n");}
	   | L_SQUARE_BRACKET expression R_SQUARE_BRACKET {printf("var_choice2 -> IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET var_choice2\n");}
/* end of variable */

/* expression */
expression: multiplicative_expression expr_choice {printf("expression -> multiplicative_expr expr_choice\n");}
expr_choice: /*epsilon*/ {printf("expr_choice -> EPSILON\n");}
	   | expr_choice2 multiplicative_expression expr_choice {printf("expr_choice -> expr_choice2 multiplicative_expression expr_choice\n");}
expr_choice2: ADD {printf("expr_choice2 -> ADD\n");}
	    |SUB {printf("expr_choice2 -> SUB\n");}

multiplicative_expression: term mult_choice {printf("multiplicative_expression -> term mult_choice\n");}
mult_choice: /*epsilon*/ {printf("mult_choice -> EPSILON\n");}
	   | mult_choice2 term mult_choice {printf("mult_choice -> mult_choice2 term mult_choice\n");}
mult_choice2: MOD {printf("mult_choice2 -> MOD\n");}
	    | DIV {printf("mult_choice2 -> DIV\n");}
            | MULT {printf("mult_choice2 -> MULT\n");}

term: term_choice {printf("term -> term_choice\n");}
    | SUB term_choice {printf("term -> SUB term_choice\n");}
    | IDENT L_PAREN term_choice2 R_PAREN {printf("term -> IDENT L_PAREN term_choice2 R_PAREN\n");}
term_choice: var {printf("term_choice -> var\n");}
	   | NUMBER {printf("term_choice -> NUMBER\n");}
	   | L_PAREN expression R_PAREN {printf("term_choice -> L_PAREN expression R_PAREN\n");}

term_choice2: /*epsilon*/ {printf("term_choice2 -> EPSILON\n");}
	    | expression term_comma {printf("term_choice2 -> expression term_comma\n");}
term_comma: /*epsilon*/ {printf("term_comma -> EPSILON\n");}
	    | COMMA term_choice2 {printf("term_comma -> COMMA term_choice2\n");}



%%

/*user code like main file and main functions*/
int main(int argc, char ** argv)
{
   if(argc >= 2)
   {
      yyin = fopen(argv[1], "r");
      if(yyin == NULL)
      {
         yyin = stdin;
      }
   }
   else
   {
      yyin = stdin;
   }
   
   yyparse();
}

void yyerror(const char *msg){

	printf("Error: Line %d, position %d: %s\n", currLine,currPos,msg);
}

