#include <stdio.h>//thu vien
int Giatrilonnhat(int a, int b, int c){
    int max = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    return max;
}
int Kiemtranamnhuan(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}
void Hoanvi(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a, b, c, year;
    printf("Chuong trinh tim gia tri lon nhat!!!\n");
    printf("Nhap vao gia tri a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    int soMax = Giatrilonnhat(a,b,c);
    printf("Gia tri lon nhat la: %d", soMax);
    printf("\n\nChuong trinh kiem tra nam nhuan!!!\n");
    printf("Nhap vao nam can kiem tra:");
    scanf("%d",&year);
    if(Kiemtranamnhuan(year) == 1)
        printf("Day la nam nhuan!!!");
    else
        printf("Day khong phai la nam nhuan!!!");
    printf("\n\nChuong trinh hoan vi hai so.\n");
    printf("Nhap vao gia tri cua a va b:");
    scanf("%d %d",&a,&b);
    Hoanvi(&a, &b);
    printf("Gia tri sau khi hoan vi: %d %d",a,b);
}