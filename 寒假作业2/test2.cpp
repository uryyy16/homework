#include <stdio.h>
#include <string.h> 
void output_1(int sum)
{
	if(sum>=0)
	{
		if(sum==0) printf("��");
		else if(sum==1) printf("һ");
		else if(sum==2) printf("��");
		else if(sum==3) printf("��");
		else if(sum==4) printf("��");
		else if(sum==5) printf("��");
		else if(sum==6) printf("��");
		else if(sum==7) printf("��");
		else if(sum==8) printf("��");
		else if(sum==9) printf("��");
		else if(sum==10) printf("ʮ");        
	}
	else if(sum<0)
		printf("over-expenditure��"); 
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
	    printf("ʮ");
		if(a!=0)
		  output_1(a);	  
	}
	else
	printf("You are a rich man!");
}
int main()
{
	printf("�������������\n");
	int sum;
   while(scanf("%d",&sum)!=EOF)	
    {
    	if(sum<=10)
	     output_1(sum);
	    else
	     output_2(sum); 
	 }
	 
}
