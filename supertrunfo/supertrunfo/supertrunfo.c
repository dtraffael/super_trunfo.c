#include <stdio.h>
#include <locale.h>
#include <string.h>



int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    //declaraçao da carta A
    char Estado_A;
    char codigo_A [3];
    char cidade_A[50];
    int população_A;
    float área_A;
    int pontosturisticos_A;

    //declaraçao da carta B
    char Estado_B;
    char codigo_B [3];
    char cidade_B[50];
    int população_B;
    float área_B;
    int pontosturisticos_B;


    //entrada da carta A
    printf("Dados da Carta_A:                    \n");
    printf("Estado (A-H): ");
    scanf(" %c", &Estado_A);
    printf("Código da carta (ex: A01): ");
    scanf(" %s", codigo_A);
    printf("Cidade: ");
    scanf(" %s", cidade_A);
    printf("População: ");
    scanf(" %d", &população_A);
    printf("Área em km²:  ");
    scanf(" %s", &área_A);
    printf("Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos_A);
    
    printf("\n\n");
    
    //entrada da carta B
    printf("Dados da Carta_B: \n");
    printf("Estado (A-H): ");
    scanf(" %c", &Estado_B);
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo_B);
    printf("Cidade: ");
    scanf("%s", cidade_B);
    printf("População: ");
    scanf("%d", &população_B);
    printf("Área em km²:  ");
    scanf("%s", &área_B);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos_B);
    
    printf("\n\n");

    


    












}