#include<stdio.h>
#include<math.h>

int main()
{
    printf("Enter a number: ");
    int number;
    scanf("%d", &number);
    
    int flag = 1;
    
    if(number == 1)
    {
        printf("%d is not prime:", number);
        flag = 0; 
    }

    for(int i=2 ; i<= sqrt(number); i++)
    {
        if(number % i == 0) {
           flag = 0
            break;;
        }
    }
    
    if(flag== 1)
        printf("%d is prime:", number);
    else
        printf("%d is not prime:", number);
    
}
