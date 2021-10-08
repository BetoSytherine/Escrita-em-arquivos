#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *pera;
    char fruta[20];                                // a de append - adicionar
    pera = fopen ("documento de teste.txt", "a"); //(w)rite - escrever

    system("pause");

    if(pera){
    printf("infomre uma fruta ou presione 0 para sair: \n");
    fgets(fruta, 20, stdin);// entrada padarao, Cada uma destas constantes pode ser utilizada como um ponteiro para FILE, para acessar os periféricos associados a eles. Desta maneira, pode-se, por exemplo, usar para efetuar a leitura de um caracter a partir do teclado : ch =getc(stdin);

    while(fruta[0] != '0'){

        fputs(fruta, pera); // uma string e um ponteiro
        printf("infomre uma fruta ou presione 0 para sair: \n");
    fgets(fruta, 20, stdin); // serve para fazer a leitura do arquivo, ele vai ler o que esta sendo escrito e vai armazenar
    }


    }else{
        printf("BANIDO");
    }

    system("pause");

//fputs ela recvebe uma string e um ponterio onde vai ser escrito



fclose(pera);

    return 0;
}
