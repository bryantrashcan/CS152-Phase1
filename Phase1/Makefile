CXX=g++
CXXFLAGS=-lfl -g
BISONFLAGS=-v -d --file-prefix=y
OBJS=bison.o lex.o

all: $(OBJS)
	$(CXX) $(OBJS) -o parserexe $(CXXFLAGS)
lex.o: lex.yy.c
	$(CXX) -c lex.yy.c -o lex.o
lex.yy.c: sample.lex
	flex sample.lex
bison.o: y.tab.c
	$(CXX) -c y.tab.c -o bison.o
y.tab.c: minil.y
	bison $(BISONFLAGS) minil.y
clean:
	rm -f parserexe y.tab.* lex.yy.* *.out* *.o *.mil *.stat

