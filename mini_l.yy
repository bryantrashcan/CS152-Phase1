
%{
%}


%skeleton "lalr1.cc" 
%require "3.0.4"
%defines
%define api.token.constructor
%define api.value.type variant
%define parse.error verbose
%locations


%code requires
{
	/* you may need these header files 
	 * add more header file if you need more
	 */
#include <list>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <functional>
	/* define the sturctures using as types for non-terminals */


#ifndef __struct_h__
#define __struct_h__

enum Type {INT,INT_ARR,FUNC};



struct ExprStruct{
        
	std::vector<std::string> code; 
	
};

struct StmtStruct{
	std::vector<std::string> code;
	std::string place; 
	std::string begin;
	std::string end;

};

bool checkKeyword(std::string id);
#endif
	/* end the structures for non-terminal types */
}



%code
{
#include "parser.tab.hh"

	/* you may need these header files 
	 * add more header file if you need more
	 */
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <regex>
#include <set>
yy::parser::symbol_type yylex();
std::vector<std::string> allcode;
	/* define your symbol table, global variables,
	 * list of keywords or any function you may need here */
	std::map<std::string,Type> symbol_table;
	std::string test;
	std::stringstream *out_code;

	std::vector<std::string> keywords = {"function", "beginparams", "endparams", "beginlocals", "endlocals", "beginbody", "endbody", "integer", "array", "of", "if", "then", "endif", "else", "while", "do", "for", "beginloop", "endloop", "continue", "read", "write", "and", "or", "not", "true", "false", "return"};
	/* end of your code */
}

%token END 0 "end of file";

	/* specify tokens, type of non-terminals and terminals here */



%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY
%token INTEGER ARRAY OF 
%token IF THEN ENDIF ELSE WHILE DO FOR BEGINLOOP ENDLOOP CONTINUE
%token READ WRITE
%token AND OR NOT TRUE FALSE RETURN
%token SUB ADD MULT DIV MOD EQ NEQ LT GT LTE GTE 
%token SEMICOLON COLON COMMA L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET ASSIGN
%token IDENT_VAR IDENT_NUM
%type <int> IDENT_NUM
%type <std::string> IDENT_VAR

%type <ExprStruct> prog_start functions
%type <StmtStruct> dclr_loop function stmt_loop checkID


	/* end of token specifications */

%%

%start prog_start;

	/* define your grammars here use the same grammars 
	 * you used in Phase 2 and modify their actions to generate codes
	 * assume that your grammars start with prog_start
	 */

prog_start: functions{
		$$.code.insert($$.code.end(), $1.code.begin(), $1.code.end());
		allcode.insert(allcode.end(), $$.code.begin(), $$.code.end());
		out_code = new std::stringstream();
		*(out_code) << "testthisshouldwork";
		
		for(int i = 0; i < allcode.size(); ++i){
			*(out_code) << "hello";
		}
		

	    };

functions: 

	   | function functions {
		*(out_code) << "testthisshouldwork";
		$$.code.insert($$.code.end(), $1.code.begin(), $1.code.end());
		$$.code.insert($$.code.end(), $2.code.begin(), $2.code.end());
	   }	   
;

function: FUNCTION checkID SEMICOLON BEGIN_PARAMS dclr_loop END_PARAMS BEGIN_LOCALS dclr_loop END_LOCALS BEGIN_BODY stmt_loop SEMICOLON END_BODY{
	$$.code.insert($$.code.end(), $2.code.begin(), $2.code.end());
	$$.code.insert($$.code.end(), $5.code.begin(), $5.code.end());
	$$.code.insert($$.code.end(), $8.code.begin(), $8.code.end());
	$$.code.insert($$.code.end(), $11.code.begin(), $11.code.end());
	
	} 

checkID: IDENT_VAR{ /* check if ident */
		std::string ident = $1;
		symbol_table.insert(std::pair<std::string, Type>(ident, Type::FUNC));
		if(checkKeyword(ident) == true){
			 yy::parser::error(@1, "Identifier \"" + ident + "\" cannot be used to describe a function.");
		
		} 
		allcode.push_back(ident);
	}
	

dclr_loop:
stmt_loop:

		


%%

int main(int argc, char *argv[])
{
	
	yy::parser p;
	
	return p.parse();
	std::ofstream file;
        file.open("mil_code.mil");
        file << out_code->str();
        file.close();
	
}

void yy::parser::error(const yy::location& l, const std::string& m)
{
	std::cerr << l << ": " << m << std::endl;
}

bool checkKeyword(std::string id){
	for(int i = 0; i < keywords.size(); ++i){
		if(keywords.at(i) == id){
			return true;
		}
	}
	return false;
}
