#include<stdio.h>
int main()
{
	int number_1,number_2,number_3,number_4,number_5,x;
	printf("请输入数字");
	scanf("%d", &x);
	number_1=x/10000;
	number_2=x%10000/1000;
	number_3=x%1000/100;
	number_4=x%100/10;
	number_5=x%10;
	if(number_1!=0)
	{
		printf("为五位数，逆序输出为%d %d %d %d %d",number_5,number_4,number_3,number_2,number_1);
	}else if(number_2!=0)
	{
		printf("为四位数，逆序输出为%d %d %d %d",number_5,number_4,number_3,number_2);
	}else if(number_3!=0)
	{
		printf("为三位数，逆序输出为%d %d %d",number_5,number_4,number_3);	
	}else if(number_2!=0)
	{
		printf("为二位数，逆序输出为%d %d",number_5,number_4);
	}else if(number_1!=0)
	{
		printf("为一位数，逆序输出为%d",number_5);
	}
	 
	
	
	
}
