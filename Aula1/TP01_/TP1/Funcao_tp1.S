
/*
 * Funcao_tp1.S
 *
 *  Author:	
 */ 


 #include <avr/io.h>
 
 .global soma_dois	
	soma_dois:
		ADD R24, R22
		CLR R25
		ret
		
 .global sub_dois
	sub_dois:	
		SUB R24, R22
		CLR R25
		ret