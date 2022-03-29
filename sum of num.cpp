
#include<stdio.h>
int main()
{
	long int sum=0,num,rem;
	
	printf("\n Enter  num:");
	scanf("%ld",&num);
	while(num>0){
		rem=num%10;
		sum=sum+rem;
		num=num/10;
		
	}
	
	printf("sum is %d",sum);
	
	return 0;
}
