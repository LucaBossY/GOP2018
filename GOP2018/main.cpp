//
//  main.cpp
//  GOP2018
//
//  Created by Luca Antonio Tovoli on 11/05/18.
//  Copyright © 2018 Luca Antonio Tovoli. All rights reserved.
//

#include <iostream>
#include "CaselleGenerator.hpp"
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

//TRYs
int main (){
    srand (time(NULL)); // Per far funzionare seme tempo del rand

	// generatore_giocatori(); funzione per creare i giocatore necessari


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
