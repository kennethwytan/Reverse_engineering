#include <stdio.h>
#include <string.h>
int check_password(char *input) {
    if (strlen(input) != 8) return 0;
    if (input[0] != 'h') return 0;
    if (input[1] != 'a') return 0;
    if (input[2] != 'c') return 0;
    if (input[3] != 'k') return 0;
    if (input[4] != 'm') return 0;
    if (input[5] != 'e') return 0;
    if (input[6] != '4') return 0;
    if (input[7] != '2') return 0;
    return 1;
}
int main() {
    char password[20];
    printf("Enter password: ");
    scanf("%19s", password);
    if (check_password(password)) {
        printf("Crack Successful\n");
        return 0;
    }
    printf("Wrong password\n");
    return 1;
}
