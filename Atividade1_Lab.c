#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*    #Exercicio 1
int main()
{
    int nro;
    printf ("Digite um valor inteiro:\n");
    scanf("%d", &nro);
    printf("%d", nro);
    return 0;
}
*/


/*    #Exercicio 2
int main()
{
    float nro;
    printf ("Digite um valor real:");
    scanf("%f", &nro);
    printf("%d", nro);
    return 0;
}
*/


/*    #Exercicio 3
int main()
{
    int n1, n2, n3;
    printf ("Digite o primeiro numero inteiro:\n);
    scanf("%d", &n1);
    printf ("Digite o segundo numero inteiro:\n);
    scanf("%d", &n2);
    printf ("Digite o terceiro numero inteiro:\n);
    scanf("%d", &n3);
    printf("%d", n1 + n2 + n3);
    return 0;
}
*/


/*    #Exercicio 4
int main()
{
    float nro;
    printf ("Digite um valor real:\n");
    scanf("%f", &nro);
    printf("%f", nro * nro);
    return 0;
}
*/


/*    #Exercicio 5
int main()
{
    float nro;
    printf ("Digite um valor real:\n");
    scanf("%f", &nro);
    printf("%f", nro / 5);
    return 0;
}
*/


/*    #Exercicio 6
int main()
{
    float temp;
    printf ("Digite a temperatura em graus Celsius:\n");
    scanf("%f", &temp);
    printf("%f F", (temp * 9.0 / 5.0) + 32 );
    return 0;
}
*/


/*    #Exercicio 7
int main()
{
    float temp;
    printf ("Digite a temperatura em graus Fahrenheit:\n");
    scanf("%f", &temp);
    printf("%f C", 5.0 * (temp - 32.0) / 9.0);
    return 0;
}
*/


/*    #Exercicio 8
int main()
{
    float temp;
    printf ("Digite a temperatura em graus Kelvin:\n");
    scanf("%f", &temp);
    printf("%f C", temp - 273.15);
    return 0;
}
*/


/*    #Exercicio 9
int main()
{
    float temp;
    printf ("Digite a temperatura em graus Celsius:\n");
    scanf("%f", &temp);
    printf("%f K", temp + 273.15);
    return 0;
}
*/


/*    #Exercicio 10
int main()
{
    float v;
    printf ("Digite a velocidade em km/h:\n");
    scanf ("%f", &v);
    printf ("%f m/s", v / 3.6);
    return 0;
}
*/


/*    #Exercicio 11
int main()
{
    float v;
    printf ("Digite a velocidade em m/s:\n");
    scanf ("%f", &v);
    printf ("%f km/h", v * 3.6);
    return 0;
}
*/


/*    #Exercicio 12
int main()
{
    float v;
    printf ("Digite a distancia em milhas:\n");
    scanf ("%f", &v);
    printf ("%f km", v * 1.61);
    return 0;
}
*/


/*    #Exercicio 13
int main()
{
    float v;
    printf ("Digite a distancia em quilometros:\n");
    scanf ("%f", &v);
    printf ("%f mi", v / 1.61);
    return 0;
}
*/


/*    #Exercicio 14
int main()
{
    float ang;
    printf ("Digite o angulo em graus:\n");
    scanf ("%f", &ang);
    printf ("%f rad", ang * 3.141592 / 180);
    return 0;
}
*/


/*    #Exercicio 15
int main()
{
    float ang;
    printf ("Digite o angulo em radianos:\n");
    scanf ("%f", &ang);
    printf ("%f graus", ang * 180 / 3.141592);
    return 0;
}
*/


/*    #Exercicio 16
int main()
{
    float comp;
    printf ("Digite o comprimento em polegadas:\n");
    scanf ("%f", &comp);
    printf ("%f cm", comp * 2.54);
    return 0;
}
*/


/*    #Exercicio 17
int main()
{
    float comp;
    printf ("Digite o comprimento em centimetros:\n");
    scanf ("%f", &comp);
    printf ("%f polegadas", comp / 2.54);
    return 0;
}
*/


/*    #Exercicio 18
int main()
{
    float vol;
    printf ("Digite o volume em metros cubicos:\n");
    scanf ("%f", &vol);
    printf ("%f L", vol * 1000);
    return 0;
}
*/


/*    #Exercicio 19
int main()
{
    float vol;
    printf ("Digite o volume em litros cubicos:\n");
    scanf ("%f", &vol);
    printf ("%f m^3", vol / 1000);
    return 0;
}
*/


/*    #Exercicio 20
int main()
{
    float massa;
    printf ("Digite a massa em quilogramas:\n");
    scanf ("%f", &massa);
    printf ("%f lb", massa / 0.45);
    return 0;
}
*/


/*    #Exercicio 21
int main()
{
    float massa;
    printf ("Digite a massa em libras:\n");
    scanf ("%f", &massa);
    printf ("%f kg", massa * 0.45);
    return 0;
}
*/


/*    #Exercicio 22
int main()
{
    float comp;
    printf ("Digite o comprimento em jardas:\n");
    scanf ("%f", &comp);
    printf ("%f m", comp * 0.91);
    return 0;
}
*/


/*    #Exercicio 23
int main()
{
    float comp;
    printf ("Digite o comprimento em metros:\n");
    scanf ("%f", &comp);
    printf ("%f jardas", comp / 0.91);
    return 0;
}
*/


/*    #Exercicio 24
int main()
{
    float area;
    printf ("Digite a area em metros quadrados:\n");
    scanf ("%f", &area);
    printf ("%f acres", area * 0.000247);
    return 0;
}
*/


/*    #Exercicio 25
int main()
{
    float area;
    printf ("Digite a area em acres:\n");
    scanf ("%f", &area);
    printf ("%f m^2", area * 4048.58);
    return 0;
}
*/


/*    #Exercicio 26
int main()
{
    float area;
    printf ("Digite a area em metros quadrados:\n");
    scanf ("%f", &area);
    printf ("%f hectares", area * 0.0001);
    return 0;
}
*/


/*    #Exercicio 27
int main()
{
    float area;
    printf ("Digite a area em hectares:\n");
    scanf ("%f", &area);
    printf ("%f m^2", area * 1000);
    return 0;
}
*/


/*   #Exercicio 28
void main()
{
    float n1, n2, n3;
    printf ("Digite o primeiro valor:\n");
    scanf ("%f", &n1);
    printf ("Digite o segundoo valor:\n");
    scanf ("%f", &n2);
    printf ("Digite o terceiro valor:\n");
    scanf ("%f", &n3);
    printf ("%f", n1*n1 + n2*n2 + n3*n3);
}
*/


/*   #Exercicio 29
void main()
{
    float n1, n2, n3, n4, media;
    printf ("Digite a primeira nota:\n");
    scanf ("%f", &n1);
    printf ("Digite a segunda nota:\n");
    scanf ("%f", &n2);
    printf ("Digite a terceira nota:\n");
    scanf ("%f", &n3);
    printf ("Digite a quarta nota:\n");
    scanf ("%f", &n4);
    media = (n1 + n2 + n3 + n4) / 4.0;
    printf ("%f", media);
}
*/


/*   #Exercicio 30
void main()
{
    float real, cotacao;
    printf ("Digite um valor em real:\n");
    scanf ("%f", &real);
    printf ("Digite a cotacao do dolar:\n");
    scanf ("%f", &cotacao);
    printf ("%f", real * cotacao);
}
*/


/*   #Exercicio 31
void main()
{
    int nro;
    printf ("Digite um numero inteiro:\n");
    scanf ("%d", &nro);
    printf ("Antecessor: %d\n", nro - 1);
    printf ("Sucessor: %d\n", nro + 1);
}
*/


/*  #Exercicio 32
void main()
{
    int nro;
    printf ("Digite um numero inteiro:\n");
    scanf ("%d", &nro);
    printf ("%d",  ((3 * nro) +1) + ((2 * nro) - 1));
}
*/


/*  #Exercicio 33
void main()
{
    float lado;
    printf ("Digite o valor do lado do quadrado:\n");
    scanf ("%f", &lado);
    printf ("Area: %f", lado * lado);
}
*/


/*  #Exercicio 34
void main()
{
    float r;
    printf ("Digite o raio do circulo:\n");
    scanf ("%f", &r);
    printf ("Area: %f\n", r * r * 3.141592);
}
*/


/*  #Exercicio 35
void main()
{
    float a, b;
    printf ("Digite o primeiro cateto:\n");
    scanf ("%f", &a);
    printf ("Digite o segundo cateto:\n");
    scanf ("%f", &b);
    printf ("%f", sqrt(a * a + b * b));
}
*/


/*  #Exercicio 36
void main()
{
    float h, r;
    printf ("Digite a altura do cilindro:\n");
    scanf ("%f", &h);
    printf ("Digite o raio do cilindro:\n");
    scanf ("%f", &r);
    printf ("%f", 3.141592 * r * r * h);
}
*/


/*  #Exercicio 37
void main()
{
    float v;
    printf ("Digite o valor do produto:\n");
    scanf ("%f", &v);
    printf ("Valor com desconto: %f", v * 0.88);
}
*/


/*  #Exercicio 38
void main()
{
    float s;
    printf ("Digite o salario do funcionario:\n");
    scanf ("%f", &s);
    printf ("Novo salario: %f", s * 1.25);
}
*/


/*  #Exercicio 39
void main()
{
    int a, b, c;
    a = 780000 * 0.46;
    b = 780000 * 0.32;
    c = 780000 * 0.22;
    printf ("Primeiro ganhador: %d reais\n", a);
    printf ("Segundoo ganhador: %d reais\n", b);
    printf ("Terceiro ganhador: %d reais", c);
}
*/


/*  #Exercicio 40
void main()
{
    int d;
    printf ("Digite o numero de dias trabalhados: \n");
    scanf ("%d", &d);
    printf ("%d reais", d * 30 * 0.92);
}
*/


/*  #Exercicio 41
void main()
{
    float v, h;
    printf ("Digite o valor da hora de trabalho:\n")
    scanf ("%f", &v)
    printf ("Digite o numero de horas trabalhadas:\n");
    scanf ("%f", &h);
    printf ("%f reais", v * h * 1.1);
}
*/


/*  #Exercicio 42
void main()
{
    float s;
    printf ("Digite o salario do funcionario:\n");
    scanf ("%f", &s);
    printf ("%f reais", s * 0.98);
}
*/


/*  #Exercicio 43
void main()
{
    float v;
    printf ("Digite o valor desejado:\n");
    scanf ("%f", &v);
    printf ("Total a pagar com desconto de 10/100: %f reais", v * 0.9);
    printf ("Valor de cada parcela: %f reais", v / 3);
    printf ("Comissao do vendedor na venda a vista: %f reais", v * 0.9 * 0.05);
    printf ("Comissao do vendedor na venda parcelada: %f reais", v * 1.05);
}
*/


/*  #Exercicio 44     !!
void main()
{
    int d, h;
    printf ("Digite a altura do degrau:\n");
    scanf ("%d", &d);
    printf ("Digite a altura que deseja alcancar:\n");
    scanf ("%d", &h);
    if (h % d == 0){
        printf ("%d degraus", h / d);
    }
    else{
        printf ("%d degraus", (h / d) + 1);
    }
}
*/


/*  #Exercicio 45
void main()
{
    char a;
    printf ("Digite uma letra maiuscula:\n");
    scanf ("%c", &a);
    printf ("Letra minuscula: %c", a + 32);
}
*/


/*  #Exercicio 46
void main()
{
    char nro[4];
    printf ("Digite um numero inteiro positivo de tres digitos:\n");
    gets(nro);
    printf ("%c%c%c", nro[2], nro[1], nro[0]);
}
*/


/*  #Exercicio 47
void main()
{
    char nro[5];
    printf ("Digite um numero inteiro positivo de quatro digitos:\n");
    gets(nro);
    printf ("%c\n", nro[0]);
    printf ("%c\n", nro[1]);
    printf ("%c\n", nro[2]);
    printf ("%c\n", nro[3]);
}
*/


/*  #Exercicio 48
void main()
{
    int s, m, h, aux;
    printf ("Digite um valor inteiro em segundos:\n");
    scanf ("%d", &s);
    h = s / 3600;
    m = (s % 3600) / 60;
    aux = (s % 3600) % 60;
    printf ("%d h %d min %d s", h, m, aux);
}
*/


/*  #Exercicio 49    
void main()
{
    int inicio[3], duracao[3], termino[3] = {0, 0, 0};
    printf ("Digite o horario de inicio em horas, minutos e segundos:\n");
    scanf ("%d %d %d", &inicio[0], &inicio[1], &inicio[2]);
    printf ("Digite o tempo de duracao em horas, minutos e segundos:\n");
    scanf ("%d %d %d", &duracao[0], &duracao[1], &duracao[2]);
    if (inicio[2] + duracao[2] >= 60){
        termino[1] = 1;
        termino[2] = (inicio[2] + duracao[2]) % 60;
    }
    else
        termino[2] = inicio[2] + duracao[2];
    if (inicio[1] + duracao[1] + termino[1] >= 60){
        termino[0] = 1;
        termino[1] = (inicio[1] + duracao[1] + termino[1]) % 60;
    }
    else
        termino[1] = inicio[1] + duracao[1] + termino[1];
    termino[0] = inicio[0] + duracao[0] + termino[0];
    printf ("%d h %d min %d s", termino[0], termino[1], termino[2]);
}
*/


/*  #Exercicio 50
void main()
{
    int idade, ano;
    printf ("Digite a idade:\n");
    scanf ("%d", &idade);
    printf ("Digite o ano:\n");
    scanf ("%d", &ano);
    printf ("Ano de nascimento: %d", ano - idade);
}
*/


/*  #Exercicio 51
void main()
{
    float x, y;
    printf ("Digite o valor da cordenada x:\n");
    scanf ("%f", &x);
    printf ("Digite o valor da cordenada y:\n");
    scanf ("%f", &y);
    printf ("Distancia: %f", sqrt((x*x) + (y*y)));
}
*/


/*  #Exercicio 52
void main()
{
    float a1, a2, a3, premio;
    printf ("Digite o valor dado pelo amigo 1:\n");
    scanf ("%f", &a1);
    printf ("Digite o valor dado pelo amigo 2:\n");
    scanf ("%f", &a2);
    printf ("Digite o valor dado pelo amigo 3:\n");
    scanf ("%f", &a3);
    printf ("Digite o valor do premio:\n");
    scanf ("%f", &premio);
    printf ("Amigo 1 ganha: %f reais\n", a1 / (a1 + a2 + a3) * premio);
    printf ("Amigo 2 ganha: %f reais\n", a2 / (a1 + a2 + a3) * premio);
    printf ("Amigo 3 ganha: %f reais\n", a3 / (a1 + a2 + a3) * premio);
}

*/


/*  #Exercicio 53
void main()
{
    float c, l, p;
    printf ("Digite o comprimento do terreno:\n");
    scanf ("%f", &c);
    printf ("Digite a largura do terreno:\n");
    scanf ("%f", &l);
    printf ("Digite o preco do metro:\n");
    scanf ("%f", &p);
    printf ("Custo para cercar: %f reais",  (2 * c + 2 * l) * p);
}   
*/
