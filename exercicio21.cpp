#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fat(int n)
{
 if (n)
 return n*fat(n-1);
 else return 1;
}

int main()
{
float xs=-0.000001;
double xd=xs;
int i,n=3;

printf("\nn=%d, x=%f", n,xs);











}
