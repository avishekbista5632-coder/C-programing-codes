#include <stdio.h>

// Function to implement Tower of Hanoi recursively
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

// Objective: Implement the Tower of Hanoi problem using recursion.
// Theory: The Tower of Hanoi is a classic problem in computer science and mathematics. It consists of three rods and a number 
//          of disks of different sizes, which can slide onto any rod. The puzzle starts with the disks in a neat stack in 
//          ascending order of size on one rod, the smallest at the top. The objective is to move the entire stack to another 
//          rod, obeying the following simple rules:
//          1. Only one disk can be moved at a time.
//          2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack or 
//             on an empty rod.
//          3. No disk may be placed on top of a smaller disk.
//          This program uses recursion to solve the Tower of Hanoi problem and prints the sequence of moves.

int main() {
    int numDisks = 3; // Number of disks in the Tower of Hanoi

    printf("Tower of Hanoi solution with %d disks:\n", numDisks);
    towerOfHanoi(numDisks, 'A', 'B', 'C');

    return 0;
}
