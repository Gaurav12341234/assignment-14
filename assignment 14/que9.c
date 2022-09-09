//9. Write a program in C to read n number of values in an array and display it in reverse
//   order. Take array values from the user.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a[n],i,j;
    printf("Enter the numbers of array:");
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    printf("Reverse Order:");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}
