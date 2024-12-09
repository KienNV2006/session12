#include <stdio.h>
int summa(int a, int b){
	int sum=a+b;
	printf("Tong cua %d va %d la %d",a,b,sum);
	return sum;
}
int main(){
	summa(6,5);
	return 0;
}