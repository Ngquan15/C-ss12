#include<stdio.h>

void mang(int arr[], int size) {
    for (int i = 0; i < size; i++) {
    }
}

int main(){
    int n;
    
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    return 0;
}
