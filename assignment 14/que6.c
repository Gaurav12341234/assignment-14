//6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    printf("After sorting:");
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
        printf("%d ",a[i]);
    }
    return 0;
}
