// double dimension and double pointer
//swap with pointer


#include<stdio.h>
void swap(int *a,int *b)
{
	int c= *a;
	*a=*b;
	*b=c;
}
void dou(int **a,int r,int c)
{
	for(int i=0;i< r;i++)
	{
		for(int j= 0;j< c;j++)
		{ printf("%d",a[i][j]);}

printf("\n");
}
}
int main()
{
int a[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{ scanf("%d",&a[i][j]);}
	printf("\n");
	}
int *ptr[4];
for(int k=0;k<4;k++)
{
	ptr[k]=a[k];
}
dou(ptr,4,4);	
	int a1= 5,a2=10;
	printf("values before swap= %d,%d",a1,a2);
	swap(&a1,&a2);
	printf("values after swap= %d,%d",a1,a2);
}
