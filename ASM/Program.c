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

void Tinh_tien_dien() {
    clear();
    printf("======================================\n");
    printf("   4. TINH TIEN DIEN\n");
    printf("======================================\n");
    printf("4444444 - Chua lam xong\n");
    pause();
}

void Doi_tien() {
    clear();
    printf("======================================\n");
    printf("   5. CHUC NANG DOI TIEN\n");
    printf("======================================\n");
    printf("test chuc nang 5 - Chua lam xong\n");
    pause();
}

void Tinh_lai_suat_vay_ngan_hang_vay_tra_gop() {
    clear();
    printf("======================================\n");
    printf("   6. TINH LAI SUAT VAY TRA GOP\n");
    printf("======================================\n");
    printf("test chuc nang 6 - Chua lam xong\n");
    pause();
}

void Vay_tien_mua_xe() {
    clear();
    printf("======================================\n");
    printf("   7. VAY TIEN MUA XE TRA GOP\n");
    printf("======================================\n");
    printf("test chuc nang 7 - Chua lam xong\n");
    pause();
}

void Sap_xep_thong_tin_sinh_vien() {
    clear();
    printf("======================================\n");
    printf("   8. SAP XEP THONG TIN SINH VIEN\n");
    printf("======================================\n");
    printf("test chuc nang 8 - Chua lam xong\n");
    pause();
}

void Xay_dung_game_FPOLY_LOTT() {
    clear();
    printf("======================================\n");
    printf("   9. GAME FPOLY-LOTT (XOSO)\n");
    printf("======================================\n");
    printf("test chuc nang 9 - Chua lam xong\n");
    pause();
}

void Tinh_toan_phan_so() {
    clear();
    printf("======================================\n");
    printf("   10. TINH TOAN PHAN SO\n");
    printf("======================================\n");
    printf("test chuc nang 10 - Chua lam xong\n");
    pause();
}

int main() {
    int chon;

    do 
    {
        clear();
        printf("======================================\n");
        printf("     CHUONG TRINH TIEN ICH - FPOLY\n");
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