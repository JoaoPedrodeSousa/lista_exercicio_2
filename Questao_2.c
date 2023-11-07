#include <stdio.h>
#include <string.h>

double definirForcaJogador(char nomeJogador[], char posicao, int forca){
    double forcaTime = 0.0;
    
    if (posicao == 'G') {
        forcaTime = 8.0 * forca;
    } 
    
    else if (posicao == 'L') {
        forcaTime = 10.0 * forca;
    } 

    else if (posicao == 'Z'){
        forcaTime = 5 * forca;
    }

    else if(posicao == 'V'){
        forcaTime = 8 * forca;
    }

    else if (posicao == 'M') {
        forcaTime = 11.0 * forca;
    } 
    
    else if (posicao == 'A') {
        forcaTime = 12.0 * forca;
    }
    return forcaTime;
}


int main() {
    char nomeTime1[31], nomeTime2[31];
    char nomeJogador[31], posicao;
    double resultadoTime1, resultadoTime2;
    int forca;

    double forcaTime = 0.0;
    scanf("%30s", nomeTime1);

    for (int i = 0; i < 11; i++) {
        scanf("%30s;%c;%d\n", nomeJogador, &posicao, &forca);
        forcaTime += definirForcaJogador(nomeJogador, posicao, forca);
    }

    resultadoTime1 = forcaTime / 100;

    forcaTime = 0.0;
    scanf("%30s", nomeTime2);

    for (int i = 0; i < 11; i++) {
        scanf("%30s;%c;%d\n", nomeJogador, &posicao, &forca);
        forcaTime += definirForcaJogador(nomeJogador, posicao, forca);
    }

    resultadoTime2 = forcaTime / 100;

    if (resultadoTime1 > resultadoTime2) {
        printf("%s: %.2lf de forca\n", nomeTime1,resultadoTime1);
        printf("%s: %.2lf de forca\n", nomeTime2,resultadoTime2);
        printf("%s eh mais forte\n", nomeTime1);
    } 
    
    else if (resultadoTime2 > resultadoTime1) {
        printf("%s: %.2lf de forca\n", nomeTime2,resultadoTime2);
        printf("%s: %.2lf de forca\n", nomeTime1,resultadoTime1);
        printf("%s eh mais forte\n", nomeTime2);
    } 
    

    return 0;
}
