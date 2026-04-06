#include <stdio.h>

// Extended Euclidean Algorithm
int extendedEuclidean(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1;
        *y = 0;
        return a;
    }

    int x1, y1;
    int gcd = extendedEuclidean(b, a % b, &x1, &y1);

    *x = y1;
    *y = x1 - (a / b) * y1;

    return gcd;
}

int main() {
    int a, b, c;
    printf("Enter values for a, b, and c (space-separated): ");
    scanf("%d %d %d", &a, &b, &c);

    int x, y;
    int gcd = extendedEuclidean(a, b, &x, &y);

    if (c % gcd == 0) {
        int k = c / gcd;
        x *= k;
        y *= k;
        printf("The Diophantine Equation %d * %d + %d * %d = %d is verified.\n", a, x, b, y, c);
    } else {
        printf("The Diophantine Equation %d * x + %d * y = %d is not satisfied.\n", a, b, c);
    }

    return 0;
}
