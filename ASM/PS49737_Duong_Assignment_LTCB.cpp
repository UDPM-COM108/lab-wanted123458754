#include <stdio.h>
#include <stdlib.h>  
#include <math.h>  
#include <string.h>
void KiemTraSoNguyen(){
		char out[1];
		int a;
		int t;
		printf("Kiem tra so nguyen");
		printf("\nVui long nhap 1 so nguyen x can kiem tra:");
		scanf("%d",&a);
		if(a == (int)a){
		printf("Day la mot so nguyen.");
		}
		else{
		printf("Day khong phai la so nguyen.");
		}
		if(a > 1){
		int check = 0;
		for(int i = 2; i < a; i++){
			if(a%i==0){
				check = 1;
				break;
			}
		}
		if(check == 0){
			printf("\nDay la so nguyen to.");
		}
		else{
			printf("\nDay khong phai la so nguyen to.");
		}
		}
		else{
		printf("\nDay khong phai so nguyen to.");
		}
		if(a >= 0){
		int CP;
		CP = sqrt(a);
		CP*=CP;
		if(sqrt(a) >= 0) printf("\nDay la so chinh phuong");
		}
		else{
		printf("\nDay khong phai so chinh phuong");
		}
		printf("Ban co muon thoat chuong trinh khong?(y/n):");
		scanf("%c",&out);
		if(strlwr(out) == "y") {
			t = 1;
		}
		else {
			t = 0;
		}
}
int main(){
	printf("----------------------o0o----------------------\n");
	printf("|               Menu chuong trinh             |\n");
	printf("| 1.Kiem tra so nguyen                        |\n");
	printf("| 2.Tim Uoc so chung va boi so chung cua 2 so |\n");
	printf("| 3.Chuong trinh tinh tien cho quan Karaoke   |\n");
	printf("| 4.Tinh tien dien                            |\n");
	printf("| 5.Chuc nang doi tien                        |\n");
	printf("| 6.Tinh lai suat vay ngan hang vay tra gop   |\n");
	printf("| 7.Chuong trinh vay tien mua xe              |\n");
	printf("| 8.Sap xep thong tin sinh vien               |\n");
	printf("| 9.Game FPOLY-LOTT                           |\n");
	printf("| 10.Chuong trinh tinh toan phan so           |\n");
	printf("|---------------------------------------------|\n");
	printf("Hay chon chuc nang ban can(1->10):");
	int a;
	scanf("%d",&a);
	switch (a){
		case 1:
			system("cls");
			KiemTraSoNguyen();
			break;
		case 2:
			system("cls");
			break;
		case 3:
			system("cls");
			break;
		case 4:
			system("cls");
			break;
		case 5:
			system("cls");
			break;
		case 6:
			system("cls");
			break;
		case 7:
			system("cls");
			break;
		case 8:
			system("cls");
			break;
		case 9:
			system("cls");
			break;
		case 10:
			system("cls");
			break;
		default:
			system("cls");
			printf("Chuong trinh khong ton tai");
			break;
	}
	return 0;
}