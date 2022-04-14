#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){

int reg, h, o;
float r, s, cs, i;

printf("insira o salario para carga horaria de 40 horas semanais: ");
scanf("%f", &s);
printf("\n");

for (o=1; o<=100; o++){
    printf("Insira o registro do funcionario: ");
    scanf("%i", &reg);
    printf("insira a quantidade de horas trabalhadas na semana: ");
    scanf("%i", &h);
    if (h <= 40) {
        cs = s/h;
    }
        else{
            i = h - 40;
            cs = (s + (i*1.5))/h;
        }

printf("O funcionario %i trabalhou %i horas na semana, entao sua remuneracao por hora foi de %f.", reg, h, cs);
printf("\n");

}
}
