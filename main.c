#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int m,d,s;
	printf("請輸入月份:\n");
	scanf("%d",&m);
	printf("請輸入日期:\n");
	scanf("%d",&d);
	if((m*2+d)%3==0)
	 printf("運勢普通");
	else  if((m*2+d)%3==1)
	 printf("運勢吉");
	else  if((m*2+d)%3==2)
	 printf("運勢大吉");  
	return 0;
}
