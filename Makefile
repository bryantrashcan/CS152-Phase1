# Makefile


OBJS	= mini_l.y mini_l.lex  #bison.o lex.o main.o

CC		= g++
CFLAGS	= -g -Wall -ansi -pedantic

parser:		$(OBJS)
			bison -v -d --file-prefix=y mini_l.y
			flex mini_l.lex
			g++ -o parser -x c++ y.tab.c lex.yy.c -lfl #-std=c++11 -Wno-deprecated-register
			#g++ -o parser -x c++ y.tab.c lex.yy.c -ll -std=c++11 -Wno-deprecated-register


test:			parser
			rm -f mil_code.mil
			cat fibonacci.min | parser
			mil_run mil_code.mil < inp.txt


		

clean:
		rm -f *.o *~ lex.c lex.yy.c bison.c tok.h y.tab.c y.tab.h y.output parser 

