// Codigo do Jogo > codigo/main.c
echo // Codigo do Jogo
 
#include <stdio.h>
    int main(void){

        int suaEsc, Cont = 0;

        while(Cont == 0){
            printf("digite o numero da cor do seu slime?: slime vermelho(1), slime verde(2), slime azul(3)\n");
            scanf("%d", &suaEsc);
        
        if(suaEsc == 1){
            printf("Voce escolheu o Slime vermelho");
            Cont++;
        } else if (suaEsc == 2){
            printf("Voce escolheu o Slime verde");
            Cont++;
        }else if (suaEsc == 3){
            printf("Voce escolheu o Slime azul");
            Cont++;
        }else{
            printf("Numero invalido tente novamente\n");
        }    
        }

    return 0;
}// Função de iniciar o jogo
