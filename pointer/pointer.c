#include<stdio.h>
#include<stdlib.h>
int main()
{
int n, *arr , largest;
printf("Enter size of array:");
scanf("%d",&n);
arr =(int*)malloc(n*sizeof(int));

if(arr == NULL)
{
    printf("Memory allocation failed");
    return 1;
}
printf("Entre %d element :\n", n);
for (int i=0; i<n; i++)
{
    scanf("%d", &arr[i]);
}
largest = arr[0];
for (int i  = 1; i<n ; i++)
{
     if(arr[i]>largest)
    {
        largest = arr[i];
    }
}
printf("Largest element =%d\n", largest);
free(arr);
return 0;


}