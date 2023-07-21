#include<stdio.h>
int main()
{
 int N,i,arr[100];
 printf("Enter the range : ");
 scanf("%d",&N);
 arr[0]=-1;
 arr[1]=1;
 for(i=2;i<=N;i++)
    {
    arr[i]= arr[i-1] + arr[i-2];
    printf("%3d ",arr[i]);
    }
 return 0;
}
