#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main () {
//    char frase [100];
    int pos, qtde, tam, fim;
    string frase1;

    printf("\n Entre com a frase =");
//    scanf("%(\n)", frase);
//    gets(frase);
    getline(cin, frase1);
    cout << " FRASE LIDA = "<< frase1 << endl;
//    printf(" FRASE LIDA = %s", frase1);

//    tam = strlen(frase);
    tam = frase1.length();
//     frase1 = frase;
//     string fra = (frase);

     cout << "\n Nova OBJETO = "<< frase1<<" QTDE CARACTERES ="<<tam << endl;
//     fra = frase;
     fim = tam -1;
     while(frase1.substr(fim, 1)== "") {
        fim = fim -1;
     };
     qtde = 0;
     pos = 0;
     while(pos <= fim -3) {
        if(frase1.substr(pos,4)==" de ") {
            qtde ++;
            pos = pos + 3;
        }
        else{
            pos = pos + 1;
        }
        printf("\n A quantidade de DE's que aparecem eh = %d \n", qtde);
     }




}
