#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

int a, b, c;

printf("Digite o primeiro lado do triangulo: ");
scanf("%i", &a);
printf("Digite o segundo lado do triangulo: ");
scanf("%i", &b);
printf("Digite o terceiro lado do triangulo: ");
scanf("%i", &c);

if (a<b+c and b<a+c and c<a+b){
    if (a*a==b*b+c*c){
        printf("O triangulo eh retangulo com hipotenusa %i", a);
    }
        if (b*b==a*a+c*c){
            printf("O triangulo eh retangulo com hipotenusa %i", b);
        }
            if (c*c==a*a+b*b){
                printf("O triangulo eh retangulo com hipotenusa %i", c);
        }
                if (a*a!=b*b+c*c and b*b!=a*a+c*c and c*c!=a*a+b*b) {
                    printf("Nao eh um triangulo retangulo");
                }
}

else {
    printf("Os valores nao formam um triangulo! Digite-os novamente!");
}
}
