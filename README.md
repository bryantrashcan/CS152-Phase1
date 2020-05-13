# CS152-Phase1
To use parser,

flex sample.lex

bison -v -d --file-prefix=y minil.y

gcc -o parser y.tab.c lex.yy.c -lfl

./parser test.txt (or whatever test file)
