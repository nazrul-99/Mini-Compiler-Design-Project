%{
	#include<stdio.h>
	#include <math.h>
	#include<string.h>
	int cnt=1,cntt=1,cnt2=1,val,track=0;
	typedef struct entry {
    	char *str;
    	int n;
	}storage;
	storage store[1000],symbol[1000];
	void insert (storage *p, char *s, int n);
	int key_for_storage_table(char *key);
	int key_for_symbol_table(char *key);
	
%}

%union 
{
        int num;
        char *varname;
}


%token <num> NUM
%token <varname> VAR 
%token <varname> IF ELIF ELSE VOIDMAIN FUNCTION INT FLOAT DOUBLE CHAR LB RB LAB RAB CM SM PLUS MINUS MULT DIV POW FACT ASSIGN FOR COL WHILE BREAK COLON DEFAULT CASE SWITCH inc dec not funct 
%type <varname> statement
%type <num> expression 
%type <num> switch_expression
%nonassoc IFX
%nonassoc ELIFX
%nonassoc ELSE
%left LT GT GE LE EQUAL NOTEQUAL
%left PLUS MINUS
%left MULT DIV
%left FACT
%right POW


%%

program: program VOIDMAIN LB RB LAB cstatement RAB {printf("\nSuccessful compilation\n");}
	| FUNCTION LB cstatement RB LAB cstatement RAB	{printf("\nFunction Declaration Successful\n");}
	;

cstatement: 
	| cstatement statement	
	| cdeclaration
	;

cdeclaration: TYPE ID1 SM {printf("\nvalid declaration\n");}
	;

TYPE: INT
    | FLOAT
    | CHAR
    ;

ID1: ID1 CM VAR	{	if(key_for_storage_table($3)) {
						printf("\n%s is already declared one\n", $3 );
					} else {
						insert(&store[cnt],$3, cnt);
						cnt++;			
					}
				}

    | VAR	{	if(key_for_storage_table($1)) {
					printf("\n%s is already declared here\n", $1 );
				} else {
					insert(&store[cnt],$1, cnt);
					cnt++;
				}
			}
    ;


statement: SM 

	| expression SM {printf("\nvalue of expression: %d\n", ($1));}

	| VAR ASSIGN expression SM {	if(key_for_storage_table($1)) {
										int i = key_for_symbol_table($1);
										if (!i){
											insert(&symbol[cntt], $1, $3);
											cntt++;
										}
										symbol[i].n = $3;
										printf("\n(%s) Value of the variable: %d\t\n",$1,symbol[i].n );
									} else {
										printf("\n%s not declared yet\n",$1);
									}
							
								}

	| SWITCH LB switch_expression RB LAB CONTROL RAB {printf("\nSWITCH case.\n");}

	| IF LB expression RB LAB expression SM RAB %prec IFX 	{	if($3) {
																	printf("\nValue of expression in IF: %d\n",($6));
																} else {
																	printf("\ncondition value zero in IF block\n");
																}
														 	}

	| IF LB expression RB LAB expression SM RAB ELSE LAB expression SM RAB {	if($3) {
																					printf("\nValue of expression in IF: %d\n",$6);
																				} else {
																					printf("\nValue of expression in ELSE: %d\n",$11);
																				}
								                                            }

	| IF LB expression RB LAB IF LB expression RB LAB expression SM RAB ELSE LAB expression SM RAB expression SM RAB ELSE LAB expression SM RAB %prec IFX {	  if($3) {
											if($8) {
												printf("\nValue of expression in between IF: %d\n",$11);
											} else {
												printf("\nValue of expression in between ELSE: %d\n",$16);
											}
											printf("\nValue of expression in parent IF: %d\n",$19);
										} else {
											printf("\nValue of expression in parent ELSE: %d\n",$24);
										}
								    }

	| IF LB expression RB LAB expression SM RAB ELSE LAB IF LB expression RB LAB expression SM RAB ELSE LAB expression SM RAB expression SM RAB   {	  if($3) {
									printf("\nValue of expression in parent IF: %d\n",$6);
									} else {
										if($13) {
												printf("\nValue of expression in between IF: %d\n",$16);
										} else {
												printf("\nValue of expression in between ELSE: %d\n",$21);
										}
										printf("\nValue of expression in parent ELSE: %d\n",$24);
									}
							}							    

	| IF LB expression RB LAB expression SM RAB ELIF LB expression RB LAB expression SM RAB ELSE LAB expression SM RAB {
								 	if($3) {
										printf("\nvalue of expression in IF: %d\n",$6);
									} else if($11) {
										printf("\nvalue of expression in ELIF: %d\n",$14);
									} else {
										printf("\nvalue of expression in ELSE: %d\n",$19);
									}
								}			

	| FOR LB NUM CM NUM CM NUM RB LAB cstatement RAB {
	    	int i=0;
	    	printf("\n");
			int a = $7;
	    	for(i = $3; i <= $5; i=i+a) { 
	   			printf("For loop statement and iterator i is %d\n", i);
	    	}
            printf("\n");
		}

	| WHILE LB expression LT expression RB LAB cstatement RAB   {
			int i = $3;
			printf("\n");
            while(i < $5) {
				printf("While loop\n");
				++i;
			}
			if ($3 >= $5) {
				printf("While loop did not run\n");
			}
		}

	| WHILE LB expression GT expression RB LAB cstatement RAB   {
            int i = $3;
			printf("\n");
            while(i > $5) {
				printf("While loop\n");
				--i;
			}
			if ($3 <= $5) {
				printf("While loop did not run\n");
			}
		}
	
	| WHILE LB expression GE expression RB LAB cstatement RAB   {
           int i = $3;
		   printf("\n");
            while(i >= $5) {
				printf("While loop\n");
				--i;
			}
			if ($3 < $5) {
				printf("While loop did not run\n");
			}
		}

	| WHILE LB expression LE expression RB LAB cstatement RAB   {
            int i = $3;
			printf("\n");
            while(i <= $5) {
				printf("\nWhile loop\n");
				++i;
			}
			if ($3 > $5) {
				printf("While loop did not run\n");
			}
		}

	| FUNCTION LB cstatement RB SM	{printf("\nFunction Called\n");}

	;


	
CONTROL : CONDITION
    | CONDITION STANDARD
    ;

CONDITION :
    | CONDITION EVENT
    ;

EVENT : CASE NUM COL expression SM 	{ 	if(val==$2) {
							  				track=1;
							  				printf("\nCase No : %d  and Result :  %d\n",$2,$4);
										}
									}
	;

STANDARD: DEFAULT COL expression SM {	if(track!=1) {
											printf("\nResult in default Value is :  %d\n",$3);
										}
										track=0;
									}
	;
   


expression: NUM				{ $$ = $1; 	}

	| VAR				{ $$ = symbol[key_for_symbol_table($1)].n ; printf("\nVariable value: %d\n",$$);}

	| expression PLUS expression	{ $$ = $1 + $3; }

	| expression MINUS expression	{ $$ = $1 - $3; }

	| expression MULT expression	{ $$ = $1 * $3; }

	| expression DIV expression	{ 	if($3) 
				  		{
				     			$$ = $1 / $3;
				  		}
				  		else
				  		{
							$$ = 0;
							printf("\nDivision by zero\t");
				  		} 	
				    	}

	| expression FACT {
						int mult=1 ,i;
						for(i=$1;i>0;i--)
						{
							mult=mult*i;
						}
						$$=mult;
						
					 }	

	| expression LT expression	{ $$ = $1 < $3; }

	| expression GT expression	{ $$ = $1 > $3; }

	| expression LE expression	{ $$ = $1 <= $3; }

	| expression GE expression	{ $$ = $1 >= $3; }

	| expression EQUAL expression { $$ = $1 == $3; }

	| expression NOTEQUAL expression { $$ = $1 != $3; }

	| LB expression RB { $$ = $2; }
	
	| inc expression inc { $$=$2+1; printf("\ninc value: %d\n",$$);}

	| dec expression dec { $$=$2-1; printf("\ndec value: %d\n",$$);}

	| not expression not{
							if($2 != 0) {
								$$ = 0; printf("\nnot value: %d\n",$$);
							} else{
								$$ = 1 ; printf("\naffirmative value: %d\n",$$);
							}
						}
	;



switch_expression: NUM				{ $$ = $1; val = $$;	}

	| VAR				{ $$ = symbol[key_for_symbol_table($1)].n ; val = $$;}

	| switch_expression PLUS switch_expression	{ $$ = $1 + $3; val = $$; }

	| switch_expression MINUS switch_expression	{ $$ = $1 - $3; val = $$; }

	| switch_expression MULT switch_expression	{ $$ = $1 * $3;  val = $$;}

	| switch_expression DIV switch_expression	{ 	if($3) 
				  		{
				     			$$ = $1 / $3; val = $$;
				  		}
				  		else
				  		{
							$$ = 0;
							 val = $$;
				  		} 	
				    	}

	| switch_expression FACT {
						int mult=1 ,i;
						for(i=$1;i>0;i--)
						{
							mult=mult*i;
						}
						$$=mult; val = $$;
						
					 }	

	| switch_expression LT switch_expression	{ $$ = $1 < $3; val = $$; }

	| switch_expression GT switch_expression	{ $$ = $1 > $3;  val = $$;}

	| switch_expression LE switch_expression	{ $$ = $1 <= $3; val = $$; }

	| switch_expression GE switch_expression	{ $$ = $1 >= $3; val = $$; }

	| switch_expression EQUAL switch_expression { $$ = $1 == $3; val = $$; }

	| switch_expression NOTEQUAL switch_expression { $$ = $1 != $3; val = $$; }

	| LB switch_expression RB	{ $$ = $2;	 val = $$;}
	
	| inc switch_expression inc	{ $$=$2+1; printf("inc: %d\n",$$); val = $$;}

	| dec switch_expression	dec	{ $$=$2-1; printf("dec: %d\n",$$); val = $$;}

	| not switch_expression	not {	if($2 != 0) {
										$$ = 0; val = $$;
									} else {
										$$ = 1 ; val = $$;
									}
								}
	;

%%


void insert(storage *p, char *s, int n) {
  	p->str = s;
  	p->n = n;
}

int key_for_storage_table(char *key) {
    int i = 1;
    char *name = store[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return store[i].n;
        name = store[++i].str;
    }
    return 0;
}

int key_for_symbol_table(char *key)
{
    int i = 1;
    char *name = symbol[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return i;
        name = symbol[++i].str;
    }
    return 0;
}



int yywrap()
{
	return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}

