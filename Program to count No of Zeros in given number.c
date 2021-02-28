#include<stdio.h>
#include<conio.h>

int main()
{
	int No=0, Dig=0, Temp=0, ZCnt=0;
	
	printf("\n Enter positive integer number to count Zeros in it=");
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
		
		Temp=Temp/10;
	}
    
    printf("\n Count of Zeros in given number %d=%d",No,ZCnt);
	
	getch();
	return 0;
}