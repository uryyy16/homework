#include <string.h>
#include <stdio.h> 
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
void test(char a[],int num)
{
	if(input(a)==num)
	  printf("pass\n");
	else
	  printf("error\n");  
}
int main()
{
    char a[5]="��";
	test(a,0);
	char b[5]="һ"; 
	test(b,1);
	char c[5]="��";
	test(c,2);
	char d[5]="��";
	test(d,4);
	char e[5]="��";
	test(e,5);
	return 0;
}
