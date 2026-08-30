#include <stdio.h>

void greet_user(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    greet_user(name);

    return 0;
}
