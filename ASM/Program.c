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

void Tim_uoc_chung_va_boi_chung_cua_2_so() {
    clear();
    printf("======================================\n");
    printf("   2. TIM UCLN & BCNN CUA HAI SO\n");
    printf("======================================\n");
    printf("22222222222 - Chua lam xong\n");
    pause();
}

void Tinh_tien_cho_quan_Karaoke() {
    clear();
    printf("======================================\n");
    printf("   3. TINH TIEN KARAOKE\n");
    printf("======================================\n");
    printf("333333 - Chua lam xong\n");
    pause();
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