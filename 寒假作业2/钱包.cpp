#include <stdio.h>
#include <string.h>
int input(char a[])
{
	if(!strcmp(a,"��")) return 0;
	else if(!strcmp(a,"һ")) return 1;
	else if(!strcmp(a,"��")) return 2;
	else if(!strcmp(a,"��")) return 3;
	else if(!strcmp(a,"��")) return 4;
	else if(!strcmp(a,"��")) return 5;
	else if(!strcmp(a,"��")) return 6;  
    else if(!strcmp(a,"��")) return 7; 
	else if(!strcmp(a,"��")) return 8; 
	else if(!strcmp(a,"��")) return 9; 
	else if(!strcmp(a,"ʮ")) return 10;
}
void output_1(int sum)
{
	if(sum>0)
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
	char zs[5],qb[100],dy[100],num[5],q[5];
	int sum;
	scanf("%s %s %s %s",zs,qb,dy,num);
	if(strcmp(zs,"����")==0&&strcmp(qb,"Ǯ��")==0&&strcmp(dy,"����")==0)
	{
		sum=input(num);
		while(1)
		{
			scanf("%s",qb);
			if(strcmp(qb,"Ǯ��"))
			 break;
			scanf("%s %s",dy,num);
			if(!strcmp(dy,"����"))
		    	sum+=input(num);
			else if(!strcmp(dy,"����"))
				sum-=input(num);
			else
				printf("error!");
		} 
		scanf("%s",q);
		if(strcmp(qb,"����")==0&&strcmp(q,"Ǯ��")==0)
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
