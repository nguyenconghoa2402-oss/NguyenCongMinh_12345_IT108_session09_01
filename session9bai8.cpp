#include <stdio.h>
int main(){
    const int max = 100;
	int arr[max];
	int n;
	
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",&n);
		if(n<1 || n>max){
			printf("Loi - Nhap lai so phan tu cua mang \n");
		}
	}while(n<1 || n>max);
	
	for(int i=0;i<n;i++){
		printf("Nhap phan tu a[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nMang vua nhap: \n");
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	
	int sumIsPrice = 0;
	int flag;
	for(int i=0;i<n;i++){
		flag = 1;
		for(int j=2;j<=sqrt(arr[i]);j++){
			if(arr[i]%j==0){
				flag = 0;
				break;
			}
		}
		if(flag==1 && arr[i]>1){
			sumIsPrice = sumIsPrice + arr[i];
		}
	}
	if(sumIsPrice>0){
		printf("\nTong cac phan tu la so nguyen to cua mang la: %d",sumIsPrice);
		printf("\nVi tri cac phan tu la so nguyen to: ");
		for(int i=0;i<n;i++){
		flag = 1;
		for(int j=2;j<=sqrt(arr[i]);j++){
			if(arr[i]%j==0){
				flag = 0;
				break;
			}
		}
		if(flag==1 && arr[i]>1){
			printf("%d  ",i);
		}
	}
	}else{
		printf("\nKhong co phan tu nao la so nguyen to trong mang");
	}
}

