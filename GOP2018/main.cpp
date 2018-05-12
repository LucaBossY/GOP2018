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
    
    ptr_casella head;//genero la testa del tabellone
    head=new casella;
    head=NULL;
    
    
    generatore_tabellone(head);
    stampa(head);
    
    
    
}
