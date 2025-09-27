#include <stdio.h>
#include <stdlib.h>
int main() {
    
    int a,b;
    scanf("%d %d", &a, &b);

    int q = 0;
    int sign = 1;
    
    if (b == 0) {
        printf("Нелья делить на 0\n");
        return 0;
    }

    if ((a < 0 && b > 0) || (a > 0 && b < 0))
        sign = -1;
    
    a = abs(a);
    b = abs(b);

    while (a > b) {
        a -= b;
        q++;
    }

    printf("%d\n", q*sign);
    return 0;
}
