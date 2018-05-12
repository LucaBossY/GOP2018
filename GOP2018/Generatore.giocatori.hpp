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


struct giocatore { //Definisco la struttura del giocatore
	int numero;
	int tipologia_giocatore;

	giocatore *next;

};

typedef giocatore* ptr_giocatore;


void add_giocatore(ptr_giocatore &head) { //Collegamento tra giocatori, tra il primo ed l'ultimo
	if (head == NULL) {
		head = new giocatore;
		head->next = NULL;
	}
	else {
		ptr_giocatore p;
		p = head;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = new giocatore;
		p = p->next;
		p->next = NULL;
	}



};





void generatore_tabellone(ptr_giocatore &head, int ngiocatori) {
	int numero_giocatori=ngiocatori;

	
	int i = 0;
	for (i; numero_giocatori>i; i++) {


		add_giocatore(head);
		i++;
	}

}

