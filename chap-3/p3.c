/*Write a program that reads a floating-point number and then displays the two
 right �most digit of the integral part of the number.*/

#include<stdio.h>
#include<conio.h>
void TheOfIntergralPartOfNumber(float x);
void main() {
	float x;
	int y,z;

	printf("Enter floating point number : x= ");
	scanf("%f",&x);
	TheOfIntergralPartOfNumber(x);
	getch();
}
void TheOfIntergralPartOfNumber(float x) {
	int y,z;
	y=x;
	z=y%100;
	y=x;
	z= y%100;

	printf(" \nThe two Right-most digit of the integral part of the number %f is %d",x,z);

}

