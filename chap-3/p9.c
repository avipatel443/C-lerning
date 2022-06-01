/*9 In inventory management, the economy order quantity for a single item is given
 by
	EOQ = sqrt((2*dr*sc)/hc)
 and the optimal time between orders
	TBO= sqrt((2*sc)/(dr*hc))
 Write a program to compute EOQ and TBO ,given demand rate ,setup costs,and
 the holding cost.*/

#include<conio.h>
#include<stdio.h>
void TheEconomyOrderQuantity(float TBO,float EOQ);
void main() {
	float Dr,Sc,Hc;
	printf("Enter Demand Rate \n");
	scanf("%f\n",&Dr);
	printf("Enter Setup Cost \n");
	scanf("%f\n",&Sc);
	printf("Enter Holding Cost \n");
	scanf("%f\n",&Hc);
	TheEconomyOrderQuantity(TBO,EOQ);	
	getch();
}
void TheEconomyOrderQuantity(float TBO,float EOQ) {
	float Dr,Sc,Hc;
	EOQ=sqrt((2*Dr*Sc)/Hc);
	TBO=sqrt((2*Sc)/(Dr*Hc));
	printf("The Economic Order Quantity is : %f\n",EOQ);
	printf("The time Between Order is : %f",TBO);

}
