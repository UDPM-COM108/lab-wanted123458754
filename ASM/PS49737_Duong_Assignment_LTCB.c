#include <stdio.h>
#include <stdlib.h>  
#include <math.h>  
#include <string.h>
char luaChon[2];
int menu(int a){
	printf("-----------------------------------------------\n");
	printf("|       Welcome to LE BA DUC DUONG'S MENU     |\n");
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
	printf("| 11.Chuong trinh                             |\n");
	printf("| 0.Thoat chuong trinh                        |\n");
	printf("|---------------------------------------------|\n");
	printf("Hay chon chuc nang ban can(0->11):");
	scanf("%d",&a);
	return a;
}
void KtrSoNguyen(){
	do{
		printf("Chuong trinh kiem tra so nguyen, so nguyen to va so chinh phuong\n");
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
			printf("\n\n\nBan co muon thoat chuong trinh khong?(y/n):");
			scanf("%s",&luaChon);
			if(strlwr(strstr(luaChon,"y"))){
				printf("\n");
				break;
			}
			else if(strlwr(strstr(luaChon,"n"))){
				printf("\n");
				continue;
			}
			else{
				printf("Lua chon khong hop le. Vui long chon lai.\n\n");
			}

		}while(1);
	}
	void UocSoChungVaBoiSoChung(){
		do{
			printf("Chuong trinh tim Uoc so chung lon nhat va Boi so chung nho nhat cua 2 so nguyen\n");
			int x,y;
			printf("\nNhap so nguyen x:");
			scanf("%d",&x);
			printf("Nhap so nguyen y:");
			scanf("%d",&y);
			if(y==0){
				printf("Uoc chung lon nhat la: %d",x);
			}
			else if (x == 0 && y == 0) {
            printf("Khong the tim UCLN/BCNN cho ca hai so 0.\n");
			}
			else if (x%y==0)
			{
				printf("Uoc chung lon nhat la: %d",y);
			}
			else{
				printf("Uoc chung lon nhat la: %d",x%y);
			}
		}while(1);
	}
int main(){
	int a;
	do{
		switch(menu(a)){
		case 1:
			KtrSoNguyen();
			continue;
		case 2:
			UocSoChungVaBoiSoChung();
			continue;
		case 3:
			printf("Chuong trinh tinh tien cho quan Karaoke");
			break;
		case 4:
			printf("Chuong trinh tinh tien dien");
			break;
		case 5:
			printf("Chuc nang doi tien");
			break;
		case 6:
			printf("Chuong trinh tinh lai suat vay ngan hang vay tra gop");
			break;
		case 7:
			printf("Chuong trinh vay tien mua xe");
			break;
		case 8:
			printf("Sap xep thong tin sinh vien");
			break;
		case 9:
			printf("Game FPOLY-LOTT");
			break;
		case 10:
			printf("Chuong trinh tinh toan phan so");
			break;
		case 11:
			printf("Chuong trinh tinh toan phan so");
			break;
		case 0:
		exit(0);
		default:
			printf("Chuong trinh khong ton tai!!!!");
			break;
	}
	}while(1);
	return 0;
}