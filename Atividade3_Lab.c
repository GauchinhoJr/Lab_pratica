#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*  #Exercicio 1
void main()
{
    int i;
    for (i = 1; i <= 5; i++){
        printf ("3 * %d = %d\n", i, 3 * i);
    }
}
*/


/*  #Exercicio 2
void main(){
    int i;
    for (i = 1; i <= 100; i++){
        printf ("%d ", i);
    }
    printf ("\n");
    i = 1;
    while (i <= 100){
        printf ("%d ", i);
        i++;
    }
    printf ("\n");
    i = 1;
    do{
        printf ("%d ", i);
        i++;
    }
    while (i <= 100);
}
*/


/*  #Exercicio 3
void main(){
    int i = 10;
    while (i >= 0){
        printf ("%d\n", i);
        i--;
    }
    printf ("FIM!");
}
*/


/*  #Exercicio 4
void main(){
    int i = 0;
    for (i; i <= 100000; i += 1000){
        printf ("i = %d\n", i);
    }
}
*/


/*  #Exercicio 5
void main(){
    int i;
    float n, soma = 0;
    for (i = 0; i < 10; i++){
        printf ("Digite o %do valor:\n", i + 1);
        scanf ("%f", &n);
        soma += n;
    }
    printf ("Soma de todos os valores: %f", soma);
}
*/


/*  #Exercicio 6
void main(){
    int n, i;
    float media;
    for (i = 0; i < 10; i++){
        printf ("Digite o %do valor:\n", i + 1);
        scanf ("%d", &n);
        media += n;
    }
    printf ("Media: %f", media / 10);
}
*/


/*  #Exercicio 7
void main(){
    int n, i;
    float media;
    for (i = 0; i < 10; i++){
        printf ("Digite o %do valor, apenas valores nao negativos:\n", i + 1);
        scanf ("%d", &n);
        if (n >= 0)
            media += n;
        else{
            i--;
            continue;
        }
    }
        printf ("Media: %f", media / 10);
}
*/


/*  #Exercicio 8                
void main(){
    int i;
    float menor, maior, n;
    printf ("Digite o 1o numero:\n");  
    scanf ("%f", &n);
    maior = n;
    menor = n;
    for (i = 1; i < 10; i++){
        printf ("Digite o %do numero:\n", i + 1);  
        scanf ("%f", &n);
        if (n > maior)
            maior = n;
        else if (n < menor)
            menor = n;
    }
    printf ("Maior: %f", maior);
    printf ("Maior: %f", menor);
}
*/


/*  #Exercicio 9
void main(){
    int N, i, aux, a = 0;
    printf ("Digite o numero de impares que deseja exibir:\n");
    scanf ("%d", &N);
    printf ("\n");
    for (i = 1; i <= N; i++){
        a++;
        if (a % 2 == 1){
            printf ("%d\n", a);
        }
        else{
            i--;
            continue;
        }
    }
}
*/


/*  #Exercicio 10
void main(){
    int soma = 0, n = 0, i;
    for (i = 1; i <= 50; i++){
        n++;
        if (n % 2 == 0){
            soma += n;
        }
        else{
            i--;
            continue;
        }
    }
    printf ("Soma dos pares: %d", soma);
}
*/


/*  #Exercicio 11
void main(){
    int i, N;
    printf ("Digite um inteiro positivo:\n");
    scanf ("%d", &N);
    if (N > 0){
        for (i = 0; i <= N; i++){
            printf ("%d ", i);
        }
    }
    else
        printf ("Numero invalido!");
}
*/


/*  #Exercicio 12
void main(){
    int i, N, soma = 0;
    printf ("Digite um inteiro:\n");
    scanf ("%d", &N);
    for (i = 1; i <= N/2; i++){
        if ((N % i) == 0)
            soma += i;
    }
    printf ("Soma: %d", soma);
}
*/


/*  #Exercicio 13
void main(){
    int i, soma = 0;
    for (i = 1000; i > 0; i--){
        if ((i % 3 == 0) || (i % 5 == 0))
            soma += i;
    }
    printf ("Soma: %d", soma);
}
*/


/*  #Exercicio 14
void main(){
    int d1, d2, n, i;
    printf ("Digite o numero de lancamentos:\n");
    scanf ("%d", &n);
    srand (time(NULL));
    for (i = 0; i < n; i++){
        d1 = rand() % 7;
        d2 = rand() % 7;
        if (d1 < d2)
            printf ("%d < %d\n", d1, d2);
        else if (d1 > d2)
            printf ("%d > %d\n", d1, d2);
        else
            printf ("%d = %d\n", d1, d2);
    }
}
*/


/*  #Exercicio 15
void main(){
    float n;
    do{
        printf ("Digite um valor:\n");
        scanf ("%f", &n);
        printf ("Quadrado de %f: %f\n", n, n*n);
        printf ("Cubo de %f: %f\n", n, n*n*n);
        printf ("Raiz quadrade de %f: %f\n", n, sqrt(n));
    }
    while(n > 0);
}
*/


/*  #Exercicio 16
void main(){
    int menu;
    float n1, n2;
    printf ("Digite o primeiro numero:\n");
    scanf ("%f", &n1);
    printf ("Digite o segundo numero:\n");
    scanf ("%f", &n2);
    do{
        printf ("\nEscolha e operacao que deseja realizar entre os numeros:\n");
        printf ("Adicao (opcao 1)\n");
        printf ("Subtracao (opcao 2)\n");
        printf ("Multiplicacao (opcao 3)\n");
        printf ("Divisao (opcao 4)\n");
        printf ("Saida (opcao 5)\n");
        printf ("Opcao:\n");
        scanf ("%d", &menu);
        if ((menu == 1) || (menu == 2) || (menu == 3) || (menu == 4) || (menu == 5)){
            switch (menu){
                case 1:
                    printf ("%f + %f = %f\n", n1, n2, n1 + n2);
                    system("pause");
                    break;
                case 2:
                    printf ("%f - %f = %f\n", n1, n2, n1 - n2);
                    system("pause");
                    break;
                case 3:
                    printf ("%f * %f = %f\n", n1, n2, n1 * n2);
                    system("pause");
                    break;
                case 4:
                    printf ("%f / %f = %f\n", n1, n2, n1 / n2);
                    system("pause");
                    break;
            }
        }
        else
            printf ("Opcao invalida!\n");
    }
    while(menu != 5);
}
*/


/*  #Exercicio 17
void main(){
    float C = 1.5, Z = 1.1;
    int i;
    for (i = 0; C >= Z; i++){
        C += 0.02;
        Z += 0.03;
    }
    printf ("Anos necessario para Ze ser maior que Chico: %d", i - 1);
}
*/


//  #Exercicio 18


/*  #Exercicio 19
void main(){
    int s;
    printf ("Digite o valor do saque:\n");
    scanf ("%d", &s);
    printf ("Numero de notas de 100: %d\n", s / 100);
    s = s % 100;
    printf ("Numero de notas de 50: %d\n", s / 50);
    s = s % 50;
    printf ("Numero de notas de 20: %d\n", s / 20);
    s = s % 20;   
    printf ("Numero de notas de 10: %d\n", s / 10);
    s = s % 10;   
    printf ("Numero de notas de 5: %d\n", s / 5);
    s = s % 5;   
    printf ("Numero de notas de 2: %d\n", s / 2);
    s = s % 2;   
    printf ("Numero de notas de 1: %d\n", s / 1);
    s = s % 1;      
}
*/


/*  #Exercicio 20
void main()
{
    int i, j, div, cont = 0;
    for (i = 1; i < 2000000; i++){
        div = 0;
        for (j = 1; j <= i; j++){
            if (i % j == 0)
                div++;
        }
        if (div == 2)
            cont += i;
    }
    printf ("Quantidade de numeros primos abaixo de dois milhoes: %d", cont);
}
*/


/*  #Exercicio 21
void main()
{
    int a, b, i, j, div, cont = 0;
    printf ("Informe o valor inicial do intervalo:\n");
    scanf ("%d", &a);
    printf ("Informe o valor final do intervalo:\n");
    scanf ("%d", &b);
    for (i = a; i <= b; i++){
        div = 0;
        for (j = 1; j <= i; j++){
            if (i % j == 0)
                div++;
        }
        if (div == 2)
            cont++;
    }
    printf ("Quantidade de numeros primos entre %d e %d: %d", a, b, cont);
}
*/


//  #Exercicio 22 


/*    #Exercicio 23
void main(){
    int n, i, j, c = 0;
    printf ("Digite o valor de linhas desejadas:\n");
    scanf ("%d", &n);
    printf ("\n");
    for (i = 1; i<= n; i++){
        for (j = 1; j <= i; j++){
            c++;
            printf("%d ", c);
        }
        printf ("\n");
    }
}
*/


















