#include <stdio.h>
void perfectNum(int a){
    int sum = 0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            sum+=i;
        }
    }
    if(sum==a){
        printf("dung\n");
    }else{
        printf("sai\n");
    }
}
int main() {
    int num1,num2;
    printf("hay nhap mot so bat ki : ");
    scanf("%d",&num1);
    perfectNum(num1);
    printf("hay nhap so tiep theo : ");
    scanf("%d",&num2);
    perfectNum(num2);
    return 0;
}
