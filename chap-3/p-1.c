/*Given the values of the variables x, y and z, write a program to rotate their 
 values such that x has the value of y, y has the value of z and z has the value of x.*/

#include<conio.h>
#include<stdio.h>
void RotatingTheValues(int x,int y,int z);

void main()
{
int x,y,z;
printf("Enter Three Values\n");
scanf("%d%d%d",&x,&y,&z);
RotatingTheValues(x,y,z);
getch();
}

void RotatingTheValues(int x,int y,int z)
{
int Temp;
Temp=x;
x=y;
y=z;
z=Temp;
printf(" x= %d \n y= %d \n z= %d",x,y,z);

}
