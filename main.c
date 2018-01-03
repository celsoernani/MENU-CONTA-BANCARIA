#include <stdio.h>
#include <stdlib.h>
#define N 4

int menu()
{
    int opcao;
    printf("Digite uma das opccoes abaixo.:\n");
    printf("1. Cadastrar nova conta bancaria.\n");
    printf("2. Alterar conta bancaria. \n");
    printf("3. Mostrar dados de uma conta bancaria. \n");
    printf("4. Numero de contas cadastradas.\n");
    printf("0. Sair.\n");
    printf("Opcao desejada.:");
    scanf("%i", &opcao);

    return opcao;
}
int main()
{
    int opcao, c=0, salva,i,j=0,a=0;
    int numero_conta[N],aux[N-1];
    float saldo[N];

    do
    {
        opcao=menu();

       switch(opcao)
        {
        case 0:
            printf("\tEncerrando o programa...\n");
            break;
        case 1:
            printf("Rotina de cadastrar conta!\n");
            if(c<N){
            printf("Cliente %i\n", c+1);
            printf("Digite o numero da conta.:");
            scanf("%i", &numero_conta[c]);
            if(c>0){
                     aux[j]=numero_conta[c];
            for(i=1;i<=N;i++){
                if(numero_conta[i]== numero_conta[c]){
                    printf("CONTA JA CADASTRADA, DIGITE OUTRA CONTA:\n");
                    scanf("%i", &numero_conta[c]);
                    aux[j]=numero_conta[c];
                }
            }
                for(a=1;a<=N-1;a++){
                if(aux[a]== numero_conta[c]){
                    printf("CONTA JA CADASTRADA, DIGITE OUTRA CONTA:\n");
                    scanf("%i", &numero_conta[c]);
                }

            }
            }
            printf("Digite o saldo inicial.:");
            scanf("%i", &saldo[c]);
            printf("Deseja salvar a conta ?\n");
            printf("\t1. Sim!\n");
            printf("\t2. Nao!\n");
            scanf("%i", &salva);
            if(salva==1){
                c++;
                j++;
                printf("Cadastro realizado com sucesso!\n");
            }
            else{
                printf("Cadastro cancelado!\n");
            }
        }
            else{
                printf("Limite maximo de contas!\n");
            }
            break;
        case 2:
            printf("Rotina de alterar conta!\n");
            break;
        case 3:
            printf("Mostrar dados de uma conta bancaria!\n");
            break;
        case 4:
            printf("Numero de contas cadastradas!\n");
            printf("%i \n", c);
            break;
        default:
            printf("Opcao invalida");
            break;
        }
        system("pause");
        system("cls");
}while(opcao!=0);
}
