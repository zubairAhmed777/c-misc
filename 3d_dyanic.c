#include<stdio.h>
#include<stdlib.h>


int main(void)
{
int ***a=NULL;
int i,j,k,count=0;
a=(int ***)malloc(3*sizeof(int **));
for(i=0;i<3;i++)
{
	a[i]=(int **)malloc(3*sizeof(int *));
	for(j=0;j<3;j++){
	a[i][j]=(int *)malloc(3*sizeof(int));
}
}

for(k=0;k<3;k++)
{
for(j=0;j<3;j++)
{
for(i=0;i<3;i++)
{
a[k][j][i]=count;count++;
}
}
}
for(k=0;k<3;k++)
{
for(j=0;j<3;j++)
{
for(i=0;i<3;i++)
{
printf("a[%d][%d][%d]=%d\t",k,j,i,a[k][j][i]);
}
printf("\n");
}
printf("\n");
}



return 0;
}

