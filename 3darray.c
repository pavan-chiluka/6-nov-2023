#include<stdio.h>
int main()
{
	int m,r,c;
	printf("no of arrays,rows,col");
	scanf("%d%d%d",&m,&r,&c);
	int arr[m][r][c];
	int i,j,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<r;j++)
		{
			for(k=0;k<c;k++)
			{
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	for(i=0;i<m;i++)
        {
                for(j=0;j<r;j++)
                {
                        for(k=0;k<c;k++)
                        {
                                printf("%d",arr[i][j][k]);
                        }
                }
        }
}



