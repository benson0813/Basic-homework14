#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int L1,L2,L3;
	
	printf("輸入三邊長:\n");
	scanf("%d %d %d",&L1,&L2,&L3);
	
	if((L1>L2)&&(L1>L3)&&(L2+L3>L1))
		printf("能拼成三角形\n");
	else if((L2>L1)&&(L2>L3)&&(L1+L3>L2))
		printf("能拼成三角形\n");
	else if((L3>L1)&&(L3>L2)&&(L1+L2>L3))
		printf("能拼成三角形\n");
	else
		printf("不能拼成三角形\n");
	system("pause");
	return 0;
}

