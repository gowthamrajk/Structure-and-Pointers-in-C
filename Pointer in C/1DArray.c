#include <stdio.h>
#include<stdlib.h>
int *createArray(int N)
{
    return (int *)malloc(sizeof(int)*N);
}
void getElements(int *arr,int N)
{
    for(int index=0;index<N;index++)
    {
        scanf("%d",(arr+index));
    }
}
void printElements(int *arr,int N)
{
    for(int index=0;index<N;index++)
    {
        printf("%d ",*(arr+index));
    }
}
int main() 
{
    int N=0;
    printf("Enter the Size of Array\n");
    scanf("%d",&N);
    int *arr;
    arr = createArray(N);
    printf("Enter elements: ");
    getElements(arr,N);
    printf("You entered: \n");
    printElements(arr,N);
    return 0;
}