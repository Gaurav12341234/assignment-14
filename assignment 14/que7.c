//7. Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,lar,s_lar;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    lar=a[0];
    for(i=0;i<9;i++)
    {
        if(lar<a[i+1])
        {
            s_lar=lar;
            lar=a[i+1];
        }
        else if(s_lar<a[i+1])
                s_lar=a[i+1];
    }
    printf("Second largest number is %d",s_lar);
    return 0;
}