#include <stdio.h>
int main()
{
    int b,rev=0,ori,rem;
    printf("enter a number");
    scanf("%d",&a);
    ori=a;
    while( b!=0 )
    {
        rem=a%10;
       rev=rev*10+rem;
        b=b/10;
    }
    
     if (ori == rev)
        {
        printf("%d \nis b palindrome.", ori);
        } 
    else
        {
        printf("%d \nis not b palindrome.", ori);
        }
    
