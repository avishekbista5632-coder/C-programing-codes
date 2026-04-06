#include <stdio.h>
// Function to compute (x^y) % n
unsigned long long powerMod(unsigned long long x, unsigned long long y, unsigned long long
n) {
unsigned long long result = 1;
for (unsigned long long i = 0; i < y; i++) {
result = (result * x) % n;
}
return result;
}
int main() {
unsigned long long x, y, n;
printf("Enter x: ");
scanf("%llu", &x);
printf("Enter y: ");
scanf("%llu", &y);
printf("Enter n: ");
scanf("%llu", &n);

unsigned long long result = powerMod(x, y, n);
printf("%llu^%llu mod %llu = %llu\n", x, y, n, result);
return 0;
}
