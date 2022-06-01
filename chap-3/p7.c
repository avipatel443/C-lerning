/*Write a program that will read a real no. from the keyboard and print the
 output in one line:
Smallest integer     the given        largest integer
 not less than       number           not greater than
                                      the number */

#include<stdio.h>
#include<conio.h>
void TheOutputInOneLine(float RealNo);
void main() {
	int SmallNo,LargeNo;
	float RealNo;
	printf("Enter the real no.");
	scanf("%f",& RealNo);
	TheOutputInOneLine(RealNo);
	getch();
}
void TheOutputInOneLine(float RealNo) {
	int SmallNo,LargeNo;
	SmallNo=RealNo;
	LargeNo=RealNo;
	printf("Smallest integer not ");
	printf("The given no. ");
	printf("Largest integer not \n");
	printf("less than the number ");
	printf(" greater than the no.\n");
	printf("%d ", SmallNo);
	printf("%f ", RealNo);
	printf("%d ", LargeNo);

}

