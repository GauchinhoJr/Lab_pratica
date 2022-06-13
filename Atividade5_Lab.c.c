#include <stdio.h>
#include <time.h>

// ##VETORES##

/*  #Exercicio 1
void main()
{
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = A[0] + A[1] + A[5];
    printf ("A[1] + A[1] + A[1] = %d\n", soma);
    A[4] = 100;
    for (int i = 0; i < 6; i++){
        printf("%d\n", A[i]);
    }
}
*/


/*  #Exercicio 2
void main(){
    int vet[8], x, y;
    for (int i = 0; i < 8; i++){
        printf ("Digite o valor na posicao %d:\n", i);
        scanf ("%d", &vet[i]);
    }
    printf ("Digite o valor de x:\n");
    scanf ("%d", &x);
    printf ("Digite o valor de y:\n");
    scanf ("%d", &y);
    printf ("vet[%d] + vet[%d] = %d", x, y, vet[x] + vet[y]);
}
*/

/*  #Exercicio 3
void main(){
    int vet[6];
    for (int i = 0; i < 6; i++){
        printf ("Digite o %do valor:\n", i + 1);
        scanf ("%d", &vet[i]);
    }
    printf("\n");
    for (int i = 5; i >= 0; i--){
        printf ("%d\n", vet[i]);
    }
}
*/


/*  #Exercicio 4
void main(){
    float vet[5], maior, menor;
    int p_maior = 0, p_menor = 0;
    printf ("Digite o valor na posicao 0:\n");
    scanf ("%f", &vet[0]);
    maior = vet[0];
    menor = vet[0];
    for (int i = 1; i < 5; i++){
        printf ("Digite o valor na posicao %d:\n", i);
        scanf ("%f", &vet[i]);
        if (vet[i] > maior){
            maior = vet[i];
            p_maior = i;
        }
        else if (vet[i] < menor){
            menor = vet[i];
            p_menor = i;
        }
    }
    printf ("Posicao do maior: %d\n", p_maior);
    printf ("Posicao do menor: %d\n", p_menor);
}
*/


/*  #Exercicio 5
void main(){
    int vet[50];
    for (int i = 0; i < 50; i++){
        vet[i] =  (i+5*i)%(i+1);
    }
    for (int i = 0; i < 50; i++){
        printf ("vet[%d] = %d\n", i, vet[i]);
    }
}
*/


/*  #Exercicio 6
void main(){
    int vet[10], j, cont;
    for (int i = 0; i < 10; i++){
        printf ("Digite o valor na posicao %d:\n", i);
        scanf ("%d", &vet[i]);
    }
    for (int i = 0; i < 10; i++){
        cont = 0;
        for (j = 1; j <= vet[i]; j++){
            if (vet[i] % j == 0)
                cont++;
        }
        if (cont == 2)
            printf ("vet[%d] = %d eh primo\n", i, vet[i]);
    }
}
*/


/*  #Exercicio 7
void main(){
    int vet[6], cont_i = 0, soma_p = 0;
    for(int i = 0; i < 6; i++){
        printf ("Digite o valor na posicao %d:\n", i);
        scanf ("%d", &vet[i]);
        if (vet[i] % 2 == 0){
            soma_p += vet[i];
        }
        else{
            cont_i++;
        }
    }

    printf ("Numeros pares digitados:\n");
    for(int i = 0; i < 6; i++){
        if (vet[i] % 2 == 0)
            printf ("%d\n", vet[i]);
    }

    printf ("Soma dos numeros pares digitados: %d\n", soma_p);

    printf ("Numeros impares digitados:\n");
    for(int i = 0; i < 6; i++){
        if (vet[i] % 2 != 0)
            printf ("%d\n", vet[i]);
    }

    printf ("Quantidade de numeros impares digitados: %d", cont_i);
}
*/


/*  #Exercicio 8
void main(){
    int vet[10], i, j;
    for (i = 0; i < 10; i++){
        printf ("Digite o valor na posicao %d:\n", i);
        scanf ("%d", &vet[i]);
        for(j = 0; j < i; j++){
            if (vet[i] == vet[j]){
                printf ("Valor ja digitado\n\n");
                i--;
            }
        }
    }
    printf ("\n");
    for(int i = 0; i < 10; i++){
        printf ("%d\n", vet[i]);
    }
}
*/


//  ##MATRIZES##

/*  #Exercicio 1
void main(){
    float matriz[4][4];
    int i, j, cont = 0;
    for (i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf ("Digite o valor do elemento [%d][%d]:\n", i, j);
            scanf ("%f", &matriz[i][j]);
            if (matriz[i][j] > 10)
                cont++;
        }
    }
    printf ("A matriz possui %d valores maiores do que 10", cont);
}
*/


/*  #Exercicio 2
void main(){
    int matriz[5][5], i, j;
    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if (i == j)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf ("%d", matriz[i][j]);
        }
        printf ("\n");
    }
}
*/


/*  #Exercicio 3
void main(){
    float matriz[4][4], maior;
    int i, j, posicao_i, posicao_j;
    printf ("Digite o valor do elemento [0][0]:\n");
    scanf ("%f", &matriz[0][0]);
    maior = matriz[0][0];
    for (i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf ("Digite o valor do elemento [%d][%d]:\n", i, j);
            scanf ("%f", &matriz[i][j]);
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
                posicao_i = i;
                posicao_j = j;
            }
        }
    }
    for (i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf ("%.2f  ", matriz[i][j]);
        }
        printf ("\n");
    }
    printf ("Maior valor = matriz[%d][%d] = %.2f", posicao_i, posicao_j, maior);
}
*/


/*  #Exercicio 4
void main(){
    int matriz[5][5], i, j, cont = 0, linha, coluna, x;
    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf ("Digite o valor do elemento [%d][%d]:\n", i, j);
            scanf ("%d", &matriz[i][j]);
        }
    }
    printf ("Digite um valor x:\n");
    scanf ("%d", &x);
    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if (matriz[i][j] == x){
                linha = i;
                coluna = j;
                cont++;
            }
        }
    }
    if (cont > 0)
        printf ("x = matriz[%d][%d] = %d", linha, coluna, x);
    else
        printf ("Nao encontrado");
}
*/


/*  #Exercicio 5
void main(){
    int matriz[10][10], i, j;
    for (i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if (i < j)
                matriz[i][j] = (2*i) + (7*j) - 2;
            else if (i = j)
                matriz[i][j] = (3*i) - 1;
            else 
                matriz[i][j] = (4*i*i*i) - (5*j*j) + 1;
        }
    }
    for (i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf ("%d ", matriz[i][j]);
        }
        printf ("\n");
    }
}
*/


/*  #Exercicio 6
void main(){
    int m1[4][4], m2[4][4], i, j;
    srand(time(NULL));
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            m1[i][j] = (rand() % 20) + 1; 
        }
    }
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
                if (i < j)
                    m2[i][j] = 0;
                else
                   m2[i][j] = m1[i][j];
        }
    }
    printf ("Matriz original:\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf ("%2d ", m1[i][j]);
        }
        printf ("\n");
    }
    printf ("\nMatriz transformada:\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf ("%2d ", m2[i][j]);
        }
        printf ("\n");
    }
}
*/


/*  #Exercicio 8
void main(){
    float m1[2][2], m2[2][2];
    int i, j, c;
    char menu;
    srand(time(NULL));
    printf ("Matriz 1:\n");
    for (i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf ("Digite o valor do elemento [%d][%d]:\n", i, j);
            scanf ("%f", &m1[i][j]);
        }
    }
    printf ("\nMatriz 2:\n");
    for (i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf ("Digite o valor do elemento [%d][%d]:\n", i, j);
            scanf ("%f", &m2[i][j]);
        }
    }
    fflush(stdin);
    printf ("\n## Menu de opcoes ##\n");
    printf ("a) somar as duas matrizes\n");
    printf ("b) subtrair a primeira matriz da segunda\n");
    printf ("c) adicionar uma constante as duas matrizes\n");
    printf ("d) imprimir as matrizes\n");
    printf ("Opcao:\n");
    scanf ("%c", &menu);

    if (menu == 'a'){
        printf ("Matriz 1 + Matriz 2:\n");
        for (i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                printf ("%.2f ", m1[i][j] + m2[i][j]);
            }
            printf ("\n");
        }
    }
    else if (menu == 'b'){
        printf ("Matriz 2 - Matriz 1:\n");
        for (i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                printf ("%.2f ", m2[i][j] - m1[i][j]);
            }
            printf ("\n");
        }
    }
    else if (menu == 'c'){
        c = rand() % 10 + 1;
        printf ("Matriz 1 + %d:\n", c);
        for (i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                printf ("%.2f ", m1[i][j] + c);
            }
            printf ("\n");
        }
        printf ("Matriz 2 + %d:\n", c);
        for (i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                printf ("%.2f ", m2[i][j] + c);
            }
            printf ("\n");
        }
    }
    else if (menu == 'd'){
        printf ("Matriz 1:\n");
        for (i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                printf ("%.2f ", m1[i][j]);
            }
            printf ("\n");
        }
        printf ("\nMatriz 2:\n");
        for (i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                printf ("%.2f ", m2[i][j]);
            }
            printf ("\n");
        }
    }
    else
        printf ("Opcao invalida!");
}
*/