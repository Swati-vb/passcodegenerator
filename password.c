#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* generatePassword(int length) {
    char* password = malloc((length + 1) * sizeof(char));
     const char specialChars[] = "!@#$%^&*()_+{}|:<>?~";

    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        password[i] = rand() % 94 + 33; // ASCII range: 33-126
    }

    password[length] = '\0';

    return password;
}

int main() {
    int length;

    printf("Enter the desired length of the password: ");
    scanf("%d", &length);

    char* password = generatePassword(length);
    printf("Generated Password: %s\n", password);

    free(password);

    return 0;
}
