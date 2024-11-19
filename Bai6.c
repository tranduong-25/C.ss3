#include <stdio.h>

int main() {
    float Dodaiday, chieucao, Dientich;
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &Dodaiday);
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &chieucao);
    Dientich = 0.5 * Dodaiday * chieucao;
    printf("Dien tich tam giac: %.2f\n", Dientich);

    return 0;
}
