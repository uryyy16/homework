#include <stdio.h>
#include <string.h>
int input(char a[])
{
	if(!strcmp(a,"零")) return 0;
	else if(!strcmp(a,"一")) return 1;
	else if(!strcmp(a,"二")) return 2;
	else if(!strcmp(a,"三")) return 3;
	else if(!strcmp(a,"四")) return 4;
	else if(!strcmp(a,"五")) return 5;
	else if(!strcmp(a,"六")) return 6;  
    else if(!strcmp(a,"七")) return 7; 
	else if(!strcmp(a,"八")) return 8; 
	else if(!strcmp(a,"九")) return 9; 
	else if(!strcmp(a,"十")) return 10;
}
void output_1(int sum)
{
	if(sum>=0)
	{
		if(sum==0) printf("零");
		else if(sum==1) printf("一");
		else if(sum==2) printf("二");
		else if(sum==3) printf("三");
		else if(sum==4) printf("四");
		else if(sum==5) printf("五");
		else if(sum==6) printf("六");
		else if(sum==7) printf("七");
		else if(sum==8) printf("八");
		else if(sum==9) printf("九");
		else if(sum==10) printf("十");        
	}
	else if(sum<0)
		printf("over-expenditure！"); 
}
void output_2(int sum)
{
    if(sum<=99)
	{
		int a,b;
		a=sum%10;
		b=sum/10;
		if(b!=1)
		  output_1(b);
	    printf("十");
		if(a!=0)
		  output_1(a);	  
	}
	else
	printf("You are a rich man!");
}
int main()
{
	char zs[5],qb[100],dy[100],num[5],q[5];
	int sum;
	scanf("%s %s %s %s",zs,qb,dy,num);
	if(strcmp(zs,"整数")==0&&strcmp(qb,"钱包")==0&&strcmp(dy,"等于")==0)
	{
		sum=input(num);
		while(1)
		{
			scanf("%s",qb);
			if(strcmp(qb,"钱包"))
			 break;
			scanf("%s %s",dy,num);
			if(!strcmp(dy,"增加"))
		    	sum+=input(num);
			else if(!strcmp(dy,"减少"))
				sum-=input(num);
			else
				printf("error!");
		} 
		scanf("%s",q);
		if(strcmp(qb,"看看")==0&&strcmp(q,"钱包")==0)
		{
			if(sum<=10)
			 output_1(sum);
			else
			 output_2(sum);
		} 
		else
		 printf("error!");
	} 
	else
	printf("error!");
	return 0;
} 
