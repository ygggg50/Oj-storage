#include <stdio.h>

int countdigit(int num, int digit);

int main()
{
	int num;
	int digit = 2;
	scanf("%d", &num);

	
	printf("%d", countdigit(num, digit));

}

int countdigit(int num, int digit)
{
int count=0;
while(num!=0)
{
	if(num%10==digit)
	{
		count++;
	}
	num/=10;
 } 
	return count;
}
