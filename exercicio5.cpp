#include <stdio.h>

int main()
{

    float DOM,SEG,TER,QUA,QUI,SEX,SAB;
    float mm1,mm2,mm3,mm4,mm5,mm6,mm7;


    printf("Digite em polegadas quantidade de chuva que caiu no DOMINGO: ");
    scanf("%f",&DOM);
    printf("Digite em polegadas quantidade de chuva que caiu na SEGUNDA-FEIRA: ");
    scanf("%f",&SEG);
    printf("Digite em polegadas quantidade de chuva que caiu na TERCA-FEIRA: ");
    scanf("%f",&TER);
    printf("Digite em polegadas quantidade de chuva que caiu na QUARTA-FEIRA: ");
    scanf("%f",&QUA);
    printf("Digite em polegadas quantidade de chuva que caiu na QUINTA-FEIRA: ");
    scanf("%f",&QUI);
    printf("Digite em polegadas quantidade de chuva que caiu na SEXTA-FEIRA: ");
    scanf("%f",&SEX);
    printf("Digite em polegadas quantidade de chuva que caiu no SÁBADO: ");
    scanf("%f",&SAB);



    mm1=DOM*25.4;
    mm2=SEG*25.4;
    mm3=TER*25.4;
    mm4=QUA*25.4;
    mm5=QUI*25.4;
    mm6=SEX*25.4;
    mm7=SAB*25.4;



    printf("\nA quantidade diaria de chuva em milimetros no DOMINGO foi de:%f mm\n",mm1);
    printf("A quantidade diaria de chuva em milimetros no SEGUNDA-FEIRA foi de:%f mm\n",mm2);
    printf("A quantidade diaria de chuva em milimetros no TERCA-FEIRA foi de:%f mm\n",mm3);
    printf("A quantidade diaria de chuva em milimetros no QUARTA-FEIRA foi de:%f mm\n",mm4);
    printf("A quantidade diaria de chuva em milimetros no QUINTA-FEIRA foi de:%f mm\n",mm5);
    printf("A quantidade diaria de chuva em milimetros no SEXTA-FEIRA foi de:%f mm\n",mm6);
    printf("A quantidade diaria de chuva em milimetros no SÁBADO foi de:%f mm\n",mm7);


    return 0; }
