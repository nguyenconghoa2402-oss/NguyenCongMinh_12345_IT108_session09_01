#include <stdio.h>
int main(){
    int n;
	 
	printf("nhap so phan tu cua mang:");
	scanf("%d", &n);
	
	int arr[n];
	int s = 0;
	 
	for(int i=0; i<n;i++){
		printf("nhap phan tu thu %d:");
		scanf("%d", &arr[i]);
		s += arr[i]; 
	}
	
	printf("gia tri trung binh cua cac phan tu la: %.2f\n ", s);
	 
	return 0; 
}

