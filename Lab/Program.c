#include <stdio.h>
#define MAX 100005

int main() {
    int n;
    int mang[MAX];

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    int i;
    for (i = 0; i < n; i++) {
        printf("mang[%d] = ", i);
        scanf("%d", &mang[i]);
    }

    long long tong = 0;
    int dem = 0;
    for (i = 0; i < n; i++) {
        if (mang[i] % 3 == 0) {
            tong += mang[i];
            dem++;
        }
    }

    if (dem == 0) printf("Khong co so nao chia het cho 3\n");
    else printf("Trung binh cong cac so chia het cho 3: %.2f\n", (double)tong / dem);

    return 0;
}
