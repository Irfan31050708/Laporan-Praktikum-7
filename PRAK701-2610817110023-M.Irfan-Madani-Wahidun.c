#include <stdio.h>

int main() {
    char front[50], back[50];
    int i, length = 0;

    printf("Nama Depan : ");
    scanf("%s", front);
    printf("Nama Belakang : ");
    scanf("%s", back);

    for (i = 0; front[i] != '\0'; i++) {
        length++;
    }
    for (i = 0; back[i] != '\0'; i++) {
        length++;
    }

    printf("Nama Lengkap : %s %s\n", front, back);
    printf("Panjang Nama (tanpa spasi) : %d\n", length);

    return 0;
}
