//
//  main.cpp
//  GOP
//
//  Created by Luca Antonio Tovoli on 09/03/18.
//  Copyright © 2018 Luca Antonio Tovoli. All rights reserved.
//

#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

void add_casella (ptr_casella &head) { //Collegamento tra caselle, con generazione casuale della tipologia delle caselle
    if (head == NULL) {
        head = new casella ;
        head->numero=rand()%10; //Qui viene generata la tipologia di casella, una per ogni tipologia
        head->next = NULL ;
    }else{
        ptr_casella p;
        p=head;
        while (p->next!=NULL){
            p=p->next;
        }
        p->next = new casella;
        p = p->next;
        p->numero=rand()%10;; //Qui viene generata la tipologia di casella, una per ogni tipologia
        p->next = NULL;
    }



};

void stampa (ptr_casella p){ //funzione per stampare il contenuto della lista
    ptr_casella x=p;
    while (x !=NULL) {
        cout<<x->numero<<endl;
        x=x->next;
    }


}


void generatore_tabellone (ptr_casella &head) {
    int numero_caselle;
    int max; //Numero massimo di caselle generate;
    int min; //Numero massimo di caselle generate;

    min=40; max=80; //Numeri massimo e minimo di caselle
    numero_caselle=rand()%(max-min)+min; //Generazione numero casuali
    int i=0;
    for (i;numero_caselle>i;i++) {


        add_casella(head);
        i++;
    }

}

