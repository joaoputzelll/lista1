#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

float p1_mar, p1_abr, p2_mar, p2_abr, t1, t2;

printf("Preco da primeira mercadoria em marco: ");
scanf("%f", &p1_mar);

printf("Preco da primeira mercadoria em abril: ");
scanf("%f", &p1_abr);

printf("Preco da segunda mercadoria em marco: ");
scanf("%f", &p2_mar);

printf("Preco da segunda mercadoria em abril: ");
scanf("%f", &p2_abr);

t1 = ((p1_abr - p1_mar)/p1_mar)*100;
t2 = ((p2_abr - p2_mar)/p2_mar)*100;

if (t1 < 0){
    t1 = t1*(-1);
}
if (t2 < 0){
    t2 = t2*(-1);
}

printf("\nA taxa de inflacao da primera e segunda mercadoria, respectivamente, em porcentagem eh %f e %f", t1, t2);


}
