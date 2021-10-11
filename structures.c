//
// Created by maxim on 11/10/2021.
//

//
// Created by maxim on 06/10/2021.
//
#include "structures.h"
#include <stdio.h>

NombreRationnel saisir(){
    NombreRationnel r;
    printf("Veuillez rentrer le numerateur et le denominateur!");
    scanf("%d %d",&r.numerateur,&r.denominateur);
    return r;
}

void afficherNombreRationnel(NombreRationnel r){
    printf("le rationnel est %d/%d",r.numerateur,r.denominateur);
}

NombreRationnel multiplication(NombreRationnel a,NombreRationnel b){
    NombreRationnel r;
    r.numerateur=a.numerateur*b.numerateur;
    r.denominateur=a.denominateur*b.denominateur;
    return r;

}

NombreRationnel addition(NombreRationnel a,NombreRationnel b){
    NombreRationnel r;
    r.numerateur=a.numerateur*b.denominateur+b.numerateur*a.denominateur;
    r.denominateur=a.denominateur*b.denominateur;
    return r;
}
