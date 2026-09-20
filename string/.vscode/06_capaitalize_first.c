#include<stdio.h>
int main()
{
    char a[] = "ayushi";
    for(int i=0; a[i]!='\0' ; i++)
    if(a[0]>='a' && a[0]<='z')
    {
        a[i]=a[0]-32;
    }
    printf("%s",a);

}
