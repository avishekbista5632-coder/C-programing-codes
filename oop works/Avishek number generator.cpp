#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
// Seed the random number generator with the current time
srand(time(NULL));
// Generate and print pseudo-random numbers
printf("Random Numbers:\n");
for (int i = 0; i < 5; i++) {
int randomNum = rand();
printf("%d\n", randomNum);
}
return 0;
}
