#include <stdio.h>

int main() {
    char Chuso;
    int sum = 0;
    printf("Nhap mot so nguyen co 4 chu so: ");
    Chuso = getchar();
    sum += Chuso - '0';
    Chuso = getchar(); 
    sum += Chuso - '0';
    Chuso = getchar();
    sum += Chuso - '0';
    Chuso = getchar();
    sum += Chuso - '0';
    printf("Tong cac chu so: ");
    printf("%d\n", sum);

    return 0;
}
