/* Write a program that request two float type numbers from the users and then
divides the first number by the second and display the result along with the numbers. */

#include<stdio.h>

#include<conio.h>

void main()

{

	float  number1, number2, number3;

	printf("Enter the value of number1 and number2\n");

	scanf("%f %f",&number1,&number2);

	number3=number1/number2;

	printf("%f/%f=%f",number1,number2,number3);

	getch();
}

