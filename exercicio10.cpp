#include <stdio.h>
#include<math.h>

int main()
{

float radianos1,radianos2,radianos3;
int graus,minutos,segundos;
int i=0;
float pi=3.14159;



printf("Digite o valor do angulo em graus: ");
scanf("%i",&graus);
printf("Digite o valor do angulo em minutos: ");
scanf("%i",&minutos);
printf("Digite o valor do angulo em segundos: ");
scanf("%i",&segundos);

radianos1=(((segundos/60)/60)*pi)/180;
radianos2=((minutos/60)*pi)/180;
radianos3=(graus*pi)/180;

printf("\nO valor do angulo %i em graus para radianos fica: %f \n",segundos,radianos1);
printf("\nO valor do angulo %i em graus para radianos fica: %f \n",minutos,radianos2);
printf("\nO valor do angulo %i em graus para radianos fica: %f \n",graus,radianos3);


return 0;
}
