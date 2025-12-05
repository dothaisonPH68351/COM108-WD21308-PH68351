#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void pause() {
    printf("\n\nNhan Enter de tiep tuc...");
    getchar(); getchar();
}

void clear() {
    system("cls");
}

void lapchucnang()
{
    char tiepTuc;

    do 
    {
        printf("\n");
        printf("Ban co muon tiep tuc khong?\n");
        printf("[1] Co - Nhap so khac\n");
        printf("[0] Khong - Ve menu chinh\n");
        while (1)
        {
            printf("Chon (1 hoac 0): ");
            scanf(" %c", &tiepTuc);

            if (tiepTuc == '1' || tiepTuc == '0')
                break;
            else
                printf("Chi nhap 1 hoac 0 thoi! Nhap lai...\n");
        }
        if (tiepTuc == '0')
            return;
    } while (tiepTuc == '1');
}
 
void Kiem_tra_so_nguyen()
{
    char tiepTuc;
    do
    {
        clear();
        printf("======================================\n");
        printf("   1. KIEM TRA SO NGUYEN\n");
        printf("======================================\n");
        double x;
        printf("xin moi nhap so x: \n\a");
        scanf("%d", &x);
        if ((int)x == x)
        {
            printf("la so nguyen\n");
        }
        else
        {
            printf("ko la so nguyen\n");
        }
        int can = sqrt(x);
        if (can * can == x)
        {
            printf("so chinh phuong\n");
        }
        else
        {
            printf("ko la so chinh phuong\n");
        }
        if ((int)x == 2 || (int)x % 2 == 0)
        {
            printf("la so nguyen to\n");
        }
        else
        {
            printf("ko la so nguyen to\n");
        }

        printf("\n");
        printf("Ban co muon tiep tuc khong?\n");
        printf("[1] Co - Nhap so khac\n");
        printf("[0] Khong - Ve menu chinh\n");
        while (1)
        {
            printf("Chon (1 hoac 0): ");
            scanf(" %c", &tiepTuc);

            if (tiepTuc == '1' || tiepTuc == '0')
                break;
            else
                printf("Chi nhap 1 hoac 0 thoi! Nhap lai...\n");
        }
        if (tiepTuc == '0')
            return;
    } while (tiepTuc == '1');
}

void Tim_uoc_chung_va_boi_chung_cua_2_so()
{
    char tiepTuc;
    do
    {
        clear();
        printf("======================================\n");
        printf("   2. TIM UCLN & BCNN CUA HAI SO\n");
        printf("======================================\n");
        int x, y;

        printf("Nhap 2 so nguyen x, y: ");
        scanf("%d %d", &x, &y);

        int a = abs(x);
        int b = abs(y);
        int ucln = a;
        int temp_b = b;

        while (temp_b != 0) {
            int r = ucln % temp_b; // thuat toan euclid
            ucln = temp_b;
            temp_b = r;
        }

        long long bcnn;
        if (ucln == 0) 
        {
            bcnn = 0;
        }
        else {
            bcnn = (long long)abs(x) / ucln * abs(y);
        }

      
        printf("\n=> Ket qua:\n");
        printf("Uoc so chung lon nhat (UCLN): %d\n", ucln);
        if (ucln == 0) {
            printf("Boi so chung nho nhat (BCNN): Khong xac dinh (vi co so 0)\n");
        }
        else {
            printf("Boi so chung nho nhat (BCNN): %lld\n", bcnn);
        }
        printf("\n");
        printf("Ban co muon tiep tuc khong?\n");
        printf("[1] Co - Nhap so khac\n");
        printf("[0] Khong - Ve menu chinh\n");
        while (1)
        {
            printf("Chon (1 hoac 0): ");
            scanf(" %c", &tiepTuc);

            if (tiepTuc == '1' || tiepTuc == '0')
                break;
            else
                printf("Chi nhap 1 hoac 0 thoi! Nhap lai...\n");
        }
        if (tiepTuc == '0')
            return;
    } while (tiepTuc == '1');
}

void Tinh_tien_cho_quan_Karaoke()
{
    char tiepTuc;
    do
    {
        clear();
        printf("======================================\n");
        printf("   3. TINH TIEN KARAOKE\n");
        printf("======================================\n");
        int x, y, z;
        printf("nhap gio bat dau(12-23) x:\n");
        scanf("%d", &x);
        printf("nhap gio ket thuc(12-23) y:\n");
        scanf("%d", &y);

        if (x > 12 && y < 23 && x < y)
        {
            int hours = y - x;
            double total = 0;
            if (hours <= 3) total = hours * 50000;
            else total = 3 * 50000 + (hours - 3) * 50000 * 0.7;
            if (x >= 14 && x <= 17) total *= 0.9;
            printf("Tong tien karaoke: %.0f VND\n", total);

        }
        else
        {
            printf("Khong hop le! Vui long nhap lai.\n");
            
        }


        printf("\n");
        printf("Ban co muon tiep tuc khong?\n");
        printf("[1] Co - Nhap so khac\n");
        printf("[0] Khong - Ve menu chinh\n");
        while (1)
        {
            printf("Chon (1 hoac 0): ");
            scanf(" %c", &tiepTuc);

            if (tiepTuc == '1' || tiepTuc == '0')
                break;
            else
                printf("Chi nhap 1 hoac 0 thoi! Nhap lai...\n");
        }
        if (tiepTuc == '0')
            return;
    } while (tiepTuc == '1');
}

void Tinh_tien_dien()
{

    char tiepTuc;
    do
    {
        clear();
        printf("======================================\n");
        printf("     4. TINH TIEN DIEN SINH HOAT      \n");
        printf("======================================\n");

        printf("Nhap so dien su dung (kWh): ");

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

        printf("\n");
        printf("Ban co muon tiep tuc khong?\n");
        printf("[1] Co - Nhap so khac\n");
        printf("[0] Khong - Ve menu chinh\n");
        while (1)
        {
            printf("Chon (1 hoac 0): ");
            scanf(" %c", &tiepTuc);

            if (tiepTuc == '1' || tiepTuc == '0')
                break;
            else
                printf("Chi nhap 1 hoac 0 thoi! Nhap lai...\n");
        }
        if (tiepTuc == '0')
            return;
    } while (tiepTuc == '1');
}

void Doi_tien() 
{
    char tiepTuc;
    do
    {
        clear();
        printf("======================================\n");
        printf("   5. CHUC NANG DOI TIEN\n");
        printf("======================================\n");
        int tien;
        printf("Nhap so tien can doi: ");
        scanf("%d", &tien);

        if (tien < 0)
        {
            printf("So tien khong hop le!\n");
            return 1;
        }
        if (tien == 0) {
            printf("0 to\n");
            return 0;
        }

        int mg[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };

        printf("So tien %d duoc doi thanh:\n", tien);

        for (int i = 0; i < 9; i++)
        {
            int soto = tien / mg[i];
            if (soto > 0) {
                printf("%d to %d\n", soto, mg[i]);
                tien -= soto * mg[i];
            }
        }
        printf("\n");
        printf("Ban co muon tiep tuc khong?\n");
        printf("[1] Co - Nhap so khac\n");
        printf("[0] Khong - Ve menu chinh\n");
        while (1)
        {
            printf("Chon (1 hoac 0): ");
            scanf(" %c", &tiepTuc);

            if (tiepTuc == '1' || tiepTuc == '0')
                break;
            else
                printf("Chi nhap 1 hoac 0 thoi! Nhap lai...\n");
        }
        if (tiepTuc == '0')
            return;
    } while (tiepTuc == '1');
}

void Tinh_lai_suat_vay_ngan_hang_vay_tra_gop()
{
    char tiepTuc;
    do
    {
        clear();
        printf("======================================\n");
        printf("   6. TINH LAI SUAT VAY TRA GOP\n");
        printf("======================================\n");

        double tienVay;
        printf("Nhap so tien muon vay: ");
        scanf("%lf", &tienVay);
        double laiThang = 0.05;
        double tong = tienVay * pow(1 + laiThang, 12);
        double traThang = tong / 12;
        printf("Tong tien phai tra sau 12 thang: %.0f\n", tong);
        printf("Moi thang phai tra: %.0f\n", traThang);

        printf("\n");
        printf("Ban co muon tiep tuc khong?\n");
        printf("[1] Co - Nhap so khac\n");
        printf("[0] Khong - Ve menu chinh\n");
        while (1)
        {
            printf("Chon (1 hoac 0): ");
            scanf(" %c", &tiepTuc);

            if (tiepTuc == '1' || tiepTuc == '0')
                break;
            else
                printf("Chi nhap 1 hoac 0 thoi! Nhap lai...\n");
        }
        if (tiepTuc == '0')
            return;
    } while (tiepTuc == '1');
}

void Vay_tien_mua_xe()
{
    char tiepTuc;
    do
    {
        clear();
        printf("======================================\n");
        printf("   7. VAY TIEN MUA XE TRA GOP\n");
        printf("======================================\n");
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

        printf("\n");
        printf("Ban co muon tiep tuc khong?\n");
        printf("[1] Co - Nhap so khac\n");
        printf("[0] Khong - Ve menu chinh\n");
        while (1)
        {
            printf("Chon (1 hoac 0): ");
            scanf(" %c", &tiepTuc);

            if (tiepTuc == '1' || tiepTuc == '0')
                break;
            else
                printf("Chi nhap 1 hoac 0 thoi! Nhap lai...\n");
        }
        if (tiepTuc == '0')
            return;
    } while (tiepTuc == '1');
}

void Sap_xep_thong_tin_sinh_vien()
{
    typedef struct
    {
        char ten[50];
        double diem;
        char hocLuc[20];
    } SinhVien;
    char tiepTuc;
    do
    {
        clear();
        printf("======================================\n");
        printf("   8. SAP XEP THONG TIN SINH VIEN\n");
        printf("======================================\n");
        printf("test chuc nang 8 - Chua lam xong\n");
        int n;
        printf("Nhap so luong sinh vien: ");
        scanf("%d", &n);
        SinhVien sv[100]; // dùng mảng cố định
        for (int i = 0; i < n; i++)
        {
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
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (sv[i].diem < sv[j].diem)
                {
                    SinhVien tmp = sv[i];
                    sv[i] = sv[j];
                    sv[j] = tmp;
                }
            }
        }
        printf("Danh sach sinh vien:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%s - %.1f - %s\n", sv[i].ten, sv[i].diem, sv[i].hocLuc);
        }
        printf("\n");
        printf("Ban co muon tiep tuc khong?\n");
        printf("[1] Co - Nhap so khac\n");
        printf("[0] Khong - Ve menu chinh\n");
        while (1)
        {
            printf("Chon (1 hoac 0): ");
            scanf(" %c", &tiepTuc);

            if (tiepTuc == '1' || tiepTuc == '0')
                break;
            else
                printf("Chi nhap 1 hoac 0 thoi! Nhap lai...\n");
        }
        if (tiepTuc == '0')
            return;
    } while (tiepTuc == '1');
}

void Xay_dung_game_FPOLY_LOTT() 
{
    char tiepTuc;
    do
    { 
    clear();
    printf("======================================\n");
    printf("   9. GAME FPOLY-LOTT (XOSO)\n");
    printf("======================================\n");

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

    printf("\n");
    printf("Ban co muon tiep tuc khong?\n");
    printf("[1] Co - Nhap so khac\n");
    printf("[0] Khong - Ve menu chinh\n");
    while (1)
    {
        printf("Chon (1 hoac 0): ");
        scanf(" %c", &tiepTuc);

        if (tiepTuc == '1' || tiepTuc == '0')
            break;
        else
            printf("Chi nhap 1 hoac 0 thoi! Nhap lai...\n");
    }
    if (tiepTuc == '0')
        return;
    } while (tiepTuc == '1');
}

void Tinh_toan_phan_so() 
{
    char tiepTuc;
    do
    { 
    clear();
    printf("======================================\n");
    printf("   10. TINH TOAN PHAN SO\n");
    printf("======================================\n");
    
    int a, b, x, y;
    printf("nhap tu so ps1: \n");
    scanf("%d", &a);
    printf("nhap mau so ps1: \n");
    scanf("%d", &b);
    printf("nhap tu so ps2: \n");
    scanf("%d", &x);
    printf("nhap mau so ps2: \n");
    scanf("%d", &y);
    int tongtu = (a + x);
    int tongmau =(b + y);
    int hieutu = (a - x);
    int hieumau = (b - y);
    int thuongtu = (a * y);
    int thuongmau = (b * x);
    int tichtu = (a * x);
    int tichmau = (b * y);
    printf("tong phan so la: %d/%d\n", tongtu, tongmau);
    printf("hieu phan so la: %d/%d\n", hieutu, hieumau);
    printf("thuong phan so la: %d/%d\n", thuongtu, thuongmau);
    printf("tich phan so la: %d/%d\n", tichtu, tichmau);
    printf("\n");
    printf("Ban co muon tiep tuc khong?\n");
    printf("[1] Co - Nhap so khac\n");
    printf("[0] Khong - Ve menu chinh\n");
    while (1)
    {
        printf("Chon (1 hoac 0): ");
        scanf(" %c", &tiepTuc);

        if (tiepTuc == '1' || tiepTuc == '0')
            break;
        else
            printf("Chi nhap 1 hoac 0 thoi! Nhap lai...\n");
    }
    if (tiepTuc == '0')
        return;
    } while (tiepTuc == '1');
}

int main() {
    int chon;

    do 
    {
        clear();
        printf("======================================\n");
        printf("    ASM NHAP MON LAP TRINH\n");
        printf("======================================\n");
        printf("1.  Kiem tra so nguyen\n");
        printf("2.  Tim UCLN & BCNN cua 2 so\n");
        printf("3.  Tinh tien Karaoke\n");
        printf("4.  Tinh tien dien\n");
        printf("5.  Doi tien\n");
        printf("6.  Tinh lai suat vay tra gop\n");
        printf("7.  Vay tien mua xe\n");
        printf("8.  Sap xep thong tin sinh vien\n");
        printf("9.  Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("======================================\n");
        printf("0.  Thoat chuong trinh\n");
        printf("======================================\n");
        printf(">> Nhap lua chon cua ban (0-10): ");
        scanf("%d", &chon);

        switch (chon) {
        case 1:  Kiem_tra_so_nguyen(); break;
        case 2:  Tim_uoc_chung_va_boi_chung_cua_2_so(); break;
        case 3:  Tinh_tien_cho_quan_Karaoke(); break;
        case 4:  Tinh_tien_dien(); break;
        case 5:  Doi_tien(); break;
        case 6:  Tinh_lai_suat_vay_ngan_hang_vay_tra_gop(); break;
        case 7:  Vay_tien_mua_xe(); break;
        case 8:  Sap_xep_thong_tin_sinh_vien(); break;
        case 9:  Xay_dung_game_FPOLY_LOTT(); break;
        case 10: Tinh_toan_phan_so(); break;
        case 0:
            clear();
            printf("\n======================================\n");
            printf("   CAM ON BAN DA SU DUNG CHUONG TRINH!\n");
            printf("   Hen gap lai lan sau!\n");
            printf("======================================\n");
            pause();
            break;
        default:
            clear();
            printf("\nLUA CHON KHONG HOP LE!\n");
            printf("Vui long chon tu 0 den 10.\n");
            pause();
        }
    } while (chon != 0);

    return 0;
}