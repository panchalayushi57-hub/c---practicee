#include<stdio.h>
int main()
{
  int a[2][3]={{10,20,30},
                {40,50,60}};

  int i,j;
   for(i=1; i>=0 ; i--)
   {
    for(j=2 ; j>=0 ; j--)
    printf("%d ",a[i][j]);

   }
   return 0;
}