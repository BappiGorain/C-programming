#include<stdio.h>


void fibo(int *f, int *s, int n);


int main()
{
    int f = 0;
    int s = 1;

    printf("Enter the value of n: ");
    int n;
    scanf("%d",&n);
    printf("\n");
    fibo(&f,&s,n);

}



void print_array(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
}

void fibo(int *f, int *s, int n)
{
    int arr[n];
    arr[0] = *f;
    arr[1] = *s;
    int index = 2;
    int sum = 0;
    
    while(index < n)
    {
        sum = *f + *s;

        arr[index] = sum;
        index++;
        
        int temp = *s;
        *s = sum;
        *f = temp;
    }

    print_array(arr,n);

}

