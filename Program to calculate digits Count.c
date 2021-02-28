#include<stdio.h>
#include<conio.h>

int main()
{
	int No=0, Dig=0, Temp=0, dCnt=0;
	
	printf("\n Enter positive integer number to calculate its digits Count=");
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
		dCnt++;
		Temp=Temp/10;
	}
    
    printf("\n Count of digits in given number %d=%d",No,dCnt);
	
	getch();
	return 0;
}