#include <stdio.h>

int perfectNum(int n){
	if(n<=0){
		return 0;
	}
	int sum=0;
	for(int i=1; i<n; i++){
		if(n%i==0){
			sum+=i;
		}
	}
	return sum==n;
}
int main(){
	int num1, num2;
	printf("Nhap so thu nhat: ");
	scanf("%d", &num1);
	if(perfectNum(num1)){
		printf("Day la so hoan hao\n");
	}else{
		printf("Day khong phai la so hoan hao\n ");
	}
	printf("Nhap so thu hai: ");
	scanf("%d", &num2);
	if(perfectNum(num2)){
		printf("Day la so hoan hao\n");
	}else{
		printf("Day khong phai la so hoan hao\n");
	}
	return 0;
}