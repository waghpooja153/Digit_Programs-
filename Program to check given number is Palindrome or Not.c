#include<stdio.h>
#include<conio.h>

int main()
{
	int No=0, Temp=0, RevNum=0;
	
	printf("\n Enter positive integer number to check whether its Palindrome Number=");
	scanf("%d",&No);
	
	Temp=No;
	
	if(No<0)
	{
		printf("\n Invalid Number!!!");
		return -1;
	}
	
	while(Temp>0)
	{
		RevNum=(RevNum*10)+(Temp%10);
		Temp/=10;
	}
	if(No==RevNum)
	{
		printf("\n as %d == %d",No,RevNum);
		printf("\n Given number %d is Palindrome",No);
	}
	else
	{
		printf("\n as %d != %d",No,RevNum);
		printf("\n Given number %d is not Palindrome",No);
	}
	
	getch();
	return 0;
}