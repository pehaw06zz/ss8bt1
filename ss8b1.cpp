#include<stdio.h>
int main(){
	int array[]={5,7,9,10,23};
	int n=sizeof(array)/sizeof(array[0]);
	printf(" mang tu cuoi ve dau: \n");
	for(int i=n-1;i>=0;i--){
		printf("%d ", array[i]);
	}
	return 0;
}
