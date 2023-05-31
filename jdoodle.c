#include <stdio.h>

int main() {
    // Criação das variáveis locais utilizadas neste programa
    char USUARIO[] = "Vaamonde";
    char USUARIOS[100];
    int TESTE01, TESTE02;

    // Utilizando o comando printf para imprimir na tela os valores das variáveis locais
    // e variáveis especiais do programa
    printf("Impressão na tela.............: Olá Mundo!!!\n");
    printf("Nome do usuário...............: %s\n", USUARIO);
    printf("Nome do arquivo do programa...: %s\n", __FILE__);
    printf("Quantidade de parâmetros......: %d\n", __argc);
    printf("Todos os parâmetros...........: ");
    for (int i = 0; i < __argc; i++) {
        printf("%s ", __argv[i]);
    }
    printf("\n");
    printf("Parâmetro 01..................: %s\n", __argv[1]);
    printf("Parâmetro 02..................: %s\n", __argv[2]);
    printf("Status do comando anterior....: %d\n", __exec_result);
    printf("PID do processo...............: %d\n", getpid());
    printf("Usuário logado................: %s\n", getlogin());
    
    FILE *file = popen("who", "r");
    fgets(USUARIOS, sizeof(USUARIOS), file);
    pclose(file);
    
    printf("Comando: test A == B..........: %d\n", 'A' == 'B');
    printf("Comando: test -f /etc/passwd..: %d\n", access("/etc/passwd", F_OK));
    
    // Utilizando o comando if para fazer os testes lógicos
    if (strcmp(USUARIO, "root") == 0) {
        printf("Teste de usuário..............: Usuário é root.\n");
    } else {
        printf("Teste de usuário..............: Usuário não é root\n");
    }
    
    // Utilizando o comando if encadeado para aumentar os testes lógicos
    TESTE01 = 'A' == 'B';
    if (TESTE01 == 0) {
        printf("Resultado do comando test é...: VERDADEIRO\n");
    } else if (TESTE01 == 1) {
        printf("Resultado do comando test é...: FALSO\n");
    } else {
        printf("Resultado do comando test é...: NÃO IDENTIFICADO\n");
    }
    
    // Utilizando o comando switch para fazer os testes lógicos
    switch (TESTE01) {
        case 0:
            printf("Resultado do comando switch é: 0 - VERDADEIRO\n");
            break;
        case 1:
            printf("Resultado do comando switch é: 1 - FALSO\n");
            break;
        default:
            printf("Resultado do comando switch é: NÃO IDENTIFICADO\n");
    }
    
    // Utilizando o comando scanf para receber os valores e fazer o teste lógico com switch
    char LETRAS;
    printf("Digite as letras: A, B ou C...: ");
    scanf(" %c", &LETRAS);
    switch (LETRAS) {
        case 'A':
        case 'a':
            printf("A letra digitada foi..........: %c\n", LETRAS);
            break;
        case
