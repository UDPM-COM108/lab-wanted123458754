#include <stdio.h>
int main(){
    // float dtb;
    // printf("Nhap diem trung binh: ");
    // scanf("%f",&dtb);
    // if(dtb >= 9) 
    //     printf("Xuat sac");
    // else if(dtb >= 8) 
    //     printf("Gioi");
    // else if(dtb >= 7) 
    //     printf("Kha");
    // else if(dtb >= 5) 
    //     printf("Trung binh");
    // else 
    //     printf("Yeu!!!");
    char dapAn;
    printf("Viet Nam co bao nhieu dan toc anh em:\n");
    printf("a. 52\n");
    printf("a. 53\n");
    printf("a. 54\n");
    printf("a. 55\n");
    printf("Xin moi nhap vao dap an(a,b,c,d): ");
    scanf("%c",&dapAn);
    switch (dapAn)
    {
    case 'a':
        printf("Ban da chon sai\n");
        break;
    case 'b':
        printf("Ban da chon sai\n");
        break;
    case 'c':
        printf("Ban da chon dung\n");
        break;
    case 'd':
        printf("Ban da chon sai\n");
        break; 
    default:
        printf("Dap an khong ton tai");
        break;
    }
}