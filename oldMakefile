all: 
	flex minil.lex
	bison -v -d --file-prefix=y minil.y
	gcc -o parser y.tab.c lex.yy.c -lfl

test:	all
	
	./parser test.txt

clean:
	rm parser lex.yy.c y.tab.h y.tab.c y.output 

