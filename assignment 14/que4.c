//4. Write a program to find the greatest number stored in an array of size 10. Take array
//   values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,max;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<=9;i++)
    {
        if(max<a[i+1])
            max=a[i+1];
    }
    printf("Greatest number is :%d",max);
}
