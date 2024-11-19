#include <stdio.h>

int main() {
    float Toan, Van, Tienganh, tong, diemtb;

    printf("Nhap diem Toan: ");
    scanf("%f", &Toan);

    printf("Nhap diem Van: ");
    scanf("%f", &Van);

    printf("Nhap diem Anh: ");
    scanf("%f", &Tienganh);

    tong = Toan + Van + Tienganh;
    diemtb = tong / 3;

    printf("Tong diem: %.2f\n", tong);
    printf("Diem trung binh: %.2f\n", diemtb);

    return 0;
}
