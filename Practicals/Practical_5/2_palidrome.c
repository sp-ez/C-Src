#include<stdio.h>  

int main()    
{    
    int n , r , sum=0 , temp; 

    printf("Enter a number: ");    
    scanf("%d",&n);    

    temp = n;

    while(n>0)    
        {    
            r = n % 10;    
            sum = (sum*10) + r;    
            n = n / 10;   
        }    
    if(temp == sum)
    {
        printf("Entered number is a palindrome number");
    }    
    else
    {  
        printf("Entered number is not a palindrome number");
    }; 
    return 0;  
} 