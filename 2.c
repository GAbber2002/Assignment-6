#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 2; i <= 2*n; i += 2)
        {
        sum += i;
        }

    printf("The sum of the first %d even natural numbers is %d.\n", n, sum);

    return 0;
}
