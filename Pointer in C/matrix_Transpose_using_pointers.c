#include<stdio.h>

void matrixTranspose(int* matrix,int m,int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", matrix[j*n+i]);
        }
        printf("\n");
    }
}
int main()
{
    int R=0,C=0;
    scanf("%d %d",&R,&C);
    int mat[R][C];
    for(int row=0;row<R;row++)
    {
        for(int col=0;col<C;col++)
        {
            scanf("%d",&mat[row][col]);
        }
    }
    matrixTranspose(mat,R,C);
}