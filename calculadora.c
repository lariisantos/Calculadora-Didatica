// Larissa Sobrinho Santos - lss2 - Turma A
// 21/08 - 17:39 - 19:40 = letra a, b e c da primeira questão.
// 22/08 - 16:00 - 18:24 = só tentativas, não consegui nada.
// 29/08 - 19:55 - 21:30 = questão BCD e Complemento a 2.
// 30/08 - 14:55 - x = questão 3.

#include <stdio.h>
#include <string.h>

int main(){
    int num, escolha, binario[32], octal[32], hexa[32], i = 0;

    printf("Digite um numero decimal para converter: \n");
    scanf("%d", &num);
    printf("Para qual base voce deseja transformar?\n[1] Para binario\n[2] Para octal\n[3] Para hexadecimal\n[4] Para BCD\n[5] Para 16 bits (comp a 2)\n[6] Real -> decimal, float & double\n");
    scanf("%d", &escolha);

    if (escolha == 1){ // BINARIO
        while (num > 0){
            binario[i] = num % 2; // pega o restante e armazena no vetor binario
            printf("Divisao %d: Resultado = %d, Resto = %d\n", i + 1, num / 2, binario[i]);
            num = num / 2;
            i++;
        }

        printf("O numero em binario (base 2): ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binario[j]);
        }
    }
    printf("\n");

    if (escolha == 2){ // OCTAL
        while (num > 0){
            octal[i] = num % 8;
            printf("Divisao %d: Resultado = %d, Resto = %d\n", i + 1, num / 8, octal[i]);
            num = num / 8;
            i++;
        }

        printf("O numero em octal (base 8): ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", octal[j]);
        }
    }
    printf("\n");

    if (escolha == 3){ // HEXADECIMAL
        while (num > 0) {
            int resto = num % 16;

            if (resto < 10)
                hexa[i] = resto + '0';  // Converte pra caractere numérico
            else
                hexa[i] = resto - 10 + 'A';  // Converte pra caractere alfabético

            printf("Divisao %d: Resultado = %d, Resto = %c\n", i + 1, num / 16, hexa[i]);
            num = num / 16;
            i++;
        }
        printf("O numero em hexadecimal (base 16): ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", hexa[j]);
        }
    }
    printf("\n");

    if (escolha == 4){ // BCD
        int num = num;
        char sequencia[64] = "", str2[64] = "";
        char str3[64] = "", conversao[64] = "";
        int c = 0;

        printf("BCD: \n\n");

        while(1){
            c++;
            int resto = num % 10;
            switch (resto){
                case 0:
                    if (c == 1){
                        strcpy(str3, "0 = 0000.");
                        strcpy(str2, "0000");
                    } else {
                        strcpy(str3, "0 = 0000, ");
                        strcpy(str2, "0000 ");
                    }
                    strcat(str3, conversao);
                    strcpy(conversao, str3);
                    strcpy(str3, "");

                    strcat(str2, sequencia);
                    strcpy(sequencia, str2);
                    strcpy(str2, "");
                    break;

                case 1:
                    if (c == 1){
                        strcpy(str3, "1 = 0001.");
                        strcpy(str2, "0001.");
                    } else {
                        strcpy(str3, "1 = 0001, ");
                        strcpy(str2, "0001 ");
                    }
                    strcat(str3, conversao);
                    strcpy(conversao, str3);
                    strcpy(str3, "");

                    strcat(str2, sequencia);
                    strcpy(sequencia, str2);
                    strcpy(str2, "");
                    break;

                case 2:
                    if (c == 1){
                        strcpy(str3, "2 = 0010.");
                        strcpy(str2, "0010.");
                    } else {
                        strcpy(str3, "2 = 0010, ");
                        strcpy(str2, "0010 ");
                    }
                    strcat(str3, conversao);
                    strcpy(conversao, str3);
                    strcpy(str3, "");

                    strcat(str2, sequencia);
                    strcpy(sequencia, str2);
                    strcpy(str2, "");
                    break;

                case 3:
                    if (c == 1){
                        strcpy(str3, "3 = 0011.");
                        strcpy(str2, "0011.");
                    } else {
                        strcpy(str3, "3 = 0011, ");
                        strcpy(str2, "0011 ");
                    }
                    strcat(str3, conversao);
                    strcpy(conversao, str3);
                    strcpy(str3, "");

                    strcat(str2, sequencia);
                    strcpy(sequencia, str2);
                    strcpy(str2, "");
                    break;

                case 4:
                    if (c == 1){
                        strcpy(str3, "4 = 0100.");
                        strcpy(str2, "0100.");
                    } else {
                        strcpy(str3, "4 = 0100, ");
                        strcpy(str2, "0100 ");
                    }
                    strcat(str3, conversao);
                    strcpy(conversao, str3);
                    strcpy(str3, "");

                    strcat(str2, sequencia);
                    strcpy(sequencia, str2);
                    strcpy(str2, "");
                    break;

                case 5:
                    if (c == 1){
                        strcpy(str3, "5 = 0101.");
                        strcpy(str2, "0101.");
                    } else {
                        strcpy(str3, "5 = 0101, ");
                        strcpy(str2, "0101 ");
                    }
                    strcat(str3, conversao);
                    strcpy(conversao, str3);
                    strcpy(str3, "");

                    strcat(str2, sequencia);
                    strcpy(sequencia, str2);
                    strcpy(str2, "");
                    break;

                case 6:
                    if (c == 1){
                        strcpy(str3, "6 = 0110.");
                        strcpy(str2, "0110.");
                    } else {
                        strcpy(str3, "6 = 0110, ");
                        strcpy(str2, "0110 ");
                    }
                    strcat(str3, conversao);
                    strcpy(conversao, str3);
                    strcpy(str3, "");

                    strcat(str2, sequencia);
                    strcpy(sequencia, str2);
                    strcpy(str2, "");
                    break;

                case 7:
                    if (c == 1){
                        strcpy(str3, "7 = 0111.");
                        strcpy(str2, "0111.");
                    } else {
                        strcpy(str3, "7 = 0111, ");
                        strcpy(str2, "0111 ");
                    }
                    strcat(str3, conversao);
                    strcpy(conversao, str3);
                    strcpy(str3, "");

                    strcat(str2, sequencia);
                    strcpy(sequencia, str2);
                    strcpy(str2, "");
                    break;

                case 8:
                    if (c == 1){
                        strcpy(str3, "8 = 1000.");
                        strcpy(str2, "1000.");
                    } else {
                        strcpy(str3, "8 = 1000, ");
                        strcpy(str2, "1000 ");
                    }
                    strcat(str3, conversao);
                    strcpy(conversao, str3);
                    strcpy(str3, "");

                    strcat(str2, sequencia);
                    strcpy(sequencia, str2);
                    strcpy(str2, "");
                    break;

                case 9:
                    if (c == 1){
                        strcpy(str3, "9 = 1001.");
                        strcpy(str2, "1001.");
                    } else {
                        strcpy(str3, "9 = 1001, ");
                        strcpy(str2, "1001 ");
                    }
                    strcat(str3, conversao);
                    strcpy(conversao, str3);
                    strcpy(str3, "");

                    strcat(str2, sequencia);
                    strcpy(sequencia, str2);
                    strcpy(str2, "");
                    break;
            }
            if (num <= 9){
                break;
            }
            num = num / 10;
        }
        printf("%s\n\n", conversao);
        printf("BCD: %s\n\n", sequencia);
    }
    if (escolha == 5) {
    int i = 0;
    int binary[16] = {0};
    int is_negative = 0;

    // Se o número for negativo, converte p positivo
    if (num < 0) {
        num = -num;
        is_negative = 1;
    }

    // Conversão do número para binário (16 bits)
    while (num > 0 && i < 16) {
        binary[i] = num % 2;
        printf("Divisao %d: Resultado = %d, Resto = %d\n", i + 1, num / 2, binary[i]);
        num = num / 2;
        i++;
    }

    if (is_negative) {
        // Complemento a 1
        for (int j = 0; j < 16; j++) {
            binary[j] = binary[j] == 0 ? 1 : 0;
        }

        printf("Complemento a 1: ");
        for (int j = 15; j >= 0; j--) {
            printf("%d", binary[j]);
        }
        printf("\n");

        // Adicionar 1 para obter o complemento a 2
        int carry = 1;
        for (int j = 0; j < 16; j++) {
            int sum = binary[j] + carry;
            binary[j] = sum % 2;
            carry = sum / 2;
        }
    }

    printf("O numero em complemento a 2 (16 bits): ");
    for (int j = 15; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}
    return 0;
}