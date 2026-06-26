#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    int visited[256] = {0};

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (!visited[(unsigned char)str[i]]) {
            printf("%c", str[i]);
            visited[(unsigned char)str[i]] = 1;
        }
    }

    return 0;
}