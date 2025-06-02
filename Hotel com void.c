#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct{
    char nome[60], pagamento;
    int idade, cpf, telefone, emergencia, dia;
    int Documento, camacasal, camassolteiro, escolha,squarto,fpedido;
    float valor, valorq;
}Checkin;

Checkin checkinn[10];
int contCad = 0;
float gastos = 0.0;
 
void fazerCheckin(); 
void servico(); 
void pedido(); 
void verificarGastos();
 

 int main(){
     int opcao;
     
    do{
        printf("\n--------Bem vindo ao Hotel Encanto das Águas\n--------");
         
        printf("Escolha o que você quer fazer:\n");
        printf("1 - Checkin\n");
        printf("2 - Solicitar sereviço de quarto\n");
        printf("3 - Fazer pedido\n");
        printf("4 - Checar Gastos\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        
        system("clear");
        
         switch(opcao){
            case 1:
            fazerCheckin();
            break;
            
            case 2:
            servico();
            break;
            
            case 3:
            pedido();
            break;
            
            case 4:
            verificarGastos();
            break;
            
            case 0:
            return 0;
        }
         
     printf("Enter para continuar ...\n");
         getchar();
         getchar();
         system("clear");
     
        
     }while(opcao != 0);   
     
    
     
     return 0;
 }
    
    
 void fazerCheckin(){
     checkinn[contCad].valorq = 0;
    printf("ID da Reserva : %d\n", contCad+1);     
     printf("Informe seu nome:\n");
     scanf("%s", checkinn[contCad].nome);
     printf("Informe seu cpf:\n");
     scanf("%d", &checkinn[contCad].cpf);
     printf("Informe seu telefone:\n");
     scanf("%d", &checkinn[contCad].telefone);
     printf("Informe seu contato de emergencia:\n");
     scanf("%d", &checkinn[contCad].emergencia);
     printf("Informe sua Idade:\n");
     scanf("%d", &checkinn[contCad].idade);
        if(checkinn[contCad].idade >= 18){
            printf("Idade permitida!\n");
        }
        else{
            printf("Idade Negada\n");
        }
     
     //escolha do quarto
     
     printf("\n-----Nossos quartos tem a quantidade maxima de 4 pessoas por quarto-----\n");
     printf("Informe a quantidade de dias que você vai ficar:\n");
     scanf("%d", &checkinn[contCad].dia);
     printf("Escolha qual quarto você quer ficar:\n");
     printf("1 - Suite de solteiro - 100 a diaria\n");
     printf("2 - Suite Casal - 150 a diaria");
     printf("3 -Suite Premium (uma cama de casal e 2 de solteiro) - 200 a diaria\n");
     scanf("%d", &checkinn[contCad].escolha);
     
         if(checkinn[contCad].escolha == 1){
             checkinn[contCad].valorq += 100 * checkinn[contCad].dia;
             printf("O valor ficou de %.2f\n", checkinn[contCad].valorq);
         }
         
         else if(checkinn[contCad].escolha == 2){
             checkinn[contCad].valorq += 150 * checkinn[contCad].dia;
             printf("O valor ficou de %.2f\n", checkinn[contCad].valorq);
         }
         
         else if(checkinn[contCad].escolha == 3){
            checkinn[contCad].valorq += 200 * checkinn[contCad].dia;
            printf("O valor ficou de %.2f\n", checkinn[contCad].valorq);
         } 
         
         else{
             printf("Opção invalida!\n");
         }
         
    printf("Informe como você vai pagar:\n");
    printf("Credito\n");
    printf("Debito\n");
    printf("Dinheiro\n");
    printf("Pix\n");
    scanf("%s",&checkinn[contCad].pagamento);
    printf("Você escolheu pagar com %s\n", &checkinn[contCad].pagamento);
    
    
     contCad++;
     gastos++;
 } 
 
 void verificarGastos() {
    int id;
    printf("Informe o ID da reserva para o servico : ");
    scanf("%d", &id);
    printf("Seus Gastos são: R$ %.2f\n",checkinn[id-1].valorq);
 }
 
void servico(){
    int id;
    printf("Informe o ID da reserva para o servico : ");
    scanf("%d", &id);
    printf ("Você solicitou o serviço de quarto! Informe o que você quer\n:");
    printf("1 - Traveseiro adicional\n");
    printf("2 - Cobertor adicional\n");
    printf("3 - Faxina no quato\n");
    printf("4 - Trocar o lençol\n");
    scanf("%d", &checkinn[id-1].squarto);
    printf("Você pediu %d\n chegará em um intervalo de 20 - 40 minutos", checkinn[contCad].squarto);
 }
 
 void pedido(){
     
    printf("Voce solicitou fazer pedido! Informe qual pedido você quer fazer:\n");
    printf (" Almoço no proprio quarto\n");
    printf(" Jantar no proprio quarto\n");
    printf(" Solicitar café da manhã\n");
    scanf("%d", &checkinn[contCad].fpedido);
    printf("Seu pedido foi %d\nchegará em um intervalo de 30 - 50 minutos", checkinn[contCad].fpedido);
 }
    

    