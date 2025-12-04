#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

// ===== Các hàm hỗ trợ =====
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int isPerfectSquare(int n) {
    int sq = sqrt(n);
    return (sq * sq == n);
}
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

// ===== Chức năng 1 =====
void chucNang1() {
    int x;
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);
    printf("So %d la so nguyen.\n", x);
    if (isPrime(x)) printf("So %d la so nguyen to.\n", x);
    else printf("So %d khong phai la so nguyen to.\n", x);
    if (isPerfectSquare(x)) printf("So %d la so chinh phuong.\n", x);
    else printf("So %d khong phai la so chinh phuong.\n", x);
}

// ===== Chức năng 2 =====
void chucNang2() {
    int x, y;
    printf("Nhap 2 so nguyen x, y: ");
    scanf("%d%d", &x, &y);
    printf("Uoc so chung lon nhat: %d\n", gcd(x, y));
    printf("Boi so chung nho nhat: %d\n", lcm(x, y));
}

// ===== Chức năng 3 =====
void chucNang3() {
    int start, end;
    printf("Nhap gio bat dau (12-23): ");
    scanf("%d", &start);
    printf("Nhap gio ket thuc (12-23): ");
    scanf("%d", &end);
    if (start < 12 || end > 23 || start >= end) {
        printf("Khong hop le!\n");
        return;
    }
    int hours = end - start;
    double total = 0;
    if (hours <= 3) total = hours * 150000;
    else total = 3 * 150000 + (hours - 3) * 150000 * 0.7;
    if (start >= 14 && start <= 17) total *= 0.9;
    printf("Tong tien karaoke: %.0f VND\n", total);
}

// ===== Chức năng 4 =====
void chucNang4() {
    int kwh;
    printf("Nhap so kWh: ");
    scanf("%d", &kwh);
    double total = 0;
    if (kwh <= 50) total = kwh * 1678;
    else if (kwh <= 100) total = 50 * 1678 + (kwh - 50) * 1734;
    else if (kwh <= 200) total = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    else if (kwh <= 300) total = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    else if (kwh <= 400) total = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    else total = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    printf("Tien dien phai tra: %.0f VND\n", total);
}

// ===== Chức năng 5 =====
void chucNang5() {
    int money;
    int menhGia[] = { 500,200,100,50,20,10,5,2,1 };
    printf("Nhap so tien can doi: ");
    scanf("%d", &money);
    for (int i = 0; i < 9; i++) {
        int soTo = money / menhGia[i];
        if (soTo > 0) {
            printf("%d to %d\n", soTo, menhGia[i]);
            money %= menhGia[i];
        }
    }
}

// ===== Chức năng 6 =====
void chucNang6() {
    double tienVay;
    printf("Nhap so tien muon vay: ");
    scanf("%lf", &tienVay);
    double laiThang = 0.05;
    double tong = tienVay * pow(1 + laiThang, 12);
    double traThang = tong / 12;
    printf("Tong tien phai tra sau 12 thang: %.0f\n", tong);
    printf("Moi thang phai tra: %.0f\n", traThang);
}

// ===== Chức năng 7 =====
void chucNang7() {
    double phanTram;
    printf("Nhap phan tram vay (vd 80): ");
    scanf("%lf", &phanTram);
    double giaXe = 500000000;
    double traTruoc = giaXe * (100 - phanTram) / 100;
    double vay = giaXe * phanTram / 100;
    double laiNam = 0.072;
    int thoiHan = 24 * 12; // 24 nam = 288 thang
    double tong = vay * pow(1 + laiNam, 24);
    double traThang = tong / thoiHan;
    printf("Tra truoc: %.0f VND\n", traTruoc);
    printf("Moi thang phai tra: %.0f VND\n", traThang);
}

// ===== Chức năng 8 =====
typedef struct {
    char ten[50];
    double diem;
    char hocLuc[20];
} SinhVien;

void chucNang8() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    SinhVien sv[100]; // dùng mảng cố định
    for (int i = 0; i < n; i++) {
        printf("Nhap ten: ");
        scanf("%s", sv[i].ten);
        printf("Nhap diem: ");
        scanf("%lf", &sv[i].diem);
        if (sv[i].diem >= 9) strcpy(sv[i].hocLuc, "Xuat sac");
        else if (sv[i].diem >= 8) strcpy(sv[i].hocLuc, "Gioi");
        else if (sv[i].diem >= 6.5) strcpy(sv[i].hocLuc, "Kha");
        else if (sv[i].diem >= 5) strcpy(sv[i].hocLuc, "Trung binh");
        else strcpy(sv[i].hocLuc, "Yeu");
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sv[i].diem < sv[j].diem) {
                SinhVien tmp = sv[i];
                sv[i] = sv[j];
                sv[j] = tmp;
            }
        }
    }
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %.1f - %s\n", sv[i].ten, sv[i].diem, sv[i].hocLuc);
    }
}

// ===== Chức năng 9 =====
void chucNang9() {
    int a, b;
    printf("Nhap 2 so (1-15): ");
    scanf("%d%d", &a, &b);
    srand(time(NULL));
    int x = rand() % 15 + 1;
    int y = rand() % 15 + 1;
    printf("So trung thuong: %d %d\n", x, y);
    int trung = 0;
    if (a == x || a == y) trung++;
    if (b == x || b == y) trung++;
    if (trung == 0) printf("Chuc ban may man lan sau!\n");
    else if (trung == 1) printf("Chuc mung ban da trung giai NHI!\n");
    else printf("Chuc mung ban da trung giai NHAT!\n");
}

int main() {
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Uoc so chung & Boi so chung\n");
        printf("3. Tinh tien Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Lai suat vay ngan hang\n");
        printf("7. Vay mua xe\n");
        printf("8. Sap xep sinh vien\n");
        printf("9. FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: chucNang1(); break;
        case 2: chucNang2(); break;
        case 3: chucNang3(); break;
        case 4: chucNang4(); break;
        case 5: chucNang5(); break;
        case 6: chucNang6(); break;
        case 7: chucNang7(); break;
        case 8: chucNang8(); break;
        case 9: chucNang9(); break;
        case 10: /* viết tiếp chức năng 10 */ break;
        case 0: printf("Thoat chuong trinh.\n"); break;
        default: printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);

    return 0;
}