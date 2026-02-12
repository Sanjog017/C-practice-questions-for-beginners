// 1. Program to test whether the given number is completely divisible by 13 and 14 but not by 15 or not.
#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 13 == 0 && n % 14 == 0 && n % 15 != 0)
    {
        printf("%d is divisible by both 13 and 14, but not by 15.\n", n);
    }
    else
    {
        printf("%d does not satisfy the condition.\n", n);
    }
}

// 2. Program to test whether the given number is divisible by 3 and 7 or not
#include<stdio.h>
void main ()
{
    int n;
    printf("Enter any number\n\t");
    scanf("%d",&n);
    if(n%3==0 && n%7==0)
    {
        printf("The %d is divisible by 3 and 7",n);
    }
    else
    {
        printf("The %d is not divisible by 3 and 7",n);
    }
}

// 3. Program to test whether the given number is multiple of 5 or not
#include<stdio.h>
void main ()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("The %d is multiple of 5",n);
    }
    else
    {
        printf("The %d is not multiple of 5",n);
    }
}

// 4. Program to find whether the given number is a perfect square or not
#include<stdio.h>
#include<math.h>

void main()
{
    int n,sq;
    printf("Enter any number\n");
    scanf("%d", &n);
    sq = sqrt(n);
    if(sq * sq == n)
    {
        printf("The %d is a perfect square number", n);
    }
    else
    {
        printf("The %d is not a perfect square number", n);
    }
}