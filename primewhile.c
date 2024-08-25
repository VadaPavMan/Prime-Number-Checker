#include <stdio.h>
#include <math.h>

int main()
{
    int num, square, isprime = 1; // Assume the number is prime initially
    printf("Enter the number:");
    scanf("%d", &num);
  
// Check for numbers less than or equal to 1
    if (num <= 1)
    {
        printf("The number is not prime");
      return 0; // Exit early since these are not prime
    }

  // Calculate the square root
    square = sqrt(num);

   // Loop to check divisibility
    for (int i = 2; i <= square; i++)
    {
        if (num % i == 0)
        {
            isprime = 0; // If a divisor is found, mark as not prime
            break; // No need to check further
        }
    }

  // Print the result
    if (isprime)
    {
        printf("The number is a prime number");
    }
    else
    {
        printf("The number is not a prime number");
    }
    return 0;
}
