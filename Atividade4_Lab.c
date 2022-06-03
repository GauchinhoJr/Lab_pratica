#include <stdio.h>

//  ##Prova 1##

/*  ##Exercicio 3
void main()
{
    float salario;
    printf ("Digite o salario:\n");
    scanf ("%f", &salario);
    printf ("Apos 25%% de aumento, o salario fica em %.f reais", salario * 1.25);
}
*/


/*  ##Exercicio 4
void main(){
    float temp;
    char unidade;
    printf ("Digite a temperatura:\n");
    scanf ("%f", &temp);
    setbuf(stdin, NULL);
    printf ("Digite a unidade de medida, C para Celcius e F para Fahrenheit:\n");
    scanf ("%c", &unidade);
    if ((unidade == 'C') || (unidade == 'c'))
        printf ("%f em graus Celcius equivale a %f em graus Fahrenheit", temp, (temp * 9.0 / 5.0) + 32);
    else if ((unidade == 'F') || (unidade == 'f'))
        printf ("%f em graus Fahrenheit equivale a %f em graus Celcius", temp, (temp - 32) * 5.0 / 9.0);
    else
        printf ("Unidade de medida invalida!");
}
*/


/*  ##Exercicio 5
void main(){
    int i, j, n;
    printf ("Digite o numero de :\n");
    scanf ("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            printf ("*");
        }
        printf ("\n");
    }
}
*/


/*  ##Exercicio 6
void main(){
    int menu, n1, n2;
    printf ("Digite o valor do primeiro numero:\n");
    scanf ("%d", &n1);
    printf ("Digite o valor do segundo numero:\n");
    scanf ("%d", &n2);
    do {
        printf ("### Menu de opcoes: ###\n");
        printf ("1- Soma\n");
        printf ("2- Subtracao\n");
        printf ("3- Multiplicacao\n");
        printf ("4- Divisao\n");
        printf ("5- Modulo\n");
        printf ("6- Sair\n");
        printf ("Opcao:\n");
        scanf ("%d", &menu);
        if((menu == 1) || (menu == 2) || (menu == 3) || (menu == 4) || (menu == 5) || (menu == 6)){
            switch (menu){
                case 1:
                    printf ("%d + %d = %d\n\n", n1, n2, n1 + n2);
                    break;
                case 2:
                    printf ("%d - %d = %d\n\n", n1, n2, n1 - n2);
                    break;
                case 3:
                    printf ("%d * %d = %d\n\n", n1, n2, n1 * n2);
                    break;
                case 4:
                    if (n2 != 0)
                        printf ("%d / %d = %f\n\n", n1, n2, (float)n1 / n2);
                    else
                        printf ("ERRO! O denominador nao pode ser 0\n\n");
                    break;
                case 5:
                    printf ("%d % %d = %d\n\n", n1, n2, n1 % n2);
                    break;
                case 6:
                    break;
            }
        }
        else
            printf ("Opcao invalida!\n\n");
    }
    while (menu != 6);
}
*/




