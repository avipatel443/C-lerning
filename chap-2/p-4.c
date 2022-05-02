/* Write a program that’s prints the even numbers from 1 to 100. */

#include<stdio.h>

#include<conio.h>

void main()

{

	int i;

	for(i=1; i<=100; i++)

	{

		if(i%2==0)

			printf("  %d",i);

	}

	getch();

}

