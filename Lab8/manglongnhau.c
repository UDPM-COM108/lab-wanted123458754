#include <stdio.h>
#include <string.h>
struct sinhvien{
    int MaSV;
    char ten[20];
    struct Date{
        int ngay;
        int thang;
        int nam;
    }ngaysinh;
}sv1;
int main(){
    struct sinhvien sv1;
    sv1.MaSV = 101;
    strcpy(sv1.ten,"Phong Tran");
    sv1.ngaysinh.ngay = 10;
    sv1.ngaysinh.thang = 11;
    sv1.ngaysinh.nam = 1998;
    printf("MSSV:%d\n",sv1.MaSV);
    printf("Ten SV: %s\n",sv1.ten);
    printf("Ngay sinh (dd/mm/yy): %d/%d/%d\n",sv1.ngaysinh.ngay,sv1.ngaysinh.thang,sv1.ngaysinh.nam);
}