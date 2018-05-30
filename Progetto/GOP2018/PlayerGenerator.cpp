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

	void set_positione(int pos) //aggiorna la posizione del giocatore, posizione attuale + incremento di posizione.{
		posizione = posizione + pos;
	}


	giocatore(int x){
	posizione=0;
	numero=x;
	}

};

typedef giocatore* ptr_giocatore;



void GeneratoreGiocatori(int num) {
    double_llist player;

	for (int i=0;  i < num; i++)
	{

		giocatore* A = new giocatore(i);
        player.add_after(A);


	}



}
