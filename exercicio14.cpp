#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    float p, s = 0;
    float divisor= 1;
    int contador = 1;

    while(contador <= 40) {
        if(contador % 2 == 0)
            s = s - 1 /pow(divisor, 3);
        else
            s = s + 1 /pow(divisor, 3);
        divisor += 2;
        contador++;
    }
   p = cbrt(s * 32);

   printf("%.4f", p);



}
