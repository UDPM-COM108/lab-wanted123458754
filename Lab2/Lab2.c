
#include <stdio.h> //Khai bao thu vien
#include <math.h> //Khai bao thu vien
#define pi 3.14; //Khai bao hang so
int main(){ //Ham main
    //BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
    int x,y; //Khai bao bien
    printf("Nhap vao 2 so nguyen x va y: "); //In ra man hinh yeu cau nhap gia tri tu ban phim
    scanf("%d %d",&x,&y); //Nhap va gan gia tri cho bien
    printf("Tong va hieu cua hai so nguyen %d va %d lan luot la: %d,%d\n",x,y,x+y,x-y); //In ra ket qua cho phep toan

    //BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
    short test; //Khai bao bien
    int chieurong, chieudai, chuvi, dientich; //Khai bao bien
    printf("Nhap vao chieu dai: "); //In ra man hinh yeu cau nhap gia tri tu ban phim
    scanf("%d",&chieudai); //Nhap va gan gia tri cho bien
    printf("Nhap vao chieu rong: "); //In ra man hinh yeu cau nhap gia tri tu ban phim
    scanf("%d",&chieurong); //Nhap va gan gia tri cho bien
    chuvi = (chieudai+chieurong)*2; //Ham tinh toan
    printf("Chu vi: %d cm",chuvi); //In ra ket qua cho phep toan
    dientich = chieudai*chieurong; //Ham tinh toan
    printf("\nDien tich: %d cm",dientich); //In ra ket qua cho phep toan

    //Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
    float Bkinh, chuHT, dientichHT; //Khai bao bien
    printf("Nhap vao ban kinh hinh tron:"); //In ra man hinh yeu cau nhap gia tri tu ban phim
    scanf("%f",&Bkinh); //Nhap va gan gia tri cho bien
    chuHT = 2*Bkinh*pi; //Ham tinh toan
    dientichHT = pow(Bkinh,2)*pi; //Ham tinh toan
    printf("Chu vi hinh tron la: %.2f",chuHT); //In ra ket qua cho phep toan
    printf("\nDien tich hinh tron la: %.2f",dientichHT); //In ra ket qua cho phep toan

    //BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH
    float toan, ly, hoa; //Khai bao bien
    printf("Nhap diem cua ban: "); //In ra man hinh yeu cau nhap gia tri tu ban phim
    printf("\nToan = "); //In ra man hinh yeu cau nhap gia tri tu ban phim
    scanf("%f",&toan); //Nhap va gan gia tri cho bien
    printf("Ly = "); //In ra man hinh yeu cau nhap gia tri tu ban phim
    scanf("%f",&ly); //Nhap va gan gia tri cho bien
    printf("Hoa = "); //In ra man hinh yeu cau nhap gia tri tu ban phim
    scanf("%f",&hoa); //Nhap va gan gia tri cho bien
    printf("Diem trung binh cua ba mon: %.1f\n",(((toan*3)+(ly*2)+(hoa))/6)); //In ra ket qua cho phep toan

    //Bài 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI, DIỆN TÍCH TAM GIÁC VUÔNG
    float a,b,c; //Khai bao bien
    printf("Nhap do dai cac canh: \na ="); //In ra man hinh yeu cau nhap gia tri tu ban phim
    scanf("%f",&a); //Nhap va gan gia tri cho bien
    printf("b ="); //In ra man hinh yeu cau nhap gia tri tu ban phim
    scanf("%f",&b); //Nhap va gan gia tri cho bien
    printf("c ="); //In ra man hinh yeu cau nhap gia tri tu ban phim
    scanf("%f",&c); //Nhap va gan gia tri cho bien
    printf("Chu vi cua tam giac vuong la %.2f.\nDien tich cua tam giac vuong la %.2f",a+b+c,a*b/2); //In ra ket qua cho phep toan
}