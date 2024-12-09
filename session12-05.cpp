#include <stdio.h>
int primeNum(int n){
	if(n<2){
		return 0;
	}else{
		for(int i=2; i*i<=n; i++){
			if(n%i==0){
				return 0;
			}
		}
	}
	return 1;
	
}
int main(){
	int num_1, num_2;
	printf("Moi ban nhap so thu nhat: ");
	scanf("%d", &num_1);
	if(primeNum(num_1)==1){
		printf("%d la so nguyen to\n", num_1);
	}else{
		printf("%d khong phai la so nguyen to\n", num_1);
	}
	printf("Moi ban nhap so thu hai: ");
	scanf("%d", &num_2);
	if(primeNum(num_2)==1){
		printf("%d la so nguyen to\n", num_2);
	}else{
		printf("%d khong phai la so nguyen to\n", num_2);
	}
	return 0;
}