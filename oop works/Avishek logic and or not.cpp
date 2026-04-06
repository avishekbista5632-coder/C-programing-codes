#include <stdio.h>

int main() {
    int input1, input2;

    // Taking user input for two boolean values (0 for false, 1 for true)
    printf("Enter the first boolean value (0 or 1): ");
    scanf("%d", &input1);

    printf("Enter the second boolean value (0 or 1): ");
    scanf("%d", &input2);

    // Logical AND
    int logicalAndResult = input1 && input2;
    printf("Logical AND: %d && %d = %d\n", input1, input2, logicalAndResult);

    // Logical OR
    int logicalOrResult = input1 || input2;
    printf("Logical OR: %d || %d = %d\n", input1, input2, logicalOrResult);

    // Logical NOT
    int logicalNotResult1 = !input1;
    int logicalNotResult2 = !input2;

    printf("Logical NOT for %d = %d\n", input1, logicalNotResult1);
    printf("Logical NOT for %d = %d\n", input2, logicalNotResult2);

    return 0;
}
