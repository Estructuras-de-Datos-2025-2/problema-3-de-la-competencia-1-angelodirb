#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;

    scanf("%d", &n);

  
    int *enteros = (int *)malloc(n * sizeof(int));
    

    for (int i = 0; i < n; i++) {
        scanf("%d", &enteros[i]);
    }

 
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (enteros[i] == enteros[j]) {
                
                for (int k = j; k < n - 1; k++) {
                    enteros[k] = enteros[k + 1];
                }
                n--;
                j--; 
                enteros = (int *)realloc(enteros, n * sizeof(int));
                
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", enteros[i]);
    }
    printf("\n");


    free(enteros);

    return 0;
}
