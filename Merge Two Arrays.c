//Write a program to merge two arrays into a third array and display the result using loops
#include<stdio.h>
int main()
{
   int n1,n2;
   scanf("%d %d",&n1,&n2);
   int arr1[n1],arr2[n2],arr3[n1+n2];
   for(int i=0;i<n1;i++)
   {
             scanf("%d",&arr1[i]);
   }
   for(int i=0;i<n2;i++)
   {
          scanf("%d",&arr2[i]);
   }
   for(int i=0;i<n1;i++)
   {
             arr3[i]=arr1[i];
   }
   for(int i=0;i<n2;i++)
   {
             arr3[n1+i]=arr2[i];
   }
   for(int i=0;i<(n1+n2);i++)
   {
             printf("%d ",arr3[i]);
   }
   return 0;
}

