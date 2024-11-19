#include <stdio.h>

int main() {
    float Bankinh, Chuvi, Dientich;
    const float PI = 3.14;
    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &Bankinh);
    Chuvi = 2 * PI * Bankinh;
    Dientich = PI * Bankinh * Bankinh;
    printf("Chu vi hinh tron: %.2f\n", Chuvi);
    printf("Dien tich hinh tron: %.2f\n", Dientich);

    return 0;
}
