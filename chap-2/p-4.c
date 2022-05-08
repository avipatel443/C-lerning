/* Write a program that’s prints the even numbers from 1 to 100. */

#include<stdio.h>

#include<conio.h>
void PrintTheEvenNumbers(int start,int end);
void main()
{
	int start,end;
	printf("\nEnter start number\n");
	scanf("%d",&start);
	printf("\nEnter end number\n");
	scanf("%d",&end);
	
	PrintTheEvenNumbers(start,end);
	
}

void PrintTheEvenNumbers(int start,int end)
{
	int i;
	for(i=start; i<=end; i++)

	{

		if(i%2==0)

			printf("  %d",i);

	}

	getch();

}

