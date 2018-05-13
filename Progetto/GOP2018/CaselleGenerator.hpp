#ifndef CASELLEGENERATOR_HPP_INCLUDED
#define CASELLEGENERATOR_HPP_INCLUDED

struct casella { //Definisco la struttura
    int numero;
    int tipologia_casella;

    casella *next;

};

typedef casella* ptr_casella;


void add_casella (ptr_casella &head);

void stampa (ptr_casella p);

void generatore_tabellone (ptr_casella &head);


#endif // CASELLEGENERATOR_HPP_INCLUDED
