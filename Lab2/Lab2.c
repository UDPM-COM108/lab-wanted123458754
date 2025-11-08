// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
// #include <stdio.h>
// int main(){
//     int x,y;
//     printf("Nhap vao 2 so nguyen x va y: ");
//     scanf("%d %d",&x,&y);
//     printf("Tong va hieu cua hai so nguyen %d va %d lan luot la: %d,%d",x,y,x+y,x-y);
// }
// #BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
// #include <stdio.h>
// int main(){
//     short test;
//     int chieurong, chieudai, chuvi, dientich;
//     printf("Nhap vao chieu dai: ");
//     scanf("%d",&chieudai);
//     printf("Nhap vao chieu rong: ");
//     scanf("%d",&chieurong);
//     chuvi = (chieudai+chieurong)*2;
//     printf("Chu vi: %d cm",chuvi);
//     dientich = chieudai*chieurong;
//     printf("\nDien tich: %d cm",dientich);
// }
// #Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
// #include <stdio.h>
// #include <math.h>
// #define pi 3.14;
// int main(){
//     float Bkinh, chuHT, dientichHT;
//     printf("Nhap vao ban kinh hinh tron:");
//     scanf("%f",&Bkinh);
//     chuHT = 2*Bkinh*pi;
//     dientichHT = pow(Bkinh,2)*pi;
//     printf("Chu vi hinh tron la: %.2f",chuHT);
//     printf("\nDien tich hinh tron la: %.2f",dientichHT);
// }