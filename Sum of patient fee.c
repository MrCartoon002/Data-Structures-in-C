#include<stdio.h>

int main()
{
    int i,age[i],fee1,fee2,fee3;
    for(i=0;i<7;i++)
    {
        scanf("%d",&age[i]);
    }
    for(i=0;i<7;i++)
    {
        if(age[i]<17)
        {
            fee1 = 200;
        }
        else if(age[i]<40)
        {
            fee2 = 400;
        }
        else if(age[i]>=40)
        {
            fee3 = 300;
        }
    }
    int sum = 1;
    sum = fee1 + fee2 + fee3;

    printf("%d",sum);

    return 0;
}
