#include<stdio.h>
#include<conio.h>

int main()
{
	int No=0, Temp=0, RevNum=0;
	
	printf("\n Enter positive integer number to get its Reverse Number=");
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
		Temp=Temp/10;
	}
    
    printf("\n Reverse of given number %d=%d",No,RevNum);
	
	getch();
	return 0;
}