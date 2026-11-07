#include <stdio.h>
#include <math.h>

int main() {
    char i1;
    float i2 = 0;
    float i3 = 0;
    
    printf("+=================================================+\n");
    printf("|           Calculadora 2000 Simples!!!           |\n");
    printf("+=================================================+\n\n");
    
    printf("Digite o operador desejado(+,-,*,/,^,r): ");
    scanf("%c", &i1);
    
    switch (i1){
        case '+':
            printf("Digite o número da parcela: ");
            scanf("%f", &i2);
            
            printf("Digite o número a ser somado: ");
            scanf("%f", &i3);
            
            printf("\nA soma de %g mais %g é: %g", i2, i3, i2+i3);
            return 0;
        break;
        case '-':
            printf("Digite o número da parcela: ");
            scanf("%f", &i2);
            
            printf("Digite o número a ser subtraido: ");
            scanf("%f", &i3);
            
            printf("\nA subtração de %g menos %g é: %g", i2, i3, i2-i3);
            return 0;
        break;
        case '*':
            printf("Digite o número a ser multiplicado: ");
            scanf("%f", &i2);
            
            printf("Digite o multiplicador: ");
            scanf("%f", &i3);
            
            printf("\nA multiplicação de %g com %g é: %g", i2, i3, i2*i3);
            return 0;
        break;
        case '/':
            printf("Digite o numerador: ");
            scanf("%f", &i2);
            
            printf("Digite o denominador(Não pode ser 0): ");
            scanf("%f", &i3);
            
            if (i3 != 0){
                printf("\nA divisão de %g com %g é: %g", i2, i3, i2/i3);
                return 0;
            }
            else{
                printf("\nNenhum número pode ser dividido por 0.\nEncerrando o programa...");
                return 1;
            }
        break;
        case '^':
            printf("\nDigite o número a ser elevado: ");
            scanf("%f", &i2);
            
            printf("\nDigite o expoênte: ");
            scanf("%f", &i3);
            
            printf("\n\nA numero %g elevado a %g é: %g", i2, i3, pow(i2, i3));
            return 0;
        break;
        case 'r':
            printf("Digite o número para obter a raiz: ");
            scanf("%f", &i2);
            
            printf("Digite o grau da raiz(Não pode ser 0): ");
            scanf("%f", &i3);
            
            if (i3 == 0){
                printf("\nNenhum número pode ser dividido por 0.\nEncerrando o programa...");
                return 1;
            }
            else if (i2 < 0){
                printf("\nRaiz de número negativo não é suportada.\nEncerrando o programa...");
                return 1;
            }
            else{
                printf("\nA raiz de %gº grau de %g é: %g", i3, i2, pow(i2, 1.0/i3));
                return 0;
            }
        break;
        default:
            printf("\n\nOperador inválido!\nEncerrando o programa...");
            return 1;
        break;
    }
}