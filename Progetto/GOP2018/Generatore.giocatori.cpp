//
//  Generatore.giocatori.hpp
//  GOP2018
//
//  Created by Luca Antonio Tovoli on 11/05/18.
//  Copyright © 2018 Luca Antonio Tovoli. All rights reserved.
//

#include <iostream>
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;






class giocatore {

private:
	int posizione, numero; //posizione del giocatore e numero crescente del giocatore

public:

	void set_positione(int pos) { //aggiorna la posizione del giocatore, posizione attuale + incremento di posizione.
		posizione = posizione + pos;
	}


	giocatore(int x){
	posizione=0;
	numero=x;
	}

};

typedef giocatore* ptr_giocatore;


struct bilista_giocatore { //Definisco la struttura dei giocatori

    giocatore player;
    bilista_giocatore *prec;
	bilista_giocatore *next;

};





void generatoregiocatori(int num) {

	for (int i=0;  i < num; i++)
	{

		ptr_giocatore B = new giocatore(i);

		coda.push(B);

	}



}
