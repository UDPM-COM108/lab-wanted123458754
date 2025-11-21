#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char luaChon[2];
void Trungbinh2songuyen(){
    printf("\n\nChuong Trinh tinh trung binh cua cac so tu nhien chia het cho 2 trong khoang [min,max]\n\n");
    ref:
    int min, max;
    float dem = 0, sum = 0;
    printf("Nhap vao gia tri min:");
    scanf("%d", &min);
    printf("Nhap vao gia tri max:");
    scanf("%d", &max);
    if (min > max) {
        printf("Gia tri min phai nho hon hoac bang gia tri max. Vui long nhap lai:\n\n");
        goto ref;
    }
    while (min <= max) {
        if (min % 2 == 0){
        sum += min;
        dem++;
        }
        min++;
    }
    printf("Trung binh cua so tu nhien chia het cho 2 la: %.2f", sum / dem);
}
void Kiemtrasonguyento(){
    printf("\n\nChuong Trinh kiem tra so nguyen to\n");
    int n, check = 0;
    printf("\nNhap vao so nguyen n:");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d khong phai la so nguyen to.", n);
        return;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            check = 1;
            break;
        }
    }
    if (check == 0) {
        printf("%d la so nguyen to.", n);
    } 
    else {
        printf("%d khong phai la so nguyen to.", n);
    }
}
void Kiemtrasochinhphuong(){
    printf("\n\nChuong Trinh kiem tra so chinh phuong\n");
    int x;
    printf("\nNhap vao so nguyen x:");
    scanf("%d", &x);
    if (x < 0) {
        printf("%d khong phai la so chinh phuong.", x);
        return;
    }
    int i = 0;
    while (i * i < x) {
        i++;
    }
    if (i * i == x) {
        printf("%d la so chinh phuong.", x);
    } else {
        printf("%d khong phai la so chinh phuong.", x);
    }
}
void Chuyendoisothapphan(){
    int n,i, index = 0;
    char binary[9];
    printf("\n\nChuong Trinh chuyen doi so thap phan sang he nhi phan.\n");
    printf("\nNhap vao 1 so thap phan n:");
    scanf("%d", &n);
    printf("He nhi phan cua so thap phan %d la: ", n);
    if(n == 0){
        printf("0\n");
        return;
    }
    else if(n > 0){
        while (n > 0){  
            binary[index] = (n % 2) + '0';
            n = n / 2;
            index++;
        }
        for (int j = index - 1; j >= 0; j--) {
            printf("%c", binary[j]);
        }
        printf("\n");
    }
    else{
        printf("Chương trình chỉ hỗ trợ số thập phân không âm.");        
    }
}
int main() {
    printf("Menu");
    printf("\n1. Tinh trung binh cua cac so tu nhien chia het cho 2 trong khoang [min,max]");
    printf("\n2. Kiem tra so nguyen to");
    printf("\n3. Kiem tra so chinh phuong");
    printf("\n4. Chuyen doi so thap phan sang he nhi phan va he bat phan");
    printf("\n0. Thoat chuong trinh");
    printf("\n\n");
    printf("Vui long chon chuc nang ban muon su dung (1-4): ");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            Trungbinh2songuyen();
            break;
        case 2:
            Kiemtrasonguyento();
            break;
        case 3:
            Kiemtrasochinhphuong();
            break;
        case 4:
            Chuyendoisothapphan();
            break;
        case 0:
            printf("Thoat chuong trinh.\n");
            exit(0);
            break;
        default:
            printf("Lua chon khong hop le.");
            break;
    }
    return 0;
}