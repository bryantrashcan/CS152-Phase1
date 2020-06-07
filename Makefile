parser: mini_l.lex mini_l.yy
	bison -v -d --file-prefix=parser mini_l.yy
	flex mini_l.lex
	g++ -std=c++11 -o parser parser.tab.cc lex.yy.c -lfl

	


test:			parser
			rm -f mil_code.mil
			cat fibonacci.min | parser
			mil_run mil_code.mil < inp.txt

clean:
	rm -f lex.yy.c parser.tab.* parser.output *.o parser location.hh position.hh stack.hh 


