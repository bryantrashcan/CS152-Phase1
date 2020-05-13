all:
	flex sample.lex
	gcc lex.yy.c -lfl -o lexer

test:
	./lexer test.txt < sample.lex

clean:
	rm -f lex.yy.c lexer

