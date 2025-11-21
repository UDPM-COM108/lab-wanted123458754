#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Thocluc(){
    float dtb;
    error:printf("Nhap diem trung binh cua ban: ");
    scanf("%f",&dtb);
    if(dtb>=0 && dtb <=10){
        if(dtb >=9){
            printf("Chuc mung, ban da dat hoc luc xuat sac\n");
            system("pause");
        }
        else if(dtb >=8 && dtb < 9 ){
            printf("Dang khen, ban da dat hoc luc gioi\n");
            system("pause");
        }
        else if(dtb >= 6.5 && dtb < 8){
            printf("Co co gang, ban da dat hoc luc kha\n");
            system("pause");
        }
        else if(dtb >=5 && dtb < 6.5){
            printf("Dang tiec, ban da dat hoc luc trung binh\n");
            system("pause");
        }
        else{
            printf("Ca the vuot troi, chuc mung ban dat duoc hoc luc yeu\n");
            system("pause");
        }
    }
    else{
        printf("Gia tri khong hop le. Xin vui long nhap lai!!!");
        system("cls");
        goto error;
    }
}
void Gptrbacnhat(){
    float a,b;
    printf("Phương trình bậc nhất ax + b = 0. Với:\n");
    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    if (a==0){
        if(b==0){
            printf("Phương trình có vô số nghiệm");
        }
        else if(b!=0){
            printf("Phương trình vô nghiệm");
        }
    }
    else{
        printf("Phương trình có một nghiệm: %.2f",-b/a);
    }
}
void Gptrbachai(){
    float a,b,c,delta;
    printf("Phương trình bậc hai ax2 + bx + c = 0. Với:\n");
    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("c = ");
    scanf("%f",&c);
    if(a == 0){
        if (b==0){
            if(c==0){
            printf("Phương trình có vô số nghiệm");
            }
            else if(c!=0){
            printf("Phương trình vô nghiệm");
            }
    }
    else{
        printf("Phương trình có một nghiệm: %.2f",-c/b);
    }
    }
    else {
        delta = pow(b,2) - 4*a*c;
        if(delta < 0){
            printf("Phương trình vô nghiệm");
        }
        else if (delta == 0){

            printf("Phuong trinh co ngiem kep x = %.2f",-b*(2*a));
        }
        else{
            printf("Phuong trinh co 2 nghiem rieng biet\n");
            printf("X1 = %.2f \n",(-b + sqrt(delta))/(2*a));
            printf("X2 = %.2f \n",(-b - sqrt(delta))/(2*a));
        }
        
    }
}
void Ttiendien(){
    int tien;
    printf("Nhap vao số kWh su dung: ");
    scanf("%d",&tien);
        if (0 <= tien >= 50)
        {
            printf("Gia ban dien la: %d dong",tien*1678);
        }
        else if (51 <= tien <= 100)
        {
            printf("Gia ban dien la: %d dong",tien*1734);
        }
        else if (101 <= tien <= 200)
        {
            printf("Gia ban dien la: %d dong",tien*2014);
        }
        else if (201 <= tien <= 300)
        {
            printf("Gia ban dien la: %d dong",tien*2536);
        }
        else if (301 <= tien <= 400)
        {
            printf("Gia ban dien la: %d dong",tien*2834);
        }
        else if (401 <= tien)
        {
            printf("Gia ban dien la: %d dong",tien*2927);
        }    
}
int main(){
    int nhap;
    printf("\tMenu\n");
    printf("Chuc nang cua chuong trinh: ");
    printf("\n1. Tinh hoc luc.");
    printf("\n2. Giai phuong trinh bac nhat.");
    printf("\n3. Giai phuong trinh bac hai.");
    printf("\n4. Tinh tien dien.");
    printf("\n0. Thoat chuong trinh.");
    printf("\nChon chuc nang:");
    scanf("%d",&nhap);
    switch(nhap){
        case 1:
        char lc;
        do{
            system("cls"); 
            Thocluc(); //Goi chuong trinh con
        } while(lc == 'y' || lc == 'Y');
        break;
        case 2:
        system("cls");
        Gptrbacnhat();//Goi chuong trinh con
        break;
        case 3:
        system("cls");
        Gptrbachai();//Goi chuong trinh con
        case 4:
        system("cls");
        Ttiendien();//Goi chuong trinh con
        break;
        case 0:
        printf("Thoat chuong trinh!");
        exit(0); //Thoat chuong trinh
        default:
        printf("Chuong trinh loi");
        break;
    }
}