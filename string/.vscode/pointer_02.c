#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,index;
    int req;
    ptr=NULL;
    printf("Enter your requarment:");
    scanf("%d",&req);
    ptr =(int*)malloc(sizeof(int)*req);
    if(ptr==NULL)
    {
        printf("memory is ull\n");
        return 0;
    }
    for (index = 0; index<req; index++)
    {
        printf("Enter a no.");
        scanf("%d",(ptr+index));
    }
    for(index=0; index<req ; index++)
    {
        printf("%d",*(ptr+index));
        
    }
free(ptr);
    return 0;
}