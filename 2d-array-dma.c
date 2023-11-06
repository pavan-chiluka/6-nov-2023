#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r,c,j,k;
	printf("enter rows col");
	scanf("%d %d",&r,&c);
	int *ptr;
	ptr=((int*)malloc(r*c*sizeof(int)));
	for(j=0;j<r;j++)
        {
	for(k=0;k<c;k++)
	{
        scanf("%d",ptr+j+k);
	}
	}
        for(j=0;j<r;j++)
        {
        for(k=0;k<c;k++)
        {
        printf("%d",(*(ptr+j)+k));
        }
        }
}


























/*#include<stdio.h>
void constant_pointer(int *const ptr)
{
printf("%d\n",*ptr);
(*ptr)++;
printf("%d\n",*ptr);
//ptr++;
}
void  pointer_to_constant(const int *ptr)
{
	printf("%d\n",*ptr);
	//(*ptr)++
	ptr++;
	printf("%p\n",ptr);

}
void constpoin_pointertoconstant(const int *const ptr)
{
	printf("%d\n",*ptr);
	printf("%p\n",ptr);
}
int main()
{
	int n=5;
	constant_pointer(&n);
	pointer_to_constant(&n);
}*/

