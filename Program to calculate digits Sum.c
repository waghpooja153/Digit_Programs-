#include<stdio.h>
#include<conio.h>

int main()
{
	int No=0, Dig=0, Temp=0, dSum=0;
	
	printf("\n Enter positive integer number to calculate its digits Sum=");
	scanf("%d",&No);
	
	Temp=No;
	
	if(No<0)
	{
		printf("\n Invalid Number!!!");
		return -1;
	}
	
	while(Temp>0)
	{
		Dig =Temp % 10;
		dSum=dSum+Dig;
		Temp=Temp/10;
	}
    
    printf("\n Sum of digits in given number %d=%d",No,dSum);
	
	getch();
	return 0;
}