/*
 * main.c
 *
 *  Author: 
 *
 */ 

#include <avr/io.h>

extern char soma_dois(char, char);
extern char sub_dois(char, char);


main()
{
	volatile unsigned char num1, num2, num3, num4, num5, num6;
	volatile unsigned char num7, num8, num9;

	while(1)
    { 
        num1 = 5;
		num2 = 5;
		num3= 3;
		num4 = 3;
		num7 = num5;
		num8 = num6;
		num5 = soma_dois(num1, num2);
		num6 = soma_dois(num3, num4);
		num9 = sub_dois(num7, num8);
	}
}