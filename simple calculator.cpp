//simple calculator// 
#include<stdio.h>
#include<conio.h>
main()
{
	int ope,num1,num2;
	scanf("%d",&num1);
	scanf("%c",&ope);
	scanf("%d",&num2);
    while(1>0)	
	{
	if(ope=='+')
	{
		printf("= %d",num1+num2);
	}
	else if(ope=='-')
	{
		printf("= %d",num1-num2);
	}
	else if(ope=='*')
	{
		printf("= %d",num1*num2);
	}
	else if(ope=='/')
	{
		printf("= %d",num1/num2);
	}
	else
	printf("INVALIDE OPERATION");
	getch();
	return 0;
}
}
