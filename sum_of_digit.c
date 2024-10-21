#include<stdio.h>
#include<math.h>

int main()
{
    printf("Enter a number: ");
    int number;
    scanf("%d", &number);
    
    int sum  = 0;
    
    
    while(number > 0)
    {
        int rem = number % 10;
        sum+=rem;
        number = number / 10;
    }
    
    
    printf("sum : %d", sum);
    
}
