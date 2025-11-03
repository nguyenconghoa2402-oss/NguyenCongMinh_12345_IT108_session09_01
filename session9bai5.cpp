#include <stdio.h>
int main(){
    int n;
	
	printf("nhap so phan tu cua mang:");
	scanf("%d", &n);
	
	int arr[n], evennuMber, oddnuMber;
	
	for(int i=0; i<n; i++){
		printf("nhap phan tu thu %d:");
		scanf("%d", &arr[i]);
		
		if(arr[i] % 2 == 0){
		evennuMber = arr[i]; 
		}else{
			oddnuMber = arr[i]; 
		} 
	} 
	
	printf("so chan: %d\n", evennuMber);
	printf("danh sach so chan:"); 
	for(int i = 0;i < evennuMber; i++){
		printf("%d", arr[i]); 
	}
	
	printf("so le: %d\n", oddnuMber);
	printf("danh sach so le:");
	for(int i = 0; i < oddnuMber;i++){
		printf("%d", arr[i]); 
	} 
	
	return 0;
	 
	
}



