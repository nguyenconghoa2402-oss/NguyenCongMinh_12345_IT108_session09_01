#include <stdio.h>
int main(){
    int n, x, found = 0;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Gia tri %d xuat hien tai vi tri %d.\n", x, i);
            found = 1;
        }
    }

    if (!found) {
        printf("Gia tri %d khong xuat hien trong mang.\n", x);
    }

    return 0;
}

