#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float a;

    printf("Informe o valor de n: ");
    scanf("%d", &n);

    if(n !=0) {
        for(int i = 1; i <= n; i++) {
              a += (float)1/i;
        }
        printf("A = %f", a);
    }
    return 0;


}





