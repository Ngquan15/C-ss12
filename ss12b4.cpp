#include<stdio.h>
	int FindMaxVaLue(int a[],int size){
		int max = a[0];
		for(int i = 0; i < size; i++){
			if(a[i] > max){
				max = a[i];
			}
		}
		return max;
		
}
int main(){
	int numbers1[] = {1,2,3,4,5};
	int numbers2[] = {6,7,8,9,10};
	int size1 = sizeof(numbers1)/sizeof(int);
	int size2 = sizeof(numbers2)/sizeof(int);
	printf("Phan tu lon nhat trong mang la %d\n",FindMaxVaLue(numbers1,size1));
	printf("Phan tu lon nhat trong mang la %d\n",FindMaxVaLue(numbers2,size2));
	return 0;
}
