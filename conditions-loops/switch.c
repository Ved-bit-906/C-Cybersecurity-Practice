#include <stdio.h>

int main() {
    int choice;

    printf("1. Start\n");
    printf("2. Settings\n");
    printf("3. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Starting...\n");
            break;

        case 2:
            printf("Opening settings...\n");
            break;

        case 3:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
