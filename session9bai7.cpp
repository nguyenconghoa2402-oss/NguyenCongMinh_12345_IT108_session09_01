#include <stdio.h>
int main(){
    int n;
	
	printf("nhap so luong phan tu cua mang:");
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i=0; i<n; i++){
		printf("nhap phan tu thu %d:", i);
		scanf("%d", &arr[i]);
		 
	}
	
	
	printf("mang sau khi dao nguoc:\n");
	for(int i=0; i<0; i++){
		printf("%d", arr[i]); 
	} 
	
	return 0; 
	 
}

