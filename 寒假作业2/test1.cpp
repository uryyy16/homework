#include <string.h>
#include <stdio.h> 
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
void test(char a[],int num)
{
	if(input(a)==num)
	  printf("pass\n");
	else
	  printf("error\n");  
}
int main()
{
    char a[5]="零";
	test(a,0);
	char b[5]="一"; 
	test(b,1);
	char c[5]="二";
	test(c,2);
	char d[5]="三";
	test(d,4);
	char e[5]="四";
	test(e,5);
	return 0;
}
