#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int m,d,s;
	printf("�п�J���:\n");
	scanf("%d",&m);
	printf("�п�J���:\n");
	scanf("%d",&d);
	if((m*2+d)%3==0)
	 printf("�B�մ��q");
	else  if((m*2+d)%3==1)
	 printf("�B�զN");
	else  if((m*2+d)%3==2)
	 printf("�B�դj�N");  
	return 0;
}
