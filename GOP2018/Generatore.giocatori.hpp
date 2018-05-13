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
	char nome[20];			//nome del giocatore

public:
	void set_positione(int pos) { //aggiorna la posizione del giocatore, posizione attuale + incremento di posizione.
		posizione = posizione + pos;
	}

	void set_numero(int num) { numero = num } //il numero è inserito dal costruttore

};


struct lista_giocatore { //Definisco la struttura dei giocatori
	//????;

	lista_giocatore *next;

};




void generatore.giocatori(int num) {

	for (int i=0;  i < num; i++)
	{
		giocatore (0, i,);



	}




}