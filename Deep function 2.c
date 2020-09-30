#include<stdio.h>
#include<conio.h>

int add(int n, int sum=0)
{
    int i=1;
    while(i<n)
    {
        if(n%i==0)
            sum=sum+i;
        i++;
    }
    if(sum==n)
        printf("1");
    else
        printf("0");
        
    return i;
}

int main()
{
    int n,i=1,sum=0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    return 0
}
