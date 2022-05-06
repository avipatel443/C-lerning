/* Write a program to read the price of an item in decimal form 
(  like 15.95 ) and print the output in paisa */

#include<stdio.h>

#include<conio.h>

void main()

{

int n;

float a;

thepriceofanitemindecimalform(n);
}

void thepriceofanitemindecimalform(int n) {
	int a,b;
a=15.95;

b=100*a;

printf("%d",b);

getch();

}

