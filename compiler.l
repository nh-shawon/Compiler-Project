/* C Declarations */

%{
	#include<stdio.h>
	#include "compiler.tab.h"
	#include<stdlib.h>
	extern int yylval;
%}

/* RE and Actions */
digit [0-9]
character [a-z]
multiLineComment [!][-][-](.*|\n)+[-][-][!]
singleLineComment [!][-].*\n
header [@].+\n

%%

{digit}+	{ 
			yylval = atoi(yytext);
			return NUM;
		}

{character}	{
			yylval = *yytext - 'a';
			return	VAR;
		}

"if"	{ 
			return IF;
		}
"else"	{ 
			return ELSE;	
		}

[-+/*<>=,(){};:] 	{
					yylval = yytext[0];
					return *yytext;
				}




"%"	        { return '%'		;}
"^"	        { return '^'		;}

"main function"     { return(MAINFUNCTION)  	;}

"print"  	{ return PRINT 		;}

"int"    	{ return(INT)		;}

"float"  	{ return(FLOAT)		;}

"char"   	{ return(CHAR)		;}

"repeat"	{ return REPEAT 	;}
"case"		{ return CASE  		;}

"default"        {return DEFAULT	;}

"switch"	{ return SWITCH 	;}
"square"        { return SQUARE         ;}

{singleLineComment}          {}
{multiLineComment}           {}
{header}                     {}

[ \t\n]*	;

.	{
		
		yyerror("Unknown Character.\n");
	}
%%

main(){
	yyin = freopen("in.txt","r",stdin);
	yyout = freopen("out.txt","w",stdout);
	yyparse();
}

