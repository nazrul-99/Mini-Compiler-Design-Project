%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>
	#include "1707086.tab.h"
	
%}

identifiers [a-zA-Z]([a-zA-Z0-9])*
import "import "[a-zA-Z]([a-zA-Z])*

comment [&][&].*
multiple_line_comment [ ]*[&][*][&][a-zA-Z0-9!@#*(){}_+-,.:\|?><\n\t ]*[&][*][&]


%%

{comment}	{printf("\nSingle line comment\n");}
{multiple_line_comment}	{printf("\nMultiple line comment\n");}



"["		{ return LB; }
"]"		{ return RB; }
","		{ return CM; }
";"		{ return SM; }
"<"	 { return LAB; }
">"	  { return RAB; }


"integer"	{return INT;}
"float"		{return FLOAT;}
"double"	{return DOUBLE;}
"character"	{return CHAR;}
":"			{return COL;}
[0-9]+		{yylval.num = atoi(yytext); return NUM;}



"++" 	{return PLUS;}
"--"	{return MINUS;}
"**"	{return MULT;}
"//"	{return DIV;}
"!"		{return FACT;}

"#++"   {return inc;}
"#--"	{return dec;}
"^"		{return not;}


"->"	{return ASSIGN;}

">>"	{return GT;}
"<<"	{return LT;}
">="	{return GE;}
"<="	{return LE;}
"=="	{return EQUAL;}
"!="	{return NOTEQUAL;}


"if"	{return IF;}
"else"	{return ELSE;}
"elif"	{return ELIF;}

"control"	{return SWITCH;}
"event"		{return CASE;}
"Default"	{return DEFAULT;}


"loop"	{return FOR;}	
"While" {return WHILE;}


"function main"		{return VOIDMAIN;}
"function "[a-zA-Z]([a-zA-Z])*	{return FUNCTION;}

{identifiers}	{yylval.varname = strdup(yytext); return VAR;}

{import}	{printf("Header file \n");}

[ \t\n]*	{;}

.	{yyerror("Unknown Character.\n");}

%%

int main()
{
	yyin = freopen("input.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);
	yyparse();	
}