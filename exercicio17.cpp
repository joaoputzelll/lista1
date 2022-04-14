#include<stdio.h>

int main () {
    int n;
    printf("Digite o número desejado = ");
    scanf("%d", &n);

    for(int i = 8; i <= n; i++) {
        printf("%d, ", i+2, i*2);
    }
    return 0;




}
