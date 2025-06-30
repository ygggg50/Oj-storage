#include <stdio.h>
#include <math.h>

 double funcos(double e,double x);

int main()
{
	double e;
	double x;
	scanf("%lf,%lf",&e,&x);
	
	printf("%.6lf",funcos(e,x));
	
	return 0;
 } 
 
 double funcos(double e,double x)
 {
 	double count=0.0;
 	double term=1.0;
 	int n=0;
 	while(fabs(term)>=e)
 	{
 		count+=term;
 		n++;
 		term=-term*x*x/((2*n)*(2*n-1));
 		
	 }
	 return count;
 }
