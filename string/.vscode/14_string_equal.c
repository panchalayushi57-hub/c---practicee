#include<stdio.h>
#include<string.h>
int main()
{
     char a[20];
     char b[20];
     scanf("%s" ,a);
     scanf("%s",b);
     if(strcmp(a,b)==0)
     {
        printf("same");
     }
}
