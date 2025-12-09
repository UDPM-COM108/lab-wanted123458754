#include <stdio.h> /*Khai bao thu vien*/
int main(){ 	/*Ham main*/
// printf("Hello world!!"); /* In ra man hinh dong Hello world*/
	int a,b; /*Khai bao du lieu*/
	printf("Nhap a va b: ");
	scanf("%d %d", &a, &b); /* Lay du lieu tu ban phim */
	printf("Tong cua chuong trinh: %d",a+b);
    printf("\nHieu cua chuong trinh: %d",a-b);
	printf("\nBan ten la:");
	char name[10];
	scanf("%s", &name);
	printf("Toi ten la %s",name);
}