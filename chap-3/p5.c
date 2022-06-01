/* Given an integer number, write a program that displays the number as follows:
First line: all digits
Second line: all except first digit
Third line: all except first two digits
Last line : The last digit. */

#include<stdio.h>
#include<conio.h>
void TheNumbers(int x,int a,int b,int c);
void main() {
	int x,a,b,c;
	printf("Enter a four digit number: ");
	scanf("%d",&x);
	TheNumbers(x,a,b,c);
	getch();
}
void TheNumbers(int x,int a,int b,int c) {

	a=x%1000;
	b=a%100;
	c=b%10;
	printf("%d\n",x);
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);

}

