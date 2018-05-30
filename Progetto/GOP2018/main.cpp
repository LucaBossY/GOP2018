//
//  main.cpp
//  GOP2018
//
//  Created by Luca Antonio Tovoli on 11/05/18.
//  Copyright © 2018 Luca Antonio Tovoli. All rights reserved.
//

#include <iostream>
#include "CaselleGenerator.hpp"
#include "PlayerGenerator.hpp"
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main (){
    srand (time(NULL)); // Per far funzionare seme tempo del rand

	int n_giocatori;

	cout << "Ciao, benvenuto in GOP, quanti sono i giocatori che partecipano alla partita?"
	cin << n_giocatori;
	generatore.giocatori(n_giocatori);


    //Genera il tabellone, in modo completamente casuale
    ptr_casella head;//Genero la testa del tabellone
    head=new casella;
    head=NULL;
    generatore_tabellone(head); //Chiama la funzione per generare il tabellone

	//generatore_carte();

	/* while (termina quandi si arriva alla fine del tabellone) {
		Stampa del tabellone ()
		Stampa riassunto della partita ()
		Lancia dado per ogni giocatore ()

		}


	*/

}
