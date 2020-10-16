#include <stdio.h>
#include<stdlib.h>
int **createArray(int R,int C)
{
    int **mat=(int **)malloc(sizeof(int)*R);
    for(int row=0;row<R;row++)
    {
        *(mat+row)=(int *)malloc(sizeof(int)*C);
    }
    return mat;
}
void getElements(int **mat,int R,int C)
{
    for(int row=0;row<R;row++)
    {
        for(int col=0;col<C;col++)
        {
            scanf("%d",*(mat+row)+col);
        }
    }
}
void printElements(int **mat,int R,int C)
{
    for(int row=0;row<R;row++)
    {
        for(int col=0;col<C;col++)
        {
            printf("%d ",*(*(mat+row)+col));
        }
        printf("\n");
    }
}
int main() 
{
    int R=0,C=0;
    printf("Enter the Size of row and col\n");
    scanf("%d %d",&R,&C);
    int **mat;
    mat = createArray(R,C);
    printf("Enter elements: ");
    getElements(mat,R,C);
    printf("You entered: \n");
    printElements(mat,R,C);
    return 0;
}