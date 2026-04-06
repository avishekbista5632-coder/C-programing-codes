 #include <stdio.h>
#include <stdbool.h>

// Define two logical expressions as functions
bool expression1(int x, int y) {
return x > 0 && y > 0;
}
bool expression2(int x, int y) {
return x + y > 0;
}
int main() {
int x, y;
printf("Enter two integer values (x and y): ");
scanf("%d %d", &x, &y);
// Evaluate the two expressions
bool result1 = expression1(x, y);
bool result2 = expression2(x, y);
printf("Result of Expression 1: %s\n", result1 ? "true" : "false");
printf("Result of Expression 2: %s\n", result2 ? "true" : "false");
// Check if the two expressions are logically equivalent
if (result1 == result2) {
printf("The expressions are logically equivalent.\n");
} else {
printf("The expressions are not logically equivalent.\n");
}
return 0;
}
