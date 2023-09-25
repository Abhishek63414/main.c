#include <stdio.h>
#include <string.h>

int main() {
    char nationality[20];

    // Prompt the user to enter their nationality
    printf("Please enter your nationality: ");
    scanf("%s", nationality);

    // Convert the input to lowercase for case-insensitive comparison
    for (int i = 0; i < strlen(nationality); i++) {
        nationality[i] = tolower(nationality[i]);
    }

    // Check if the user is Indian or French and print the appropriate greeting
    if (strcmp(nationality, "indian") == 0) {
        printf("Namaste\n");
    } else if (strcmp(nationality, "french") == 0) {
        printf("Bonjour\n");
    } else {
        printf("Hello\n"); // Default greeting for other nationalities
    }

    return 0;
}
