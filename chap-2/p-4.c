/* Write a program that’s prints the even numbers from 1 to 100. */

#include<stdio.h>

#include<conio.h>

void main()
{
	int n;
	
	printstheevennumbersfrom1to100(n);
}

void printstheevennumbersfrom1to100(int n)
{

	int i;

	for(i=1; i<=100; i++)

	{

		if(i%2==0)

			printf("  %d",i);

	}

	getch();

}

