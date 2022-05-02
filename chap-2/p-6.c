/* The price of one kg of rice is Rs. 16.75 and one kg of sugar is Rs. 15.
 Write a program to get these values from the user and display the prices as follows:
         ***LIST OF ITEMS***
            Item                 Price
            Rice                 Rs 16.75
            Sugar               Rs 15.00 */


#include<stdio.h>

#include<conio.h>

void main ()

{

	float Rice,Sugar;

	Rice=16.75;

	Sugar=15.00;

	printf("***LIST OF ITEMS***\n");

	printf("Item \tPrice\n");

	printf("Rice\tRs%.2f\n",Rice);

	printf("Sugar\tRs%.2f\n",Sugar);

	getch();

}

