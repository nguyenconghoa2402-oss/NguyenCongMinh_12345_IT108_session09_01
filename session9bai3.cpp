#include <stdio.h>
int main(){
    int n;
    int arr[n]; 
    
	printf("nhap so phan tu cua mang:");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		printf("nhap phan tu thu %d:");
		scanf("%d", &arr[i]); 
	} 
	
	printf("cac phan tu trong mang la:");
	scanf("%d\n", arr[n]); 
	
	return 0; 
}


 

