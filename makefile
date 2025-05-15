all:	clean y.tab.c lex.yy.c
	gcc lex.yy.c y.tab.c -lfl -o calc

y.tab.c:
	bison -y -d B113040047.y

lex.yy.c:
	flex B113040047.l

clean:
	rm -f calc lex.yy.c y.tab.c y.tab.h
