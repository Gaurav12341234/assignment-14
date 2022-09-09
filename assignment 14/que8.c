//8. Write a program to find the second smallest number in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,small,s_small;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    small=a[0];
    for(i=0;i<9;i++)
    {
        if(small>a[i+1])
        {
            s_small=small;
            small=a[i+1];
        }
        else if(s_small>a[i+1])
                s_small=a[i+1];
    }
    printf("Second smallest number is %d",s_small);
    return 0;
}
