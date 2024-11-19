#include <stdio.h>

int main() {
    char name[100];
    printf("Nhap ten cua ban: ");
    scanf("%99[^\n]", name);
    printf("Xin chao %s!\n", name);
    return 0;
}
