#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

float v, cf, pd, i;

printf ("Insira o valor do custo de fabrica do carro: ");
scanf ("%f", &cf);

pd = cf*0.12;
i = cf*0.45;
v = cf + pd + i;

printf ("\nO valor pago pelo consumidor eh R$ %f", v);

}
