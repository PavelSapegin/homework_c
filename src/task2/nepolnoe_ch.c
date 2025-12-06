#include <stdio.h>

int quotient(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero\n");
    }

    int sign = 1;
    int q = 0;

    if ((a < 0 && b > 0) || (a > 0 && b < 0))
    {
        sign = -1;
    }

    int absb = (b < 0) ? -b : b;
    
    while ((a > absb) || (a < -absb) || a < 0)
    {
        a = a -b * sign;
        q++;
    }

    return q*sign;
}


int main()
{
    printf("%d\n",quotient(78,33));
    printf("%d\n",quotient(-78,33));
    printf("%d\n",quotient(-9,-13));
    return 0;
}
