//
// Created by maxim on 06/10/2021.
//
#include "structures.h"
#include "exercice.h"
#include <stdio.h>
#define DIMENSION_TABLEAU 100
#define NB_LIGNES 3
#define NB_COLONNES 4

void exercice1(){
    NombreRationnel nbr1=saisir();
    NombreRationnel nbr2=saisir();
    NombreRationnel m=multiplication(nbr1,nbr2);
    NombreRationnel a= addition(nbr1,nbr2);
    printf("La multiplication des nombres rationnels nbr1 et nbr2 est : %NombreRationnel \n l addition est:"
           "%NombreRationnel",m,a);



}

void exercice2(){
    int i=0;
    int nbrEntier=0;
    int plusGrandEntier=0;
    do{
        printf("Veuillez entrer le nombre d'entier dans le tableau !\n");
        scanf("%d",&nbrEntier);
    }while(nbrEntier>DIMENSION_TABLEAU);
    int tableau[nbrEntier];
    for (i=0;i<=nbrEntier-1;i++){
        printf("Veuillez entrer le %d entier dans le tableau !\n",i);
        scanf("%d",&tableau[i]);
    }
    for(i=0;i<=nbrEntier-1;i++){
        if(plusGrandEntier<tableau[i]){
            plusGrandEntier=tableau[i];
        }
    }
    printf("Le plus grand entier du tableau est %d",plusGrandEntier);

}

void exercice3(){
    int i=0,j=0,entier1D=0;
    int tableau2D[NB_LIGNES][NB_COLONNES]={{0}};
    int tableau1D[12]={0};
    for (i=0;i<NB_LIGNES;i++){
        for (j=0;j<NB_COLONNES;j++){
            printf("Veuillez entrer la %d valeur",i);
            scanf("%d",&tableau2D[i][j]);
        }
    }
    for(i=0;i<NB_LIGNES;i++){
        for (j=0;j<NB_COLONNES;j++){
            printf("%d\t",tableau2D[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<NB_LIGNES;i++){
        for (j=0;j<NB_COLONNES;j++){
            tableau1D[entier1D]=tableau2D[i][j];
            entier1D++;
        }
    }
    for(entier1D=0;entier1D<12;entier1D++){
        printf("%d\t",tableau1D[entier1D]);
    }




}