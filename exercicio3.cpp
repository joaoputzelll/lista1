#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
main()
{
 int t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;

 printf("Informe a primeira temperatura em graus Fahrenheit: ");
 scanf("%d", &t1);

 printf("Informe a segunda temperatura em graus Fahrenheit: ");
 scanf("%d", &t2);

 printf("Informe a terceira temperatura em graus Fahrenheit: ");
 scanf("%d", &t3);

 printf("Informe a quarta temperatura em graus Fahrenheit: ");
 scanf("%d", &t4);

 printf("Informe a quinta temperatura em graus Fahrenheit: ");
 scanf("%d", &t5);

t6 = (t1-32)/1.8;
t7 = (t2-32)/1.8;
t8 = (t3-32)/1.8;
t9 = (t4-32)/1.8;
t10 = (t5-32)/1.8;

printf("\nTEMPERATURA EM GRAUS FAHRENHEIT = %d %d %d %d %d\n", t1, t2, t3, t4, t5);
printf("TEMPERATURA EM GRAUS CELCIUS = %d %d %d %d %d\n\n", t6, t7, t8, t9, t10);

 system("PAUSE");
 return 0;
}














