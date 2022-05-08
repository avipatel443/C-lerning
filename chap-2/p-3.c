/* Write a program to read the price of an item in decimal form
(  like 15.95 ) and print the output in paisa */

#include<stdio.h>

#include<conio.h>
float ReadThePriceOfAnItemInDecimalForm();
void PrintInPaisa(float price);

void main()

{

	float itemPrice;
	
 	itemPrice = ReadThePriceOfAnItemInDecimalForm();
	PrintInPaisa(itemPrice);
	
	getch();

}

float ReadThePriceOfAnItemInDecimalForm(){
	float itemPrice;
	printf("\nEnter Price");
	scanf("%f",&itemPrice);
	printf("\nEnter Price is %f", itemPrice);
	return itemPrice;
}

void PrintInPaisa(float price) {
	printf("\nPrint inn Paisa %f", price);
	float priceInPaisa;
    priceInPaisa = price * 100;
	printf("\n%f",priceInPaisa);


}

