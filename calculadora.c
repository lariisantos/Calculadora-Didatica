// Larissa Sobrinho Santos - lss2 - Turma A
// 21/08 - 17:39 - 19:40 = letra a, b e c da primeira questão.
// 22/08 - 16:00 - 18:24 = só tentativas, não consegui nada.
// 29/08 - 19:55 - 21:30 = questão BCD e Complemento a 2.
// 30/08 - 14:55 - 18:24 = questão 3.

// binario OK
// octal OK
// hexadecimal OK
// BCD OK
// Complemento a 2 OK
// float double OK

#include <stdio.h>
#include <string.h>
#include <math.h>

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
    if (escolha == 5) { // 16 bits complemento a 2
        int i = 0;
        int binary[16] = {0};
        int is_negative = 0;

        // Se o número for negativo, converte para positivo
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
    printf("\n");

    if (escolha == 6) { // Real -> decimal, float & double
        float num_float;
        double num_double;
        char output[1024] = "";  // Buffer para armazenar a saída
        char temp[256];          // Buffer temporário
        char binaryStr[128] = "";  // Armazena a representação binária
        int isNegative = 0, exponent = 0;  // Indica se o número é negativo e o expoente
        double fractionPart, integerPart;

        printf("Digite um número float: ");
        scanf("%f", &num_float);

        // Conversão do número float para binário (IEEE 754)
        printf("\nConvertendo numero float (%f) para ponto flutuante binario:\n", num_float);

        // Determina o sinal do número
        if (num_float < 0) {
            isNegative = 1;
            num_float = -num_float;  // Converte para positivo
        }

        // Separa parte inteira e fracionária
        fractionPart = modf(num_float, &integerPart);
        printf("Parte inteira: %.0f, Parte fracionaria: %f\n", integerPart, fractionPart);

        // Converte a parte inteira para binário
        printf("Convertendo parte inteira para binario...\n");
        i = 0;
        while (integerPart > 0) {
            binario[i] = (int)integerPart % 2;
            integerPart = (int)integerPart / 2;
            i++;
        }

        // Constrói a string binária da parte inteira
        for (int j = i - 1; j >= 0; j--) {
            snprintf(temp, sizeof(temp), "%d", binario[j]);
            strncat(binaryStr, temp, sizeof(binaryStr) - strlen(binaryStr) - 1);
        }
        
        strncat(binaryStr, ".", sizeof(binaryStr) - strlen(binaryStr) - 1);
        
        // Converte a parte fracionária para binário
        printf("Convertendo parte fracionaria para binario...\n");
        while (fractionPart > 0.0 && strlen(binaryStr) < sizeof(binaryStr) - 1) {
            fractionPart *= 2;
            snprintf(temp, sizeof(temp), "%d", (int)fractionPart);
            strncat(binaryStr, temp, sizeof(binaryStr) - strlen(binaryStr) - 1);
            if (fractionPart >= 1.0) {
                fractionPart -= 1.0;
            }
        }

        // Normaliza o número
        printf("Normalizando o numero binario...\n");
        int pointPosition = strchr(binaryStr, '.') - binaryStr;
        if (binaryStr[0] == '1') {
            exponent = strlen(binaryStr) - pointPosition - 1;
            memmove(&binaryStr[pointPosition], &binaryStr[pointPosition + 1], strlen(&binaryStr[pointPosition + 1]) + 1);
        } else {
            exponent = -1;
            while (binaryStr[++exponent] != '1' && strlen(binaryStr) < sizeof(binaryStr) - 1) {}
            memmove(&binaryStr[exponent], &binaryStr[exponent + 1], strlen(&binaryStr[exponent + 1]) + 1);
            exponent = -exponent;
        }

        printf("Numero normalizado: %s\n", binaryStr);
        printf("Expoente calculado: %d\n", exponent);

        // Armazena a saída formatada
        snprintf(temp, sizeof(temp), "\nFloat Binario Normalizado: %s\nExpoente: 2^%d\n\n", binaryStr, exponent);
        strncat(output, temp, sizeof(output) - strlen(output) - 1);

        // Calcula o expoente com viés
        int floatExponent = 127 + exponent;
        char exponentBin[12] = "";
        i = 0;
        while (floatExponent > 0 && strlen(exponentBin) < sizeof(exponentBin) - 1) {
            snprintf(temp, sizeof(temp), "%d", floatExponent % 2);
            strncat(exponentBin, temp, sizeof(exponentBin) - strlen(exponentBin) - 1);
            floatExponent /= 2;
        }

        // Adiciona a parte do expoente à saída
        snprintf(temp, sizeof(temp), "FLOAT (IEEE 754):\nSinal: %d\nExpoente (com viés 127): %d (Binário: %s)\nMantissa: %s\n",
                isNegative, 127 + exponent, exponentBin, binaryStr);
        strncat(output, temp, sizeof(output) - strlen(output) - 1);

        // Exibe toda a saída formatada
        printf("%s", output);

        printf("\nDigite um número double: ");
        scanf("%lf", &num_double);

        // Conversão do número double para binário (IEEE 754)
        printf("\nConvertendo número double (%lf) para ponto flutuante binário:\n", num_double);
        strcpy(output, "");  // Limpa o buffer para armazenar a nova saída
        strcpy(binaryStr, "");  // Limpa a string binária
        isNegative = 0;
        exponent = 0;

        // Determina o sinal do número
        if (num_double < 0) {
            isNegative = 1;
            num_double = -num_double;  // Converte para positivo
        }

        // Separa parte inteira e fracionária
        fractionPart = modf(num_double, &integerPart);
        printf("Parte inteira: %.0f, Parte fracionária: %f\n", integerPart, fractionPart);

        // Converte a parte inteira para binário
        printf("Convertendo parte inteira para binario...\n");
        i = 0;
        while (integerPart > 0) {
            binario[i] = (int)integerPart % 2;
            integerPart = (int)integerPart / 2;
            i++;
        }

        // Constrói a string binária da parte inteira
        for (int j = i - 1; j >= 0; j--) {
            snprintf(temp, sizeof(temp), "%d", binario[j]);
            strncat(binaryStr, temp, sizeof(binaryStr) - strlen(binaryStr) - 1);
        }
        
        strncat(binaryStr, ".", sizeof(binaryStr) - strlen(binaryStr) - 1);
        
        // Converte a parte fracionária para binário
        printf("Convertendo parte fracionaria para binario...\n");
        while (fractionPart > 0.0 && strlen(binaryStr) < sizeof(binaryStr) - 1) {
            fractionPart *= 2;
            snprintf(temp, sizeof(temp), "%d", (int)fractionPart);
            strncat(binaryStr, temp, sizeof(binaryStr) - strlen(binaryStr) - 1);
            if (fractionPart >= 1.0) {
                fractionPart -= 1.0;
            }
        }

        // Normaliza o número
        printf("Normalizando o número binario...\n");
        pointPosition = strchr(binaryStr, '.') - binaryStr;
        if (binaryStr[0] == '1') {
            exponent = strlen(binaryStr) - pointPosition - 1;
            memmove(&binaryStr[pointPosition], &binaryStr[pointPosition + 1], strlen(&binaryStr[pointPosition + 1]) + 1);
        } else {
            exponent = -1;
            while (binaryStr[++exponent] != '1' && strlen(binaryStr) < sizeof(binaryStr) - 1) {}
            memmove(&binaryStr[exponent], &binaryStr[exponent + 1], strlen(&binaryStr[exponent + 1]) + 1);
            exponent = -exponent;
        }

        printf("Número normalizado: %s\n", binaryStr);
        printf("Expoente calculado: %d\n", exponent);

        // Armazena a saída formatada
        snprintf(temp, sizeof(temp), "\nDouble Binario Normalizado: %s\nExpoente: 2^%d\n\n", binaryStr, exponent);
        strncat(output, temp, sizeof(output) - strlen(output) - 1);

        // Calcula o expoente com viés
        int doubleExponent = 1023 + exponent;
        char exponentBinDouble[12] = "";
        i = 0;
        while (doubleExponent > 0 && strlen(exponentBinDouble) < sizeof(exponentBinDouble) - 1) {
            snprintf(temp, sizeof(temp), "%d", doubleExponent % 2);
            strncat(exponentBinDouble, temp, sizeof(exponentBinDouble) - strlen(exponentBinDouble) - 1);
            doubleExponent /= 2;
        }

        // Adiciona a parte do expoente à saída
        snprintf(temp, sizeof(temp), "DOUBLE (IEEE 754):\nSinal: %d\nExpoente (com vies 1023): %d (Binario: %s)\nNormalizado: %s\n",
                isNegative, 1023 + exponent, exponentBinDouble, binaryStr);
        strncat(output, temp, sizeof(output) - strlen(output) - 1);

        printf("%s", output);
    }

    return 0;
}
