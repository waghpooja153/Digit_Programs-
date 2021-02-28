#include<stdio.h>
#include<conio.h>

int main()
{
	int No=0, Dig=0, Temp=0, dCnt=0, RevNum=0;
	
	printf("\n Enter positive integer number to get its reverse number=");
	scanf("%d",&No);
	
	Temp=No;
	
	if(No<0)
	{
		printf("\n Invalid Number!!!");
		return -1;
	}
	
	while(Temp>0)
	{
		dCnt++;
		Temp=Temp/10;
	}
	
	if(dCnt==4)
	{
		Temp=No;
		
		while(Temp>0)
		{
			Dig=Temp%10;
			RevNum=(RevNum*10)+Dig;
			Temp=Temp/10;
		}
		
		printf("\n Reverse of given number %d = %d",No,RevNum);
	}
	else
	{
		printf("\n Given number is not 4 digit number");
	}
	
	getch();
	return 0;
}