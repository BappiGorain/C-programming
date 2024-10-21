#include<stdio.h>
#include<math.h>

int main()
{
    printf("Enter a number: ");
    int number;
    scanf("%d", &number);
    
    int rev = 0;
    int n = number;
    
    int p = 1;
    
    while(n > 0)
    {
        int rem = n % 10;
        rev = rem * p + rev;
        p = p * 10;
        n = n / 10;
    }
    
    if(rev == number)
        printf("%d is palindrome:", number);
    else
        printf("%d is not palindrome:", number);
    
}
