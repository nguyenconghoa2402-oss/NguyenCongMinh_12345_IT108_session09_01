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
	int countMax = 0;
	int countElement;
	int positionMax;
	for(int i=0;i<n;i++){
		countElement = 1; //Tai vi tri i thi phan tu arr[i] xuat hien 1 lan
		for(int j=i+1;j<n;j++){
			if(arr[j]==arr[i]){
				countElement++;
			}
		}
		if(countMax<countElement){
			countMax = countElement;
			positionMax = i;
		}
	}
	printf("\nPhan tu co so lan xuat hien nhieu nhat la: %d",arr[positionMax]);

}

