#include <stdio.h>
#include <math.h>

int isPrime(int number)
{
    if (number <= 1)
    {
        return 0;
    }
    int i;
    for (i = 0; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
        else{
            return 1;
        }
    }    
}

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if (isPrime(number) == 1)
    {
        printf("The NUmber is prime");
    }
    
    return 0;
}