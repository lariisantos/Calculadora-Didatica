// Larissa Sobrinho Santos - lss2 - Turma A
// 21/08 - 17:39 - 19:40 = letra a, b e c da primeira questão.

#include <stdio.h>

int main(){
    int num, escolha, binario[32], octal[32], hexa[32], bcd[32], digito, i=0;

    printf("Digite um numero decimal para converter: \n", &num);
    scanf("%d", &num);
    printf("Para qual base voce deseja transformar?\n[1] Para binario\n[2] Para octal\n[3] Para hexadecimal\n[4] Para BCD\n[5] Para 16 bits (comp a 2)\n");
    scanf("%d", &escolha);

    if (escolha == 1){
        while (num>0){
            binario[i] = num%2;
            printf("Divisao %d: Resultado = %d, Resto = %d\n", i + 1, num / 2, binario[i]);
            num = num/2;
            i++;
        }

        printf("O numero em binario (base 2): ");
        for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }

    }
    printf("\n");

        if (escolha == 2){
        while (num>0){
            octal[i] = num%8;
            printf("Divisao %d: Resultado = %d, Resto = %d\n", i + 1, num / 8, octal[i]);
            num = num/8;
            i++;
        }

        printf("O numero em octal (base 8): ");
        for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }

    }
    printf("\n");

        if (escolha == 3){
            while (num > 0) {
        int resto = num % 16;

        if (resto < 10)
            hexa[i] = resto + '0';  // Converte para caractere numérico
        else
            hexa[i] = resto - 10 + 'A';  // Converte para caractere alfabético

        printf("Divisao %d: Resultado = %d, Resto = %c\n", i + 1, num / 16, hexa[i]);
        num = num / 16;
        i++;
    }
    printf("O numero em hexadecimal (base 16): ");
    for (int j = i - 1; j >= 0; j--) {
    printf("%d", hexa[j]);
    }
        
    }
    printf("\n");

    if (escolha == 4){

    }
    return 0;
}