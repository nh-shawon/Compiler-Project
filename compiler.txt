bison -d compiler.y
flex compiler.l
gcc lex.yy.c compiler.tab.c -o app
app