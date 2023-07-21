#include<stdio.h>

int main()
{
    int n, m, r, sum1=0, sum2=0;
    scanf("%d %d %d \n", &n,&m,&r);

    int i,j,a[i],b[j];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum1 = sum1 + a[i];
    }
    for(j=0; j<m; j++)
    {
        scanf("%d",&b[j]);
    }
    for(j=0; j<m; j++)
    {
        sum2 = sum2 + b[j];
    }

    printf("%d %d\n",sum1,sum2);


    if(sum1==sum2){
        printf("Balanced");
    }
    else{
        printf("Imbalanced\n");
        if(sum1>sum2){
            int i1=sum1-sum2-r;
            printf("Balanced Value: %d",i1);
        }
        else if(sum1<sum2){
            int i2=sum2-sum1+r;
            printf("Balanced Value: %d",i2);
        }
    }
    return 0;
}
