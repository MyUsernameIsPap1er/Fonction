//Nouvelle fonction
//=========================================================
// 	hs pour nos étudiants en C
//=========================================================

/*	ce nouveau gabarit  vous initie au développement de
	fonctions simples

	il vous permettra de développer un petit
	algorithme dans un main ( avec son #if 1 )

	une fois le programme testé (breakpoint, F10,F11)
    on extrait l'algo de ce main pour en faire une fonction
	INDÉPENDANTE avec sa déclaration et sa définition

	vous testez bien sûr un premier appel de la nouvelle fonction
	dans l'autre main (inversez le 1 et le 0 dans les #if )
	ça marche bien, testez alors quelques appels différents

	maintenant vous êtes passablement assurées
	de la qualité de votre fonction
		jetez le contenu du premier main (qui est devenu inutile YES)
		et attaquez- vous à un autre algorithme de votre niveau
		très rapidement vous deviendrez bons et bonnes


*/

//=========================================================


//=========================================================
// voici qui permet de désactiver certains warnings stupides de Visual 
#define _CRT_SECURE_NO_WARNINGS 

/*=========================================================*/ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<assert.h>

/*=========================================================*/
// et on utilisera le twister 
#include "mtwister.h"
/*=========================================================*/


/*=========================================================*/
// PLACE DES DÉCLARATIONS DE FONCTIONS
/*=========================================================*/
//  réalisez une déclaration pour  chaque fonction
// aujourd'hui remplissez sommairement les commentaires
// j'en laisse 2 en gabarit, suffit de copier/coller

/*==========================================================*/
/* La fonction   (mettez son nom)
   donne ou réalise .... BLABLABLA

PARAMETRE(s): 

SORTIE: 

SPECS: 
*/

// votre vraie déclaration  exigée par le C vient ici


/*==========================================================*/

/*==========================================================*/
/* La fonction   (mettez son nom)
   donne ou réalise .... BLABLABLA

PARAMETRE(s):

SORTIE:

SPECS:
*/

// votre vraie déclaration  exigée par le C vient ici


/*==========================================================*/

/*=========================================================*/

/*just for fun, je vous laisse l'algo qui fait la somme  
  des resultats pairs en lancant plusieurs fois un dé */

#if 1
int main(void) {
	// variable libre
	// moi c'est ok pour 5000 
	// vous essairez plus ou moins si vous voulez
	int nb_lancers = 5000;

	// variables de travail
	int valeur_dice;
	int somme_pairs = 0;
	int iter_lancers = 0;

	mt_srandSys(); // j'initialise le twister

	// la boucle de simulation des lancers du dé
	while (iter_lancers < nb_lancers) {
		valeur_dice = mt_randi(6);

		//  on somme si le résultat est pair
		if ((valeur_dice % 2) == 0) {
			somme_pairs = somme_pairs + valeur_dice;
		}
		// incrémentation qui assure la boucle
		iter_lancers += 1;
	}

	// c'est fini, le  résultqat est dans la variable prévue
	return EXIT_SUCCESS;
}
#endif
//=========================================================



//=========================================================
// c'est dans celui-ci que vous testerez la nouvelle fonction
// vous comprenez :)

#if 0
int main(void) {











	return EXIT_SUCCESS;
}
#endif
//=========================================================


/*=========================================================*/
// PLACE DES DÉFINITIONS DE FONCTIONS
/*=========================================================*/




//=========================================================




//=========================================================




//=========================================================
 // C'EST FINI :(
//=========================================================
