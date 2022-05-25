#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

/*  #Exercicio 1
void main()
{
    float n1, n2;
    printf ("Digite o primeiro numero:\n");
    scanf ("%f", &n1);
    printf ("Digite o segundo numero:\n");
    scanf ("%f", &n2);
    if (n1 > n2){
        printf ("%.3f eh o maior", n1);
    }
    else{
        printf ("%.3f eh o maior", n2);
    }
}
*/


/*  #Exercicio 2
void main()
{
    float nro;
    printf ("Digite um numero:\n");
    scanf ("%f", &nro);
    if (nro >= 0){
        printf ("A raiz quadrada de %.2f eh %.2f", nro, sqrt(nro));
    }
    else{
        printf ("Numero invalido");
    }
}
*/


/*  #Exercicio 3
void main()
{
    float nro;
    printf ("Digite um numero:\n");
    scanf ("%f", &nro);
    if (nro >= 0){
        printf ("A raiz quadrada de %.2f eh %.2f", nro, sqrt(nro));
    }
    else{
        printf ("O quadrado de %.2f eh %.2f", nro, nro * nro);
    }
}
*/


/*  #Exercicio 4
void main()
{
    float nro;
    printf ("Digite um numero:\n");
    scanf ("%f", &nro);
    if(nro >= 0){
        printf ("O quadrado de %.2f eh %.2f", nro, nro * nro);
        printf ("A raiz quadrada de %.2f eh %.2f", nro, sqrt(nro));
    }
}
*/


/*  #Exercicio 5
void main()
{
    int nro;
    printf ("Digite um numero:\n");
    scanf ("%d", &nro);
    if (nro % 2 == 0){
        printf ("O numero %d eh par", nro);
    }
    else{
        printf ("O numero %d eh impar", nro);
    }
}
*/


/*  #Exercicio 6
void main()
{
    int n1, n2;
    printf ("Digite o primeiro numero:\n");
    scanf ("%f", &n1);
    printf ("Digite o segundo numero:\n");
    scanf ("%f", &n2);
    if (n1 > n2){
        printf ("%d eh o maior");
        printf ("A diferenca entre eles eh %d"), n1 - n2);
    }
    else{
        printf ("%.3f eh o maior", n2);
        printf ("A diferenca entre eles eh %d"), n2 - n1);
    }
}


/*  #Exercicio 7
void main()
{
    float n1, n2;
    printf ("Digite o primeiro numero:\n");
    scanf ("%f", &n1);
    printf ("Digite o segundo numero:\n");
    scanf ("%f", &n2);
    if (n1 > n2){
        printf ("%.3f eh o maior", n1);
    else if (n2 > n1){
        printf ("%.3f eh o maior", n2);
    }
    else{
        printf ("Os numeros digitados sao iguais");
    }
}
*/


/*  #Exercicio 8
void main()
{
    float n1, n2;
    printf ("Digite a primeira nota:\n");
    scanf ("%f", &n1);
    printf ("Digite a segunda nota:\n");
    scanf ("%f", &n2);
    if ((n1 >= 0.0) && (n1 <= 10.0) &&  (n2 >= 0.0) && (n2 <= 10.0)){
        printf ("Media = %f", (n1 + n2) / 2.0);
    }
    else
        printf ("Nota invalida");
}
*/


/*  #Exercicio 9
void main()
{
    float s, e;
    printf ("Digite o valor do salario:\n");
    scanf ("%f", &s);
    printf ("Digite o valor do emprestimo:\n");
    scanf ("%f", &e);
    if (e > (s * 20 / 100)){
        printf ("Emprestimo nao concedido");
    }
    else{
        printf ("Emprestimo concedido");
    }
}
*/


/*  #Exercicio 10
void main()
{
    float h;
    char s;
    printf ("Digite a altura da pessoa, em metros:\n");
    scanf ("%f", &h);
    printf ("Digite o sexo da pessoa, M para masculino e F para feminino:\n");
    scanf ("%c", &s);
    if (s == 'M'){
        printf ("Peso ideal = (72.7 * h) - 58.0)
    }
    else if (s == 'F'){
        printf ("Peso ideal = (62.1 * h) - 44.7)
    }
    else{
            printf ("Sexo invalido!");
    }
}
*/

/*  #Exercicio 11
void main()
{
    int nro, aux1, aux2, aux3;
    printf ("Digite um inteiro:\n");
    scanf ("%d", &nro);
    if (nro > 0){
        aux1 = nro / 100;
        aux2 = (nro % 100) / 10;
        aux3 = (nro % 100) % 10;
        printf ("%d %d %d = %d", aux1, aux2, aux3, aux1 + aux2 + aux3);
    }
    else{
        printf ("Numero invalido");
    }
}
*/


/*  #Exercicio 12
void main()
{
    int nro;
    printf ("Digite um inteiro:\n");
    scanf ("%d", &nro);
    if (nro > 0){
        printf ("%.2f", log10(nro));
    }
    else if (nro < 0){
        printf ("Numero invalido");
    }
}
*/


/*  #Exercicio 13
void main()
{
    float n1, n2, n3, media;
    printf ("Digite o valor da primeira prova:\n");
    scanf ("%f", &n1);
    printf ("Digite o valor da segunda prova:\n");
    scanf ("%f", &n2);
    printf ("Digite o valor da terceira prova:\n");
    scanf ("%f", &n3);
    media = ((n1)+(n2)+(n3 * 2)) / 4;
    if (media >= 60){
        printf ("Aprovado");
    }
    else{
        printf ("Reprovado");
    }
}
*/


/*  #Exercicio 14
void main()
{
    float t, a, e, media;
    printf ("Digite o valor do trabalho de laboratorio:\n");
    scanf ("%f", &t);
    printf ("Digite o valor da avaliacao semestral:\n");
    scanf ("%f", &a);
    printf ("Digite o valor do exame final:\n");
    scanf ("%f", &e);
    media = ((t * 2)+(a * 3)+(e * 5)) / 10;
    if ((t >= 0.0) && (t <= 10.0) &&  (a >= 0.0) && (a <= 10.0) && (e >= 0.0) && (e <= 10.0)){
        if ((media >= 0) && (media <= 2.9)){
            printf ("Reprovado");
        }
        else if ((media >= 3) && (media <= 4.9)){
            printf ("Recuperacao");
        }
        else{
            printf ("Aprovado");
        }
    }
}
*/


/*  #Exercicio 15
void main()
{
    int n;
    printf ("Digite um inteiro:\n");
    scanf ("%d", &n);
    if ((n >= 0) && (n <= 7)){
        switch (n){
            case 1:
                printf ("Domingo");
                break;
            case 2:
                printf ("Segunda");
                break;
            case 3:
                printf ("Terca");
                break;
            case 4:
                printf ("Quarta");
                break;
            case 5:
                printf ("Quinta");
                break;
            case 6:
                printf ("Sexta");
                break;
            case 7:
                printf ("Sabado");
                break;
        }
    }
    else
        printf ("Valor invalido!");
}
*/


/*  #Exercicio 16
void main()
{
    int n;
    printf ("Digite um inteiro:\n");
    scanf ("%d", &n);
    if ((n >= 0) && (n <= 12)){
        switch (n){
            case 1:
                printf ("Janeiro");
                break;
            case 2:
                printf ("Fevereiro");
                break;
            case 3:
                printf ("Marco");
                break;
            case 4:
                printf ("Abril");
                break;
            case 5:
                printf ("Maio");
                break;
            case 6:
                printf ("Junho");
                break;
            case 7:
                printf ("Julho");
                break;
            case 7:
                printf ("Agosto");
                break;
            case 7:
                printf ("Setembro");
                break;
            case 7:
                printf ("Outubro");
                break;
            case 7:
                printf ("Novembro");
                break;
            case 7:
                printf ("Dezembro");
                break;
        }
    }
    else
        printf ("Valor invalido!");
}
*/


/*  #Exercicio 17
void main()
{
    float b1, b2, h;
    printf ("Digite o valor da base maior:\n");
    scanf ("%f", &b1);
    printf ("Digite o valor da base menor:\n");
    scanf ("%f", &b2);
    printf ("Digite o valor da altura:\n");
    scanf ("%f", &h);
    if ((b1 > 0) && (b2>0) && (h>0)){
        printf ("Area do tapezio = %f", (b1 + b2) * h / 2);
    }
    else
        printf ("Valor invalido!");
}
*/


/*  #Exercicio 18
void main()
{
    char op;
    float n1, n2;
    printf ("Digite + para soma, - para subtracao, * para multiplicacao e / para divisao:\n");
    scanf ("%op", &n);
    if ((op == '+') || (op == '-') || (op == '/') || (op == '*')){
        switch (n){
            case 1:
                printf ("%f + %f = %f", n1, n2, n1 + n2);
                break;
            case 2:
                printf ("%f - %f = %f", n1, n2, n1 - n2);
                break;
            case 3:
                printf ("%f * %f = %f", n1, n2, n1 * n2);
                break;
            case 4:
                printf ("%f / %f = %f", n1, n2, n1 / n2);
                break;
    }
}
*/


/*  #Exercicio 19
void main()
{
    int n;
    printf ("Digite um inteiro:\n");
    scanf ("%d", &n);
    if (n % 3 == 0){
        if (n % 5 == 0){
            printf ("%d eh divisivel por 3 e por 5", n);
        }
        else{
            printf ("%d eh divisivel por 3, mas não por 5", n);
        }
    }
    else if (n % 5 == 0){
        if (n % 3 == 0){
            printf ("%d eh divisivel por 5 e por 3", n);
        }
        else{
            printf ("%d eh divisivel por 5, mas não por 3", n);
        }
    }
    else{
        printf ("%d nao eh divisel nem por 3 e nem 5");
    }
}
*/

/*  #Exercicio 20
void main(){
    float A, B, C;
    printf ("Digite o primeiro valor:\n");
    scanf ("%f", &A);
    printf ("Digite o segundo valor:\n");
    scanf ("%f", &B);
    printf ("Digite o terceiro valor:\n");
    scanf ("%f", &C);
    if ((A + B > C) && (A + C > B) && (C + B > A)){
        if ((A == B) && (B == C)){
            printf ("O triangulo eh equilatero");
        }
        else if ((A == B) || (A == C) || (B == C)){
            printf ("O triangulo eh isosceles");
        }
        else
            printf ("O triangulo eh escaleno");
    }
    else
        printf ("Os valores nao podem ser valores dos lados de um triangulo.");
}
*/


/*  #Exercicio 21
void main(){
    int menu;
    float n1, n2;
    printf ("Escolha uma opcao:\n");
    printf ("1- Soma de dois numeros.\n");
    printf ("2- Diferenca entre dois numeros (maior pelo menor).\n");
    printf ("3- Produto entre dois numeros.\n");
    printf ("4- Divisao entre dois numeros (o primeiro pelo segundo)(denominador nao pode ser zero).\n");
    printf ("Opcao: ");
    scanf ("%d", &menu);
    if ((menu == 1) || (menu == 2) || (menu == 3) || (menu == 4)){
        printf ("Digite o primeiro numero:\n");
        scanf ("%f", &n1);
        printf ("Digite o segundo numero:\n");
        scanf ("%f", &n2);
        switch (menu){
            case 1:
                printf ("%f + %f = %f", n1, n2, n1 + n2);
                break;
            case 2:
                if (n1 > n2)
                    printf ("%f - %f = %f", n1, n2, n1 - n2);
                else
                    printf ("%f - %f = %f", n2, n1, n2 - n1);
                break;
            case 3:
                printf ("%f * %f = %f", n1, n2, n1 * n2);
                break;
            case 4:
                if (n2 != 0)
                    printf ("%f / %f = %f", n1, n2, n1 / n2);
                else
                    printf ("Valor do denominador invalido!");
        }
    }
    else
        printf ("Opcao invalida!");
}
*/


/*  Exercicio 22
void main(){
    int i;
    float t;
    printf ("Digite a idade do trabalhador:\n");
    scanf ("%d", &i);
    printf ("Digite o tempo de servico do trabalhador:\n");
    scanf ("%f", &t);
    if (i >= 65){
        printf ("O trabalhador pode se aposentar");
    }
    else if (t >= 30){
        printf ("O trabalhador pode se aposentar");
    }
    else if ((i >= 60) && (t >= 25)){
        printf ("O trabalhador pode se aposentar");
    }
    else
        printf ("O trabalhador nao pode se aposentar");
}
*/


/*  #Exercicio 23
void main(){
    int ano;
    printf ("Digite o ano:\n");
    scanf ("%d", &ano);
    if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))){
        printf ("O ano %d eh bissexto", ano);
    }
    else
        printf ("O ano %d nao eh bissexto", ano);
}
*/


/*  #Exercicio 24
void main (){
    char e[3];
    float v;
    printf ("Digite a sigla do estado para entrega:\n");
    gets (e);
    if ((strcmp(e, "MG") == 0) || (strcmp(e, "MS") == 0) || (strcmp(e, "SP") == 0) || (strcmp(e, "RJ") == 0)){
        printf ("Digite o valor do produto:\n");
        scanf ("%f", &v);
        if ((strcmp(e, "MG") == 0)){
            printf ("Valor final: %f", v * 1.07);
        }
        else if ((strcmp(e, "SP") == 0)){
            printf ("Valor final: %f", v * 1.12);
        }
        else if ((strcmp(e, "RJ") == 0)){
            printf ("Valor final: %f", v * 1.15);
        }
        else
            printf ("Valor final: %f", v * 1.08);
    }
    else
        printf ("Estado invalido!");
}
*/


/*  #Exercicio 25
void main(){
    float a, b, c, x1, x2;
    printf ("Digite o valor de a:\n");
    scanf ("%f", &a);
    x1 = (-b + sqrt((b * b) - (4 * a *c))) / 2 * a;
    x2 = (-b - sqrt((b * b) - (4 * a *c))) / 2 * a;
    if (a != 0){
        printf ("Digite o valor de b:\n");
        scanf ("%f", &b);
        printf ("Digite o valor de c:\n");
        scanf ("%f", &c);
        if ((sqrt((b * b) - (4 * a *c))) < 0){
            printf ("Nao existe raiz");
        }
        else if ((sqrt((b * b) - (4 * a *c))) == 0){
            printf ("Raiz unica = %f", x1);
        }
        else
            printf ("Raizes = %f e %f", x1, x2);
    }
    else
        printf ("A equacao nao eh de segundo grau");
}
*/


/*  Exercicio 26
void main(){
    float km, l;
    printf ("Digite a distancia em quilometros:\n");
    scanf ("%f", &km);
    printf ("Digite a quantidade de gasolina gasta em litros:\n");
    scanf ("%f", &l);
    if ((km / l) < 8){
        printf ("Venda o carro!");
    }
    else if (((km / l) >= 8) && ((km / l) <= 14)){
        printf ("Economico!");
    }
    else
        printf ("Super economico!");
}
*/


/*  #Exercicio 27
void main(){
    int idade;
    printf ("Digite a idade do nadador:\n");
    scanf ("%d", &idade);
    if (idade >= 5){
        if ((idade >= 5) && (idade <= 7)){
            printf ("Categoria Infantil A");
        }
        else if ((idade >= 8) && (idade <= 10)){
            printf ("Categoria Infantil B");
        }
        else if ((idade >= 11) && (idade <= 13)){
            printf ("Categoria Juvenil A");
        }
        else if ((idade >= 14) && (idade <= 17)){
            printf ("Categoria Juvenil B");
        }
        else
            {
            printf ("Senior");
        }
    }
    else
        printf ("Idade invalida!");
}
*/


/*  #Exercicio 28
void main(){
    int op, x, y, z;
    printf ("Selecione o tipo de media desejada:\n");
    printf ("1- Geometrica\n");
    printf ("2- Ponderada\n");
    printf ("3- Harmonica\n");
    printf ("4- Aritmetica\n");
    printf ("Opcao: ");
    scanf ("%d", &op);
    if ((op == 1) || (op == 2) || (op == 3) || (op == 4)){
        printf ("Digite o valor de x:\n");
        scanf ("%d", &x);
        printf ("Digite o valor de y:\n");
        scanf ("%d", &y);
        printf ("Digite o valor de z:\n");
        scanf ("%d", &z);
        switch (op){
            case 1:
                printf ("%f", pow(x * y * z, 1 / 3.0));
                break;
            case 2:
                printf ("%f", ((1*x)+(2*y)+(3*z)) / 3.0);
                break;
            case 3:
                printf ("%f", 1.0 / ((1/x)+(1/y)+(1/z)));
                break;
            case 4:
                printf ("%f", (x+y+z) / 3.0);
                break;
        }
    }
    else
        printf ("Opcao invalida!");
}
*/


/*  #Exercicio 29
void main(){
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, r1, r2, r3, r4, r5, i=0;
    srand(time(NULL));
    n1 = rand() % 99;
    n2 = rand() % 99;
    n3 = rand() % 99;
    n4 = rand() % 99;
    n5 = rand() % 99;
    n6 = rand() % 99;
    n7 = rand() % 99;
    n8 = rand() % 99;
    n9 = rand() % 99;
    n10 = rand() % 99;
    printf ("Qual eh a soma de %d + %d:\n", n1, n2);
    scanf ("%d", &r1);
    printf ("Qual eh a soma de %d + %d:\n", n3, n4);
    scanf ("%d", &r2);
    printf ("Qual eh a soma de %d + %d:\n", n5, n6);
    scanf ("%d", &r3);
    printf ("Qual eh a soma de %d + %d:\n", n7, n8);
    scanf ("%d", &r4);
    printf ("Qual eh a soma de %d + %d:\n", n9, n10);
    scanf ("%d", &r5);
    printf ("### RESPOSTAS ###\n");
    printf ("%d + %d = %d\n", n1, n2, n1 + n2);
    printf ("%d + %d = %d\n", n3, n4, n3 + n4);
    printf ("%d + %d = %d\n", n5, n6, n5 + n6);
    printf ("%d + %d = %d\n", n7, n8, n7 + n8);
    printf ("%d + %d = %d\n", n9, n10, n9 + n10);
    if (r1 == n1 + n2)
        i++;
    if (r2 == n3 + n4)
        i++;
    if (r3 == n5 + n6)
        i++;
    if (r4 == n7 + n8)
        i++;
    if (r5 == n9 + n10)
        i++;
    printf ("O aluno acertou %d vezes", i);
}
*/


/*  #Exercicio 30
void main() {
    float n1, n2, n3, aux;
    printf("Digite 3 numeros:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    if (n1 > n3) {
        aux = n3;
        n3 = n1;
        n1 = aux;
    }
    if (n1 > n2) {
        aux = n2;
        n2 = n1;
        n1 = aux;
    }
    if (n2 > n3) {
        aux = n3;
        n3 = n2;
        n2 = aux;
    }
    printf("%f %f %f", n1, n2, n3);
}
*/


/*  #Exercicio 31
void main(){
    float h, p;
    printf ("Digite a altura da pessoa:\n");
    scanf ("%f", &h);
    printf ("Digite o peso da pessoa:\n");
    scanf ("%f", &p);
    if (h < 1.2){
        if (p < 60)
            printf ("Classificacao A");
        else if ((p >= 60) && (p <= 90))
            printf ("Classificacao D");
        else
            printf ("Classificacao G");
    }
    else if ((h >= 1.2) && (h <= 1.7)){
        if (p < 60)
            printf ("Classificacao B");
        else if ((p >= 60) && (p <= 90))
            printf ("Classificacao E");
        else
            printf ("Classificacao H");
    }
    else{
        if (p < 60)
            printf ("Classificacao C");
        else if ((p >= 60) && (p <= 90))
            printf ("Classificacao F");
        else
            printf ("Classificacao I");
    }
}
*/


/*  #Exercicio 32
void main(){
    int cod, qtd;
    printf ("### Cardapio ###\n");
    printf ("Cachorro Quente: cod:100 preco:1.2\n");
    printf ("Bauru Simples:   cod:101 preco:1.3\n");
    printf ("Bauru com Ovo:   cod:102 preco:1.5\n");
    printf ("Hamburguer:      cod:103 preco:1.2\n");
    printf ("Cheeseburguer:   cod:104 preco:1.7\n");
    printf ("Suco:            cod:105 preco:2.2\n");
    printf ("Refrigerante:    cod:106 preco:1.0\n");
    printf ("Digite o codigo do produto:\n");
    scanf ("%d", &cod);
    if ((cod == 100) || (cod == 101) || (cod == 102) || (cod == 103) || (cod == 104) || (cod == 105) ||(cod == 106)){
    printf ("Digite a quantidade de produtos:\n");
    scanf ("%d", &qtd);
        switch (cod){
            case 100:
                printf ("Valor a ser pago: %f", qtd * 1.2);
                break;
            case 101:
                printf ("Valor a ser pago: %f", qtd * 1.3);
                break;
            case 102:
                printf ("Valor a ser pago: %f", qtd * 1.5);
                break;
            case 103:
                printf ("Valor a ser pago: %f", qtd * 1.2);
                break;
            case 104:
                printf ("Valor a ser pago: %f", qtd * 1.7);
                break;
            case 105:
                printf ("Valor a ser pago: %f", qtd * 2.2);
                break;
            case 106:
                printf ("Valor a ser pago: %f", qtd * 1.0);
                break;
        }
    }
    else
        printf ("Codigo invalido!");
}
*/


/*  #Exercicio 33
void main(){
    float p1, p2;
    printf ("Digite o preco:\n");
    scanf ("%f", &p1);
    if (p1 < 50){
        p2 = p1 * 1.05;
        printf ("Novo preco = %f\n", p2);
        printf ("Barato");
    }
    else if ((p1 >= 50) && (p1 <= 100)){
        p2 = p1 * 1.1;
        printf ("Novo preco = %f\n", p2);
        if (p2 < 80)
            printf ("Barato");
        else
            printf ("Normal");
    }
    else{
        p2 = p1 * 1.15;                                                         //É uma ma pratica deixar de colocar as condicoes e depender da ordem dos comandos?
        printf ("Novo preco = %f\n", p2);                                       //Ex: deixar de colocar o "&& >= 120" e colocar so "p2 < 200" já que se for menor que 120
        if (p2 <= 120)                                                          //    executara os comandos do primeiro if
            printf ("Normal");
        else if (p2 < 200)
            printf ("Caro");
        else 
            printf ("Muito caro");
    }
}
*/


/*  #Exercicio 34
void main(){
    float n;
    int f;
    printf ("Digite a nota do aluno:\n");
    scanf ("%f", &n);
    printf ("Digite o numero de faltas do aluno:\n");
    scanf ("%d", &f);
    if ((n >= 9.0) && (n <= 10.0)){
        if (f <= 20){
            printf ("Conceito A");
        }
        else
            printf ("Conceito B");
    }
    else if ((n < 9.0) && (n >= 7.5)){
        if (f <= 20){
            printf ("Conceito B");
        }
        else
            printf ("Conceito C");
    }
    else if ((n < 7.5) && (n >= 5.0)){
        if (f <= 20){
            printf ("Conceito C");
        }
        else
            printf ("Conceito D");
    }
    else if ((n >= 9) && (n <= 10)){
        if (f <= 20){
            printf ("Conceito D");
        }
        else
            printf ("Conceito E");
    }
    else if ((n >= 9) && (n <= 10)){
        if (f <= 20){
            printf ("Conceito E");
        }
        else
            printf ("Conceito F");
    }
}
*/


/*  #Exercicio 35
void main(){
    int d, m, a;
    printf ("Digite a data, com os termos separados por espaco:\n");
    scanf ("%d %d %d", &d, &m, &a);
    if (m <= 12){
        if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)){
            if (d <= 31){
                printf ("Data valida!");
            }
            else
                printf ("Data invalida!");
        }
        else if ((m == 4) || (m == 6) || (m == 9) || (m == 11)){
            if (d <= 30){
                printf ("Data valida!");
            }
            else
                printf ("Data invalida!");
        }
        else {
            if ((a % 400 == 0) || ((a % 4 == 0) && (a % 100 != 0))){
                if (d <= 29)
                    printf ("Data valida!");
                else
                    printf ("Data invalida!");
            }
            else{
                if (d <= 28)
                    printf ("Data valida!");
                else
                    printf ("Data invalida!");
            }
        }
    }
    else
        printf ("Data invalida!");
}
*/


/*  #Exercicio 36
void main(){
    float v;
    printf ("Digite o valor da venda:\n");
    scanf ("%f", &v);
    if (v < 20000)
        printf ("Comissao: %f", 400 + v * 0.14);
    else if ((v >= 20000) && (v < 40000))
        printf ("Comissao: %f", 500 + v * 0.14);
    else if ((v >= 40000) && (v < 60000))
        printf ("Comissao: %f", 550 + v * 0.14);
    else if ((v >= 60000) && (v < 80000))
        printf ("Comissao: %f", 600 + v * 0.14);
    else if ((v >= 80000) && (v < 100000))
        printf ("Comissao: %f", 650 + v * 0.14);
    else 
        printf ("Comissao: %f", 700 + v * 0.16);
}
*/


/*  #Exercicio 38
void main(){
    int d, m, a;
    printf ("Digite a data, com os termos separados por espaco:\n");
    scanf ("%d %d %d", &d, &m, &a);
    if ((m <= 12) && (a <= 2022)){
        if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)){
            if (d <= 31){
                printf ("Data valida!");
            }
            else
                printf ("Data invalida!");
        }
        else if ((m == 4) || (m == 6) || (m == 9) || (m == 11)){
            if (d <= 30){
                printf ("Data valida!");
            }
            else
                printf ("Data invalida!");
        }
        else {
            if ((a % 400 == 0) || ((a % 4 == 0) && (a % 100 != 0))){
                if (d <= 29)
                    printf ("Data valida!");
                else
                    printf ("Data invalida!");
            }
            else{
                if (d <= 28)
                    printf ("Data valida!");
                else
                    printf ("Data invalida!");
            }
        }
    }
    else
        printf ("Data invalida!");
}
*/


/*  #Exercicio 39
void main(){
    float s, t;
    printf ("Digite o salario atual do funcionario:\n");
    scanf ("%f", &s);
    printf ("Digite o numero de anos de trabalho do funcionario na empresa:\n");
    scanf ("%f", &t);
    if (s <= 500){
        if (t < 1)
            printf ("Salario reajustado: %f", s * 1.25);
        else if ((t >= 1) && (t < 3))
            printf ("Salario reajustado: %f", s * 1.25 + 100);
        else if ((t >= 3) && (t < 6))
            printf ("Salario reajustado: %f", s * 1.25 + 200);
        else if ((t >= 6) && (t < 10))
            printf ("Salario reajustado: %f", s * 1.25 + 300);
        else 
            printf ("Salario reajustado: %f", s * 1.25 + 500);
    }
    else if ((s > 500) && (s <= 1000)){
        if (t < 1)
            printf ("Salario reajustado: %f", s * 1.20);
        else if ((t >= 1) && (t < 3))
            printf ("Salario reajustado: %f", s * 1.20 + 100);
        else if ((t >= 3) && (t < 6))
            printf ("Salario reajustado: %f", s * 1.20 + 200);
        else if ((t >= 6) && (t < 10))
            printf ("Salario reajustado: %f", s * 1.20 + 300);
        else 
            printf ("Salario reajustado: %f", s * 1.20 + 500);
    }
    else if ((s > 1000) && (s <= 1500)){
        if (t < 1)
            printf ("Salario reajustado: %f", s * 1.15);
        else if ((t >= 1) && (t < 3))
            printf ("Salario reajustado: %f", s * 1.15 + 100);
        else if ((t >= 3) && (t < 6))
            printf ("Salario reajustado: %f", s * 1.15 + 200);
        else if ((t >= 6) && (t < 10))
            printf ("Salario reajustado: %f", s * 1.15 + 300);
        else 
            printf ("Salario reajustado: %f", s * 1.15 + 500);
    }
    else if ((s > 1500) && (s <= 2000)){
        if (t < 1)
            printf ("Salario reajustado: %f", s * 1.10);
        else if ((t >= 1) && (t < 3))
            printf ("Salario reajustado: %f", s * 1.10 + 100);
        else if ((t >= 3) && (t < 6))
            printf ("Salario reajustado: %f", s * 1.10 + 200);
        else if ((t >= 6) && (t < 10))
            printf ("Salario reajustado: %f", s * 1.10 + 300);
        else 
            printf ("Salario reajustado: %f", s * 1.10 + 500);
    }
    else{
        if (t < 1)
            printf ("Funcionario nao tem direito a nenhum aumento");
        else if ((t >= 1) && (t < 3))
            printf ("Salario reajustado: %f", 100);
        else if ((t >= 3) && (t < 6))
            printf ("Salario reajustado: %f", 200);
        else if ((t >= 6) && (t < 10))
            printf ("Salario reajustado: %f", 300);
        else 
            printf ("Salario reajustado: %f", 500);
    }
}
*/


/*  #Exercicio 40
void main(){
    float c;
    printf ("Digite o custo de fabrica:\n");
    scanf ("%f", &c);
    if (c <= 12000)
        printf ("Custo ao consumidor: %f", c * 1.05);
    else if ((c > 12000) && (c <= 25000))
        printf ("Custo ao consumidor: %f", c * 1.25);
    else
        printf ("Custo ao consumidor: %f", c * 1.35);
}
*/


/*  #Exercicio 41
void main(){
    float p, h;
    printf ("Digite o peso da pessoa:\n");
    scanf ("%f", &p);
    printf ("Digite a altura da pessoa:\n");
    scanf ("%f", &h);
    if ((p / h * h) < 18.5)
        printf ("Abaixo do peso");
    else if (((p / h * h) >= 18.5) && ((p / h * h) < 24.9))
        printf ("Saudavel");
    else if (((p / h * h) >= 24.9) && ((p / h * h) < 29.9))
        printf ("Peso em excesso");
    else if (((p / h * h) >= 29.9) && ((p / h * h) < 34.9))
        printf ("Obesidade grau 1)");
    else if (((p / h * h) >= 34.9) && ((p / h * h) < 39.9))
        printf ("Obesidade grau 2 (severa)");
    else
        printf ("Obesidade grau 3 (morbida)");
}
*/