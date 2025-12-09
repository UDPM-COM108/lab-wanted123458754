#include <stdio.h>
#include <math.h>
void trungbinhtong(){
    int n,i,dem = 0;
    float tong = 0,tb;
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i < n;i++){
        printf("Nhap vao gia tri cua mang [%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n;i++){
        if(arr[i]%3 == 0){
            tong += arr[i];
            dem++;
        }
    }
    tb = tong/dem;
    printf("%f",tb);
}
void lonnhatvanhonhat(){
    int n;
    printf("Nhap vao vao so phan tu:");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        printf("Nhap vao du lieu tai mang[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    int max = arr[0],min = arr[0];
    for(i=0;i<n;i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("Gia tri lon nhat trong mang la:%d",max);
    printf("\nGia tri nho nhat trong mang la:%d",min);
}
void bubblesort(){
    int n;
    printf("Nhap vao vao so phan tu:");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        printf("Nhap vao du lieu tai mang[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
void binhphuongmang(){
    int n,m;
    printf("Nhap vao so cot trong mang:");
    scanf("%d",&n);
    printf("Nhap vao so dong trong mang:");
    scanf("%d",&m);
    int arr[n][m];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Nhap vao du lieu tai mang[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nMang sau khi binh phuong:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",arr[i][j]*arr[i][j]);
        }
        printf("\n");
    }
}
int main(){//
    trungbinhtong();
    lonnhatvanhonhat();
    bubblesort();
    binhphuongmang();
}