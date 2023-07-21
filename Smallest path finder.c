#include<stdio.h>

int main()
{
    int path,i,j, temp, a[100];
    scanf("%d",&path);

    for(i=0; i<path; i++){
        scanf("%d",&a[i]);
    }

    for(i=0; i<path; i++)
    {
        {
            for(j=i+1; j<path; j++)
            {
                if(a[i] > a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }

            }
        }
    }

   for(i=0; i<path; i++){
        printf("%d ",a[i]);
    }

    printf("\nSmallest route: %d\n",a[0]);
    printf("Second Smallest route: %d\n",a[1]);

    return 0;
}
