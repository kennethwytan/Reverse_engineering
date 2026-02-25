#include <stdio.h>
#include <string.h>
int main() {
    char password[20];
    printf("Enter password: ");
    scanf("%19s", password);
    if (strcmp(password, "secret123") == 0) {
        printf("Access granted!\n");
        return 0;
    }
    printf("Access denied!\n");
    return 1;
}
