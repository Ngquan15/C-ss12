#include <stdio.h>

int tinhGiaiThua(int n) {
    if (n < 0) {
        return -1;
    }
    int giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        if (giaiThua > (100000 / i)) {
            return -2;
        }
        giaiThua *= i;
    }
    return giaiThua;
}

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    int ketQua = tinhGiaiThua(n);

    if (ketQua == -1) {
        printf("Khong the tinh giai thua cua so am.\n");
    } else if (ketQua == -2) {
        printf("Giai thua qua lon, khong the tinh duoc voi kieu int.\n");
    } else {
        printf("Giai thua cua %d la: %d\n", n, ketQua);
    }

    return 0;
}
