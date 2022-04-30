/* Write a program to determine and print the sum of the
 following harmonic series for a given value of n: */
#include<stdio.h>

void main() {
	int n;
	printf("enter the limit");
	scanf("%d",&n);
	printHarmonicSeries(n);
}
void printHarmonicSeries(int n) {
	int i;
	float s=0.0;
	printf("\n\n");
	for(i=1; i<=n; i++) {
		if(i<n) {
			printf("1/%d + ",i);
			s+=1/(float)i;
		}
		if(i==n) {
			printf("1/%d ",i);
			s+=1/(float)i;
		}
	}
}
