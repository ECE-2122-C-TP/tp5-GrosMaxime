//
// Created by maxim on 11/10/2021.
//

#ifndef TP5_STRUCTURES_H
#define TP5_STRUCTURES_H

typedef struct{
    int numerateur,denominateur;
}NombreRationnel;

NombreRationnel saisir();
void afficherNombreRationnel(NombreRationnel r);

NombreRationnel multiplication(NombreRationnel a,NombreRationnel b);
NombreRationnel addition(NombreRationnel a,NombreRationnel b);

#endif //TP5_STRUCTURES_H
