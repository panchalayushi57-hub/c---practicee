#include<stdio.h>
int main()
{    
   
    char a[] = "Ayushi";
     int length = 0;
    for(int i=0; a[i]!='\0' ; i++ )
    {
        length++;
    }
    printf("length=%d", length);
    return 0;
}