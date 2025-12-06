#include <stdio.h>
#include <string.h>
struct sinhvien{
    int MaSV;
    char hoTen[50];
    float diem;
    char hocLuc[10];
};
void inputStructSinhVien(struct sinhvien x[], int n){
    int i;
    for(i =0; i < n;i++){
        printf("Nhap vao MSV:\n");
        scanf("%d",&x[i]);
        getchar();
        printf("Nhap vao ten cua ban:\n");
        scanf("%s",x[i]);
        printf("Nhap vao diem cua ban");
        scanf("%f",&x[i]);
    }
}
void printStructSinhVien(struct sinhvien x[],int n){
    int i;
    printf("MSSV\tHoTen\tDiem\tHocLuc\n");
    for(i=0;i<n;i++){
        printf("%4d\t%5s\t%4.1f\t%9s",x[i].MaSV,x[i].hoTen,x[i].diem,x[i].hocLuc);
    }
}
void swap(struct sinhvien *x,struct sinhvien *y){
    struct sinhvien temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){

}