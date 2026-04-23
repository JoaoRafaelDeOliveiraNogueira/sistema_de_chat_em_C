#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//sistema do chat: verificação e back-end.
int chat_system_verificacao(void){
    //variaveis de verificacao de entrada do usuario.
    char comando_const_entrada[50] = "/entrar";
    char input_user[50];
    scanf("%s", &input_user);

    //menu: Entrada para cada campo do programa, dependendo da entrada do usuario.
    if(strcmp(input_user, "1") == 0){
        chat_lib_input_regras();
        chat_lib_input_command();
    }
    else if(strcmp(input_user, comando_const_entrada) == 0){
        chat_system_call();
    }
}
int chat_system_call(void){
    char comando_const_saida[50] = "/sair";
    char call[1000];
    int i = 0;
    printf("\n....................................................................\n");
    printf("....................................................................\n");
    printf("...........................CHAT ONLINE..............................\n");
    printf("....................................................................\n");
    printf("....................................................................\n");
    for(i; i == 0; i = 0){
        scanf("%s", &call);
        if(strcmp(call, comando_const_saida) == 0){
            i = 1;
            break;
        }
    }
}

//sitema de lib do chat: interecao com o usuario.
int chat_lib_input(void){
    //previa explicacao sobre o programa ao usuario.
    printf("================== CHAT INTERATIVO: MODO BETA 1.0 ====================\n");
    printf("Digite [1] para ver as ragras e comandos. (caso não saiba).\nCOMMAND: ");
    
}
int chat_lib_input_regras(void){
    printf("===============================R E G R A S========================================\n");
    printf("01: Respeito mútuo: Proibido ofensas, xingamentos ou qualquer tipo de preconceito.\n");
    printf("02: Sem Spam: Não envie mensagens repetidas ou links suspeitos e não autorizados.\n");
    printf("03: Conteúdo apropriado: Proibido o envio de imagens ou textos com conteúdo adulto ou violento.\n");
    printf("04: Privacidade: Não compartilhe dados pessoais (seus ou de outros) no chat.\n");
    printf("05: Foco no tópico: Mantenha a conversa relevante ao propósito do grupo ou sala.");
    printf("\n\n");
}
int chat_lib_input_command(void){
    printf("===============================C O M A N D O S=====================================\n");
    printf("comando /entrar: para entrar no chat, e iniciar conversa\n");
    printf("comando /sair: para sair do chat, e finalizar conversa(só funciona quando está dentro do chat de conversa)");
    printf("\n\n");
}

//sistema de integracao.
 int chat_integration(void){
    for(int i = 0; i == 0; i = 0){
        chat_lib_input();
        chat_system_verificacao();
    }
 }
int main(){
system("chcp 65001");
    chat_integration();
}