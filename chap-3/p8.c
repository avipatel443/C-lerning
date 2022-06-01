/*The total distance traveled by a vehicle, a is the acceleration. Write a program to 
 calculate the distance travelled by at regular intervals of time ,given the values
 of u and a.the program should be flexible to the user select his own time interval
 and repeat the calculation for diff values of u,a.*/
 
 #include<conio.h>
 #include<stdio.h>
 void TotalDistanceTraveledByVehicle(float Dis);
 void main()
{
int u,t,a;
float Dis;
printf("Enter the value of u,a and t\n");
scanf("%d %d %d",&u,&a,&t);
TotalDistanceTraveledByVehicle(Dis);
getch();
}
void TotalDistanceTraveledByVehicle(float Dis)
{
int u,t,a;
Dis=(u*t)+(a*(t*t))/2;
printf("The distance is : %f \n",Dis);
}

