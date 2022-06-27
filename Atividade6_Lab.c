#include <stdio.h>
#include <string.h>


/*  #Exercicio 1
void main(){
    char str[50];
    printf ("Digite uma palavra:\n");
    gets(str);
    printf ("%s", str);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
}
*/


/*  #Exercicio 2
void main(){
    char str[50];
    int i, cont = 0;
    printf ("Digite zeros e uns:\n");
    gets(str);
    for (i = 0; i < strlen(str); i++){
        if (str[i] == '1')
            cont++;
    }
    printf ("Numero de 1's digitados: %d", cont);
}
*/


/*  #Exercicio 3
void main(){
    char str[20];
    int i;
    printf ("Digite uma palavra:\n");
    gets(str);
    for (i = strlen(str) - 1; i >= 0; i--)
        printf("%c", str[i]);
}
*/


/*  #Exercicio 4
void main(){
    char str[20], troca[20], c;
    int i, cont = 0;
    printf ("Digite uma palavra:\n");
    gets(str);
    setbuf(stdin,NULL);
    for (i = 0; i < strlen(str); i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            cont++;
        }
    }
    printf ("Foram digitadas %d vogais\n\n", cont);

    printf ("Digite um caractere:\n");
    scanf ("%c", &c); 
    setbuf(stdin,NULL);
    for (i = 0; i < strlen(str); i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str[i] = c;
        }
    }
    printf ("%s", str);
}
*/


/*  #Exercicio 5        
void main(){
    char str[30];
    int i;
    printf ("Digite uma palavra em maiusculo:\n");
    gets(str);
    for (i = 0; i < strlen(str); i++){
        str[i] = str[i] + 32;
    }
    printf ("Nova forma: %s", str);
}
*/



/*  #Exercicio 6
void main(){
    char str[30];
    int i;
    printf ("Digite uma palavra em minusculo:\n");
    gets(str);
    for (i = 0; i < strlen(str); i++){
        str[i] = str[i] - 32;
    }
    printf ("Nova forma: %s", str);
}
*/


/*  #Exercicio 7    
void main(){
    char str1[60], str2[60];
    int i, j = 0; 
    printf ("Digite uma frase:\n");                         
    gets(str1);
    setbuf(stdin,NULL);                                             
    for (i = 0; i < strlen(str1); i++){
        if (str1[i] == ' '){
            continue;
        }
        else{
            str2[j] = str1[i];
            j++;
        }
    }
    printf ("%s", str2);
}
*/


/*  #Exercicio 8
void main(){
    char str[20], L1, L2;
    int i, cont = 0;
    printf ("Digite uma palavra:\n");
    gets(str);
    setbuf(stdin,NULL);
    printf ("Digite uma letra:\n");
    scanf ("%c", &L1);
    setbuf(stdin,NULL);
    printf ("Digite outra letra:\n");
    scanf ("%c", &L2);
    setbuf(stdin,NULL);
    for (i = 0; i < strlen(str); i++){
        if (str[i] == L1){
            str[i] = L2;
            cont++;
        }
    }
    if (cont > 0){
        printf ("Trocando L1 por L:\n");
        printf ("%s", str);
    }
    else
        printf ("Essa letra nao pertence a palavra");
}
*/


/*  #Exercicio 9        ERRO
void main(){
    char modelo[6][15];
    float consumo[5], maior, L[5];
    int i, aux;
    for (i = 0; i < 5; i++){
        printf ("Digite o modelo do %do carro:\n", i+1);
        gets(modelo[i]);
        setbuf(stdin,NULL);
        printf ("Digite quantos km o %do carro faz com um litro de combustivel:\n", i+1);
        scanf ("%f", consumo[i]);
        setbuf(stdin,NULL);
    }

    maior = consumo[0];
    for (i = 0; i < 5; i++){
        if (consumo[i] > maior){
            printf ("Consumo %d: %f", i+1, consumo[i]);
            printf ("Maior: %f", maior);
            maior = consumo[i];
            aux = i;
            printf ("Maior: %f", maior);
        }
        L[i] = 1000.0 / consumo[i];
    }
    printf ("O modelo mais economico eh o %s\n", modelo[aux]);
    for (i = 0; i < 5; i++)
        printf ("O %do carro consome %.2f litros para percorrer 1000 km\n", i+1, L[i]);
}
*/


/*  #Exercicio 10
void main(){
    char merc[20];
    float valor;
    printf ("Digite o nome da mercadoria:\n");
    gets(merc);
    printf ("Digite o valor da mercadoria:\n");
    scanf ("%f", &valor);
    printf ("Mercadoria: %s\n");
    printf ("Valor total: %.2f\n", valor);
    printf ("Valor do desconto: %.2f\n", valor * 0.1);
    printf ("Valor a vista: %.2f\n", valor * 0.9);
}
*/


/*  #Exercicio 11
void main(){
    char S[30];
    int i, j;
    printf("Digite uma string:\n");
    gets(S);
    do{
        printf ("Digite o inicio do segmento:\n");
        scanf ("%d", &i);
    } 
    while(i < 0);
    do{
        printf ("Digite o fim do segmento:\n");
        scanf ("%d", &j);
    }
    while(j > strlen(S) - 1);
    for (i; i <= j; i++)
        printf ("%c", S[i]);
}
*/


/*  #Exercicio 12
void main(){
    char str[30];               //hx vr
    int i;
    printf ("Digite uma string:\n");
    gets(str);
    for (i = 0; i < strlen(str); i++){
        if (str[i] == ' ')
            printf ("%c", ' ');
        else
            printf ("%c", str[i] + 3);
    }
}
*/


/*  #Exercicio 13
void main(){
    char str[30];
    int i, cont = 0, len;
    printf ("Digite uma palavra:\n");
    gets(str);
    len = strlen(str) - 1;
    for (i = 0; i < strlen(str); i++){
        if (str[i] != str[len])
            cont++;
        len--;
    }
    if (cont > 0)
        printf ("A palavra '%s' nao eh um palindromo", str);
    else
        printf ("A palavra '%s' eh um palindromo", str);
}
*/


/*  #Exercicio 14           ERRO
void main(){
    char str1[20], str2[20];
    int i, j, N;
    printf ("Digite a string 1:\n");
    gets(str1);
    printf ("Digite a string 2:\n");
    gets(str2);
    printf ("Digite um inteiro positivo:\n");
    scanf ("%d",&N);
    if (strlen(str1) + N < 20){
        for(i = strlen(str1); i < strlen(str1) + N; i++){   
            for (j = 0; j < N; j++){                     
                str1[i] = str2[j];
                break;                  
            }
        }
    }
    else
        printf ("A string nao tem espaco suficiente para concatenar");
    str1[i] = '\0';
    printf ("%s", str1);
}
*/


/*  Exercicio 15
void main(){
    char S1[20], S2[20], menu, carac, C1, C2;
    int i, cont1 = 0, cont2 = 0, posi, tam, j;
    do{
        printf ("Escolha uma opcao");
        printf ("### MENU ###");
        printf ("(a) Ler uma string S1");
        printf ("(b) Imprimir o tamanho da string S1");
        printf ("(c) Comparar a string S1 com uma nova string S2 e imprimir o resultado");
        printf ("(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação");
        printf ("(e) Imprimir a string S1 de forma reversa");
        printf ("(f) Contar quantas vezes um dado caractere aparece na string S1");
        printf ("(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2");
        printf ("(h) Verificar se uma string S2 é substring de S1");
        printf ("(i) Retornar uma substring da string S1");
        printf ("(x) Fechar o programa");
        printf ("Opcao: ");
        scanf ("%c", &menu);
        switch(menu){
            case 'a':
                printf ("Digite uma string de ate 20 caracteres:\n");
                gets(S1);
                break;
            case 'b':
                printf ("S1 tem %d caracteres", strlen(S1));
                break;
            case 'c':
                printf ("Digite uma nova string:\n");
                gets(S2);
                printf ("Comparando as duas strings temos: %d", strcmp(S1, S2));
                break;
            case 'd':
                printf ("Digite uma nova string:\n");
                gets(S2);
                printf ("Concatenando as duas strings temos: %s", strcat(S1, S2));
                break;
            case 'e':
                printf ("Invertendo a string 1 temos:\n");
                for (i = strlen(S1); i >= 0; i--)
                    printf ("%c", S1[i]);
                break;
            case 'f':
                printf ("Digite um caractere:\n");
                for (i = strlen(S1); i >= 0; i--)
                    if (S1[i] == carac)
                        cont1++;
                printf ("O caractere %c aparece %d vezes na string", carac, cont1);
                break;
            case 'g':
                printf ("Digite o caractere que deseja substituir: ");
                scanf ("%c", &C1);
                printf ("Digite por qual caractere deseja substituir: ");
                scanf ("%c", &C2);
                for (i = 0; i < strlen(S1); i++)
                    if (S1[i] == C1){
                        S1[i] = C2;
                        break;
                    }
                break;
            case 'h':
                printf ("Digite outra string:\n");
                gets (S2);
                for (i = 0; i < strlen(S2); i++){
                    for (j = 0; j < strlen(S1); j++){
                        if (S1[j] == S2[i]){

                        }
                    }
                }
                break;
            case 'i':
                printf ("Digite a posicao na qual deve comecar a substring\n");
                scanf ("%d", &posi);
                printf ("Digite o tamanho da substring:\n");
                scanf ("&d", &tam);
                for (i = posi; i < posi + tam; i++){
                    printf ("%c", S1[i]);
                }
                break;
        }
    }
    while(menu =! 'x');
}
*/