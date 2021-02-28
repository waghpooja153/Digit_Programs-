#include<stdio.h>
#include<conio.h>

int main()
{
	int No=0, Dig=0, Temp=0, ZCnt=0, ECnt=0, OCnt=0;
	
	printf("\n Enter positive integer number to count Even ,Odd & Zero digits in it=");
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
		
		if(Dig==0)
		{
			ZCnt++;
		}
		else if(Dig%2==0)
		{
			ECnt++;
		}
		else
		{
			OCnt++;
		}
		Temp=Temp/10;
	}
		
    printf("\n Count of Zeros in given number %d=%d",No,ZCnt);
    
    printf("\n Count of Even digits in givem number %d=%d",No,ECnt);
    
    printf("\n Count of Odd digits in given number %d=%d",No,OCnt);
	
	getch();
	return 0;
}