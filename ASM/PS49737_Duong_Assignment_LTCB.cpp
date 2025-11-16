#include <stdio.h>
#include <stdlib.h>  
#include <math.h>  
#include <string.h>
char luaChon[2];
void KtrSoNguyen(){
	do{
		int a;
			int t;
			printf("Kiem tra so nguyen");
			printf("\nVui long nhap 1 so nguyen x can kiem tra:");
			scanf("%d",&a);
			if(a == (int)a){
			printf("\nDay la mot so nguyen.");
			}
			else{
			printf("\nDay khong phai la so nguyen.");
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
			printf("\nBan co muon thoat chuong trinh khong?(y/n):");
			scanf("%s",&luaChon);

		}while(strlwr(strstr(luaChon,"n")));
		return;
	}
int main(){
	fflush(stdin);
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
	int a;
	scanf("%d",&a);
	switch(a){
		case 1:
			KtrSoNguyen();
			break;
		case 2:
			printf("Chuong trinh tim Uoc so chung va Boi so chung cua 2 so");
			break;
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
		break;
		default:
			system("cls");
			printf("Chuong trinh khong ton tai!!!!");
			break;
	}
	return 0;
}