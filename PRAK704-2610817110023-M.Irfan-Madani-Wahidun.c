#include <stdio.h>

int main() {
    char description[200];
    int length = 0;

    fgets(description, 200, stdin);

    while (description[length] != '\n' && description[length] != '\0') {
        length++;
    }
    description[length] = '\0';

    if (length > 20) {
        description[20] = '\0';
        printf("%s...\n", description);
    } else {
        printf("%s\n", description);
    }

    return 0;
}
