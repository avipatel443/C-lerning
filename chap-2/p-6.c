/* The price of one kg of rice is Rs. 16.75 and one kg of sugar is Rs. 15.
 Write a program to get these values and display the prices as follows:
         ***LIST OF ITEMS***
            Item                 Price
            Rice                 Rs 16.75
            Sugar               Rs 15.00 */


#include<stdio.h>

#include<conio.h>
void PrintItemPriceList(float rice,float sugar);
void main ()
{
	float Rice,Sugar;
	printf("\nEnter price of Rice\n");
	scanf("%f",&Rice);
	printf("\nEnter price of Sugar\n");
	scanf("%f",&Sugar);
	PrintItemPriceList(Rice,Sugar);
	getch();
	
}
void PrintItemPriceList(float rice,float sugar)
{

	printf("***LIST OF ITEMS***\n");

	printf("Item \tPrice\n");

	printf("Rice\tRs%.2f\n",rice);

	printf("Sugar\tRs%.2f\n",sugar);


}

