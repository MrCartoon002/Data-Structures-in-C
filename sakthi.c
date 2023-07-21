#include<stdio.h>
int main()
{
    int n,k,j,m,p,no;
    int banana=0,peanut=0;
    scanf("%d,%d,%d,%d,%d",&n,&k,&j,&m,&p);
    if(n<0|| k<0|| j<0|| m<0|| p<0)
    {
        printf("INVALID INPUT");
    }
    else
    {
         if(k>0)
            banana=m/k;
         if(j>0)
            peanut=p/j;
        no=n-banana-peanut;
        printf("Number of  Monkeys left on the tree:%d",n);

    }
}
