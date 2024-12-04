#include<stdio.h>
int main(){
 	int n,m;
 	printf("nhap n");
 	scanf("%d",&n);
 	printf("nhap m");
 	scanf("%d",&m);
 	if(n > m){
 		printf("gia tri n phai nho hon m");
	 }
  	int sum = (m + n) * (m - n + 1) / 2;
	 
	printf("tong la %d",sum);	
	return 0;
}

