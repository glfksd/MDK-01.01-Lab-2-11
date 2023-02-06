/*
Задание 1. Палиндром.
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int j=0; j<=(n/2); j++){
       if (arr[j] != arr[n-1-j]){
          printf("NO");
          return 0;
       }
    }
    printf("YES");
    return 0;
}