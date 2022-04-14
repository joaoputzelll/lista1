#include<stdio.h>

int main () {
    int preco_art1, percentual1, calculo_percent1, desconto1, preco_art2, percentual2, calculo_percent2, desconto2, preco_art3, percentual3, calculo_percent3, desconto3;
    char art1, art2, art3;

printf(" Artigo = ");
scanf("%c", &art1);
printf("\nPreco = ");
scanf("%preco_art1", &preco_art1);
printf ("\n\nPercentual | Desconto = ");
scanf("%percentual1", &percentual1);
calculo_percent1 = (100-percentual1) / 100;
desconto1 = calculo_percent1 * preco_art1;
printf("\n\n\nPreco com desconto = ", desconto1);
printf("");

printf("\nArtigo = ");
scanf("%art2", &art2);
printf("\n Preco = ");
scanf("%preco_art2", &preco_art2);
printf("\n\nPercentual | Desconto ");
scanf("%percentual2", &percentual2);
calculo_percent2 = (100-percentual2) / 100;
desconto2 = calculo_percent2 * preco_art2;
printf("\n\n\nPreço com desconto = ", desconto2);
printf("");

printf("Artigo = ");
scanf("%art3", &art3);
printf("\n Preco = ");
scanf("%preco_art3", &preco_art3);
printf ("\n\nPercentual | Desconto ");
scanf("%percentual3", &percentual3);
calculo_percent3 = (100-percentual3) / 100;
desconto3 = calculo_percent3 * preco_art3;
printf("\n\n\nPreço com desconto = desconto3");
printf(""); }











