/*
Задание 2. Вывести сначала чётные элементы массива, а затем нечётные
*/
#include <stdio.h>

int main() {
    int k; scanf("%d", &k); int a[k];
    for (int i = 0; i < k; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) printf("%d ", a[i]);
    }
    for (int i = 0; i < k; i++) {
        if (a[i] % 2 == 1) printf("%d ", a[i]);
    }
}