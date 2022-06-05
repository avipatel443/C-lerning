/*For a certain electrical circuit with an inductance L and resistance R,the
 damped natural frequency is given by frequency is
Frequency= sqrt((1/LC)-(R*R)/(4*C*C))
 It is desired to study the variation of this frequency with c,write a program to 
 calculate the frequency for diff values of c starting from .01 to.10*/
 
#include<stdio.h>
#include<conio.h>
#include<math.h>
void ToCalculateTheFrequency(int L,int R,int C)
{
float Freq,Temp1,Temp2;
Temp1= (1/(L*C));
Temp2= ((R*R)/(4*C*C));
Freq= sqrt(Temp1-Temp2);
printf("The Frequency is : %f\n",Freq);
}

void main()
{
int L,R,C;
printf("Enter Inductance, Resistance, Capacitannce \n");
scanf("%d %d %d",&L,&R,&C);
ToCalculateTheFrequency(L,R,C);
getch();
}

