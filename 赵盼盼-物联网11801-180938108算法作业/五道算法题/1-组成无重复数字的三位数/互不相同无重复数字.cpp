/* 1,2,3,4能组成多少互不相同且无重复数字三位数*/
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<5;i++)
	{
		for(j=1;j<5;j++)
		{
			for(k=1;k<5;k++)
			{
				if(i!=j && j!=k && i!=k)
					printf("%d%d%d ",i,j,k);
			}
		}
	}
	printf("\n");
	return 0;
}