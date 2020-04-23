   /* cs152-fall08 */
   /* A flex scanner specification for the calculator language */
   /* Written by Dennis Jeffrey */

%{   
   int currLine = 1, currPos = 1;
%}

COMMENT ##.*
DIGIT		[0-9]
LETTER		[a-zA-Z]
IDENT_NUM	{DIGIT}*
ERR_NOTVAR	({DIGIT}|[_])({LETTER}|{DIGIT}|[_])*(({LETTER}|{DIGIT})+)*
ERR_UND		{LETTER}({LETTER}|{DIGIT}|[_])*([_])+
IDENT_VAR	{LETTER}*|({LETTER}({DIGIT}|{LETTER}|[_])*(({LETTER}|{DIGIT})+)*)

   
%%
{COMMENT}
"function"	printf("FUNCTION\n"); currPos += yyleng;
"beginparams"	printf("BEGIN_PARAMS\n"); currPos += yyleng;
"endparams"	printf("END_PARAMS\n"); currPos += yyleng;
"beginlocals"	printf("BEGIN_LOCALS\n"); currPos += yyleng;
"endlocals"	printf("END_LOCALS\n"); currPos += yyleng;
"beginbody"	printf("BEGIN_BODY\n"); currPos += yyleng;
"endbody"		printf("END_BODY\n"); currPos += yyleng;
"beginloop"	printf("BEGINLOOP\n"); currPos += yyleng;
"endloop"		printf("ENDLOOP\n"); currPos += yyleng;
"if"		printf("IF\n"); currPos += yyleng;
"endif"		printf("ENDIF\n"); currPos += yyleng;
"write"		printf("WRITE\n"); currPos += yyleng;
"then"		printf("THEN\n"); currPos += yyleng;
"continue"	printf("CONTINUE\n"); currPos += yyleng;
"while"		printf("WHILE\n"); currPos += yyleng;
"\>\="		printf("GTE\n"); currPos += yyleng;
"else"		printf("ELSE\n"); currPos += yyleng;
"\:\="		printf("ASSIGN\n"); currPos += yyleng;
"\;"		printf("SEMICOLON\n"); currPos += yyleng;
"\:"		printf("COLON\n"); currPos += yyleng;
"write"		printf("WRITE\n"); currPos += yyleng;
"\["		printf("L_SQUARE_BRACKET\n"); currPos += yyleng;
"\]"		printf("R_SQUARE_BRACKET\n"); currPos += yyleng;
"\<\="		printf("LEQ\n"); currPos += yyleng;
"\=\="		printf("EQ\n"); currPos += yyleng;
"do"		printf("DO\n"); currPos += yyleng;
"\%"		printf("MOD\n"); currPos += yyleng;
"\<"		printf("LT\n"); currPos += yyleng;
"\>"		printf("GT\n"); currPos += yyleng;
"\+"		printf("ADD\n"); currPos += yyleng;
"\-"		printf("SUB\n"); currPos += yyleng;
"\*"		printf("MULT\n"); currPos += yyleng;
"\/"		printf("DIV\n"); currPos += yyleng;
"or"		printf("OR\n"); currPos += yyleng;
"true"		printf("TRUE\n"); currPos += yyleng;
"false"		printf("FALSE\n"); currPos += yyleng;
"and"		printf("AND\n"); currPos += yyleng;
"array"		printf("ARRAY\n"); currPos += yyleng;
"read"		printf("READ\n"); currPos += yyleng;
"return"		printf("RETURN\n"); currPos += yyleng;
"of"		printf("OF\n"); currPos += yyleng;
"\,"		printf("COMMA\n"); currPos += yyleng;
"integer"		printf("INTEGER\n"); currPos += yyleng;
[ \t]+         {/* ignore spaces */ currPos += yyleng;}
"\n"           {currLine++; currPos = 1;}

\(		printf("L_PAREN\n"); currPos += yyleng;
\)		printf("R_PAREN\n"); currPos += yyleng;
\<\>		printf("NEQ\n"); currPos += yyleng;
not		printf("NOT\n"); currPos += yyleng;
{IDENT_NUM}	printf("NUMBER %s\n",yytext);currPos += yyleng;
{ERR_NOTVAR}	fprintf(stderr,"Error at line %d, column %d: identifier \"%s\" must begin with a letter\n",currLine,currPos,yytext);exit(0);
{ERR_UND}		fprintf(stderr,"Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n",currLine,currPos,yytext);exit(0);
{IDENT_VAR}	printf("IDENT %s\n",yytext);currPos += yyleng;
.              {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}
%%

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
   
   yylex();
}

