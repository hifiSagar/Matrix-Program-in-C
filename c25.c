#include<stdio.h>
int main(){
int mat1[2][2]={{3,1},{4,5}};
int mat2[2][2]={{1,6},{6,8}};
int mat3[2][2], i, j;
for(i=0;i<2; i++)
{
    for(j=0; j<2; j++)

    {
mat3[i] [j] = mat1[i][j] + mat2[i][j];
    }
}
for ( i = 0; i< 2; i++)
{
    for ( j = 0; j<2; j++)
    {
      printf("%d",mat3 [i][j]);
    
}
printf("\n");
}

    return 0;
}