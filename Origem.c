#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

#define NONE        "\033[0m"
#define BG_GREEN    "\033[42m"
#define C_BLACK     "\033[30m"
#define SIZE_I sizeof(int)

typedef union {
    unsigned int numero;
    unsigned char bytes[SIZE_I];
} cifra; //typedef com 2 vari�veis

void cifrar(const cifra* cif, const char* in, char* out) {
    for (int i = 0; in[i] != 0; i++) {
        out[i] = in[i] ^ cif->bytes[i % SIZE_I];
    }
} //Função cifrar para criptografar

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    printf("%s%s|__________________________________________|\n", C_BLACK, BG_GREEN);
    printf("|__________________________________________|\n");
    printf("          MATEMÁTICA COMPUTACIONAL          \n");
    printf("             ATIVIDADE PRÁTICA              \n");
    printf("|__________________________________________|\n");
    printf("|__________________________________________|%s\n", NONE);
    /*Cabe�alho do programa*/
    printf("\n\n\n\n\n\n\n");

    const cifra ru = { 3529473 };
    const char* frase = "Este texto deve ser criptografado."; //"Frase descriptografada";

    printf("Chave cifra: %d => ", ru.numero);
    for (int i = 0; i < SIZE_I; i++) {
        printf("%d ", ru.bytes[i]);
    }
    printf("\n");

    char teste_in[50] = { 0 },
        teste_out[50] = { 0 };

    printf("\nTexto criptografado: ");
    cifrar(&ru, frase, teste_in);
    printf("%s\n\n", teste_in);

    printf("Texto descriptografado: ");
    cifrar(&ru, teste_in, teste_out);
    printf("%s\n\n\n\n\n\n\n\n\n\n\n", teste_out);

    system("pause");
    return 0;
}