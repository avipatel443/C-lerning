/* Write a program that will obtain the length and width of a rectangle from the
 user and compute its area and perimeter.*/

 #include<stdio.h> 
 #include<conio.h>
void AreaOfRectangle(int Len, int wid);
void PerimeterOfRectangle(int Len, int wid);
void main()
{
 int Len,Wid,Area,Peri;
 printf("Enter the length of th e rectangle :\n");
scanf("%d",&Len);
printf("Enter width of the rectangle :\n");
 scanf("%d",&Wid);

 AreaOfRectangle(Len,Wid);
 PerimeterOfRectangle(Len,Wid);
 getch();
}

void AreaOfRectangle(int Len, int Wid)
{
int Area;	
Area= Len*Wid;
printf("The area of the rectangle is =%d \n",Area);
}
void PerimeterOfRectangle(int Len , int Wid)
{
	int Peri;
	Peri= 2*(Len+Wid);
	printf("The perimeter of the rectangle is =%d \n",Peri);
}



