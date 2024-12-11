#include<stdio.h>

int sum(int x){
	int n = 0;
	for(int i = 1; i <= x; i ++){
		if( x % i == 0 ){
		 n++;
		}
	}
	return n;
}

int main(){
	
	int x;
	
	printf("Vui long nhap gia tri can kiem tra :");
	scanf("%d", &x);
	
	int n = sum(x);
	
	if( n == 2){
		printf("Day la so nguyen to");
	}else{
		printf("Day khong phai la so nguyen to");
	}
	
	return 0;
}

