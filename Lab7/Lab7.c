#include <stdio.h>
#include <string.h>
int main(){
    char chuoi[100];//Bai 1
    int i=0,p=0,m=0;
    printf("Nhap vao chuoi: ");
    gets(chuoi);
    while(chuoi[i++]!= '\0'){
        if(chuoi[i] == 'a' || chuoi[i] == 'e' || chuoi[i] == 'u' || chuoi[i] =='o' || chuoi[i] == 'i')
            m++;
        else
            p++;
    }
    printf("Chuoi '%s' co chua %d nguyen am va %d phu am",chuoi,m,p);
    char useSys[] = "admin";//Bai 2
    int passSys = 12345;
    char user[100];
    int pass;
    printf("Nhap vao ten dang nhap cua ban:");
    gets(user);
    printf("Nhap mat khau cua ban:");
    scanf("%d",&pass);
    if(strstr(useSys,user) != NULL && pass == passSys){
        printf("Dang nhap thanh cong");
    }
    else{
        printf("Dang nhap that bai");
    }
    char s[10]="ACCBDE";//Bai 3
    int count[256] = {0};
    for(int i = 0; i < strlen(s); i++){
        count[s[i]]++;
    }
    for(int i = 0; i < strlen(s); i++){
        if(count[s[i]] > 1){
            printf("%c xuat hien qua 2 lan trong mang.", s[i]);
            count[s[i]] = 0;
        }
    }
}