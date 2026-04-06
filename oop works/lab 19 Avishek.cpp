#include <stdio.h>
#include <string.h>

// Function to perform Caesar cipher encryption
void encrypt(char *text, int shift) {
    int i;
    for (i = 0; i < strlen(text); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = (text[i] + shift - 'A') % 26 + 'A';
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = (text[i] + shift - 'a') % 26 + 'a';
        }
    }
}

// Function to perform Caesar cipher decryption
void decrypt(char *text, int shift) {
    encrypt(text, 26 - shift); // Decryption is just encryption with the reverse shift
}

int main() {
    char text[100];
    int shift;

    // Input plaintext
    printf("Enter text to encrypt: ");
    fgets(text, sizeof(text), stdin);

    // Input shift value
    printf("Enter shift value: ");
    scanf("%d", &shift);

    // Encrypt and print the result
    encrypt(text, shift);
    printf("Encrypted text: %s\n", text);

    // Decrypt and print the result
    decrypt(text, shift);
    printf("Decrypted text: %s\n", text);

    return 0;
}

