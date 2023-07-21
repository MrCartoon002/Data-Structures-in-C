#include<stdio.h>
int main()
{
   int size,i,total=0;
   printf("Enter the number of patients in a day:");
   scanf("%d",&size);
   int a[size-1];
   for(i=0;i<size;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<size;i++)
   {
           if(a[i]<=17)
           {
               total=total+200;
           }
           else if(a[i]>17 && a[i]<40)
           {
               total=total+400;
           }
           else
           {
               total=total+300;
           }

   }
   printf("Total amount of a day :%d INR",total);
   return 0;
}

