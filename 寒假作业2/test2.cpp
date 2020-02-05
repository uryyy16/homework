#include <stdio.h>
#include <string.h> 
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
	printf("请输入测试数据\n");
	int sum;
   while(scanf("%d",&sum)!=EOF)	
    {
    	if(sum<=10)
	     output_1(sum);
	    else
	     output_2(sum); 
	 }
	 
}
