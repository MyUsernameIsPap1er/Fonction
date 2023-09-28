//=========================================================
// 	hs pour nos étudiants en C
//=========================================================

/*	ce gabarit d'un programme en première semaine de C
	contient deux main, vous comprenez qu'il est IMPOSSIBLE
	qu'ils soient tous  deux simultanement actifs

	j'utilise un artifice de PRÉ-COMPILATION  pour qu'en fait
	le compilateur n'en voit qu'un à la fois lors de la compilation

	c'est simple, agréable
	ainsi vous pourrez écrire, tester et échanger rapidement 
	vos premières expériences en conception d'algorithmes

	vous avez bien des exercices à réaliser cette semaine
	vous n'allez tout  de même pas générer un fichier pour chacun

	et surtout n'oubliez pas,
	du code correct mais sans indication dans l' en-tête du problème 
	résolu, sans commentaires ni  identificateurs représentatifs
	ça vaut quoi??? je réponds même pas!
*/

/* 
je vous entraine déjà :)
ce commentaire d'intro servira  lors de l'écriture 
de tout code et travaux
--vous n'y comprendrez pas tout aujourd'hui--

 Auteur / Autrice :
 Date :

 description générale du programme
  ici plein du bla bla ESSENTIEL À TOUT CLIENT ÉVENTUEL 
  pensez à satisfaire un patron irascible, un client  sociopathe

  chaque  élément doit être décrit 
  de façon simple et standardisée
  on fait pas dans l'impressionnisme

  cette semaine pensez à copier/coller et remplir 
  avant chaque main qui veut  résoudre un exercice 
*/

//=========================================================



//=========================================================
// voici qui permet de désactiver certains warnings stupides de Visual 
#define _CRT_SECURE_NO_WARNINGS 
/*=========================================================*/

/*=========================================================*/
// pour bien débuter,  voici les librairies usuelles à inclure 
/*=========================================================*/ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<assert.h>

/*=======================Et mtwister==================================*/
#include"mtwister.h"
/*=========================================================*/
/* LES CONSTANTES */
/*=========================================================*/
// vous en aurez, voici un endroit pour les introduire 

/* by gentlemen's agreement

   un identificateur TOUT EN MAJUSCULES
   est celui et que celui d'une constante
   vous ne dérogerez JAMAIS à ce diktat
*/
//=========================================================



//=========================================================
//=========================================================
// L'artifice de pré-compilation
// avec le 1 suivant le  #if, ce main est actuellement actif
#if 0
int main(void){
	int valeur_dice;
	int somme_pairs = 0;
	int cpt_lancer = 0;


	mt_srandSys(); //initialisation de twister

	while (cpt_lancer < 12) {

		valeur_dice = mt_randi(6);

		if ((valeur_dice % 2) == 0) {
			somme_pairs = somme_pairs + valeur_dice;
		}
		cpt_lancer += 1;
	}



	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================




//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	int n1 = 156;
	int n2 = 2830;
	int r;
	r = n1 % n2;

	while (r) {
		n1 = n2;
		n2 = r;
		r = n1 % n2;
	}








	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================

//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	int n1 = 65426151362;
	int som_chiffre = 0;
	

	while (n1) {
		int unit = n1 % 10;
		if (unit >= 6) {
			som_chiffre += unit;
		}
		n1 /= 10;
	}








	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================



//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {
	/*
	Faire la somme  de l’inverse multiplicatif des entiers dans
	l’intervalle [ -12, 55] (l’inverse multiplicatif de x est 1/x et
	attention si 0 apparait dans l’intervalle donné )
	*/
	//initialise le compteur initiale pour les operations a suivre
	int cpt = -12;
	//initialise l'endoit ou nous ferons nos calculs
	int smminvmult = 0;
	//les operation seront performer dans le "while" loop..
	//et vont etre ajuster pour satisfaire toute les conditions...
	//necessaire...
	//on veut 0 a 55 parce que nous allons sauter cpt = 0, le nb...
	//de loop totale va pas etre egale a 66 mais 65...
	while (cpt<55){
		//ici le if pour sauter cpt = 0 et pas provoquer d'erreur...
		//mathematique.
		if (cpt == 0) {
			cpt += cpt;
		}
		//sort du if
		int invmult = 1 / cpt;
		//on initialise la somme des inverses multiplicatif a 0
		//mais pas necessaire... je crois*...
		smminvmult = smminvmult + invmult;
		//incrementation de l'entier cpt
		cpt += cpt;
	}






	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================


//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {
	/*
	Compter les entiers dans un intervalle entier qui sont 
	multiples de 11 et dont le cosinus est supérieur à 0.28467711.
	prenez [ 101, 2058995] par exemple 
	*/
	//initialise le compteur a 11 
	int cpt = 11;
	//initialise l'endroit ou nous allons faire notre calcul
	//dans le probleme precedent j'ai initialiser ca dans mon "while"...
	//j'avais evidemment pas le bon resultat...
	int bon_chiffre = 0;
	//fini le compte a ... ce numero...
	while (cpt < 651616951621198) {
		//verifie les conditions
		if ((cpt % 11) == 0 && cos(cpt) >0.18467711){
				//cpt est valider:on peut le compter
			bon_chiffre += bon_chiffre;
		}
	}
	//le code pourrait etre optimiser pour n'avoir quun seul "if"...
	//si on avait un operateur"ET"qui donnerait "1" seulement si...
	//les deux inegalite etaient vraies






	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================


//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {
	/*
	Trouver la moyenne  du sinus des entiers dans un intervalle
	entier que vous définissez. Prenez d’abord un petit intervalle
	puis deux très grands….puis observez vos résultats
	*/
	int cpt = -50;
	int nb_cpt = 0;
	int somme_sin = 0;
	//tout les variables necessaire sont initialiser
	while (cpt < 65135) {
		//le sin du chiffre dans int cpt
		int sincpt = sin(cpt);
		//on somme sincpt et incremente cpt et on increment nb_cpt pour savoir le nb de loop
		somme_sin = somme_sin + sincpt;
		nb_cpt += nb_cpt;
		cpt += cpt;
	}
	//une fois sorti de la loop on fait le calcul de moyenne 
	int moyennesin = somme_sin / nb_cpt; 






	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================


//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*
	Faire la somme des chiffres d’un entier : ex  5067220 donne 22

	*/
	//entier au choix
	int entier = 919569516218;
	//somme des digits
	int smm_digit = 0;
	//les variables necessaire sont initialiser
	while(entier){
		//on sort le digit le plus a droite avec %10
		int digit = entier % 10;
		//on somme digit
		smm_digit = smm_digit + digit
		//on divise par 10 un "int", ca lui fait perdre le premier digit
		entier = entier / 10;
	}



	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================






//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*
	Faire le produit des digits non nuls d’un entier (5067220 donne 840)


	*/
	//entier au choix
	int entier = 919569516218;
	//initialise la variable pour le produit
	int prod_digit = 1;
	while (entier) {
		//on sort le premier digit avec %10
		int digit = entier % 10;
		//on surveille si digit /= 0
		if (digit) {
			//si le digit est non-nul on fait le produit 
			prod_digit = prod_digit * digit;
		}
		//on divise par 10 pour retirer le premier digit
		entier = entier / 10;
	}



	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================






//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*
	Compter  les occurrences d’un chiffre particulier dans un entier


	*/
	//entier au choix
	int entier = 919569516218;
	//cpt de chiffre particulier au choix
	int cpt_de_six = 0;
	//on loop jusqua avoir 0
	while (entier) {
		//on sort le premier digit
		int digit = entier % 10;
		//on surveille si le digit est = 6 
		if (digit == 6) {
			//s'il l'est on incremente notre compteur de condition atteinte
			cpt_de_six += cpt_de_six;
		}
		//on sort du if et on retire le premier digit
		entier = entier / 10;
	}



	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================






//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*
	Compter le nombre de chiffres impairs dans un entier
	(506571 donne  4)
	*/
	//entier au choix
	int entier = 919569516218;
	//compteur de digit impair
	int cptdigit_impair = 0;
	//loop jusqua avoir 0
	while (entier) {
		//on sort le premier digit avec %10
		int digit = entier % 10;
		//on surveille si digit est un diviseur de deux: s'il ne l'est pas, le resultat sera 1, le if operera
		if (digit % 2){
			//on incremente notre compteur de condition atteinte
			cptdigit_impair += cptdigit_impair;
		}
		//on retire le premier digit
		entier = entier / 10;
	}



	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================






//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*
	Avec un N entier, constant et très grand, 
	faire émettre un nombre pseudo aléatoire  dans
	l’intervalle  [1 , N]    pour obtenir la proportion
	de chiffres impairs de cet entier
	*/
	//on initialise meserene twister
	unsigned long mt_srandSys(void);
	//entier au choix
	int entier = 919569516218;
	//on genere un entier entre 1 et l'entier "entier"
	int entier_alea = 	mt_randi(int entier);
	//compteur de digit impair
	int cpt_digitimp = 0;
	//compeur de digit surveiller
	int cpt_digit = 0;
	//on while notre entier aleatoire (peut etre changer le titre de cette variable pour eviter...
	//de ce melanger avec l'entier "entier"...
	while (entieralea) {
		//on sort le premier digit de l'entier generer
		int digit = entieralea	% 10;
		//on surveille si ce digit est impair(probleme precedent explique la technique avec modulo 2)
		if (digit % 2) {
			//on increment le compteur de condition atteinte
			cpt_digitimp += cpt_digitimp;
		}
		//on sort du if
		//on incremente le compteur de digit
		cpt_digit += cpt_digit;
		//on retire le premier digit
		entieralea	= entieralea/ 10;
	}
	//une fois sorti du while loop on fait le ratio de digit pour chaque digit impair (quand le nombre de digit tend vers l'inifini le resultat 
	//tend (*proportion_digitimp*) vers 2 **je crois**
	double proportion_digitimp = cpt_digit / cpt_digitimp;


	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================






//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*
	Répéter plus de 1000 fois l’expérience 5 
	et faites la moyenne des proportions obtenus

	*/
	//on initialize meserene twister
	unsigned long mt_srandSys(void);
	//notre compteur d'experience (au choix): on va decrementer parce que choisir cette valeur requiert le 
	// moin de changement dans les choix de variables
	int cpt_expsix = 1000;
	//on reutilise notre valeur choisi pour faire nore calcul de moyenne
	double div_moyenne = cpt_expsix;
	//somme de proportion calculer
	double smm_propor = 0;
	//l'experience #6 commence a partir de ce while
	while (cpt_expsix) {
		//entier au choix
		int entier = 919569516218;
		//entier aleatoire generer entre 1 et l'entier choisi
		int entieralea =	mt_randi(int entier);
		//compteur de digit impair initializer a 0 a chaque experience
		int cpt_digitimp = 0;
		//compteur de digit initializer a 0 a chaque experience
		int cpt_digit = 0;
		while (entieralea) {
			//on sort le premier digit
			int digit = entieralea	% 10;
			//on surveille s'il est impair
			if (digit % 2) {
				//condition atteinte: on incremente
				cpt_digitimp += cpt_digitimp;
			}
			//sort du if: un digit a ete surveiller
			cpt_digit += cpt_digit;
			//on retire le premier digit
			entieralea	= entieralea/ 10;
		}
		//"entieralea" a ete analyzer on fait sa proportion
		double propor_digitimp = cpt_digit / cpt_digitimp;
		//on ajoute cette proportion a notre somme de proportion pour notre futur calcul de moyenne
		smm_propor = smm_propor + propor_digitimp;
		//on decremente le nombre dexperience #6 a faire jusqua 0
		cpt_expsix -= cpt_expsix;
	}
	//on a completer le nb d'experience #6 choisi
	double moypropor_digitimp = smm_propor / div_moyenne;

	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================






//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*
	Extraire dans un entier  tous les chiffres impairs 
	pour former un autre entier,  par exemple : 4458167223
	nous donnera 5173 ( attention un peu plus difficile)

	*/
	//entier au choix
	int entier = 15218;
	//valeur qui sera contruite
	int valeur_imp = 0;
	//outil de construction qui sera une puissance de 10
	int puissance = 0;
	
	while (entier) {
		//on sort le premier digit
		int digit = entier % 10;
		//on surveille s'il est impair
		if (digit % 2) {
			valeur_imp = valeur_imp + (digit * pow( 10, puissance));
			puissance ++ ;
		}
		entier = entier / 10;
	}


	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================






//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*
	Compter le nombre de diviseurs d’un entier donné

	*/
	int entier = 9516218;
	//diviseur a incrementer
	int diviseur = 1;
	//compteur de diviseur
	int cpt_div = 0;
	//on incremente jusqua lentier choisi
	while (diviseur <= entier) {
		//on calcule le modulo
		modulo = entier % diviseur;
		//si le modulo est 0 le "diviseur"
		//est un diviseur
		if (modulo == 0) {
			//on increment notre compteur
			++ cpt_div  ;
		}
		//on passe au prochain diviseur
		++ diviseur;
	}



	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================






//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*
	Tester si un entier donné est premier
	(son nombre de diviseurs doit être 2)
	*/
	int entier = 9516218;
	//diviseur a incrementer
	int diviseur = 1;
	//compteur de diviseur
	int cpt_div = 0;
	//on incremente jusqua lentier choisi
	while (diviseur <= entier) {
		//on calcule le modulo
		modulo = entier % diviseur;
		//si le modulo est 0 le "diviseur"
		//est un diviseur
		if (modulo == 0) {
			//on increment notre compteur
			cpt_div++;
		}
		//on passe au prochain diviseur
		diviseur++;
	}
	int est_prem = 0;
	if (cpt_div == 2) {
		est_prem = 1;
	}


	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================






//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*
	Faire la somme des diviseurs d’un entier 


	*/
	//entier au choix
	int entier = 9516218;
	//diviseur a incrementer
	int diviseur = 1;
	//compteur de diviseur
	int cpt_div = 0;
	//somme des diviseurs
	int smm_div = 0;
	//on incremente jusqua lentier choisi
	while (diviseur <= entier) {
		//on calcule le modulo
		modulo = entier % diviseur;
		//si le modulo est 0 le "diviseur"
		//est un diviseur
		if (modulo == 0) {
			//on somme le diviseur
			smm_div += diviseur;
			//on increment notre compteur
			cpt_div++;
		}
		//on passe au prochain diviseur
		diviseur++;
	}
	


	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================






//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*
	Avec  N entier constant et très grand, 
	faire émettre un nombre pseudo aléatoire  dans 
	l’intervalle [1 , N] et tester s’il est premier


	*/
	unsigned long mt_srandSys(void);
	//entier au choix
	int entier = 9516218;
	//on genere un entier entre 1 et l'entier "entier"
	int entier_alea = mt_randi(int entier);
	//premier diviseur
	int diviseur = 1;
	//compteur de diviseur
	int cpt_div = 0;
	//on incremente jusqua lentier generer
	while (diviseur <= entieralea) {
		//on calcule le modulo
		modulo = entieralea % diviseur;
		//si le modulo est 0 le "diviseur"
		//est un diviseur
		if (modulo == 0) {
			//on increment notre compteur
			cpt_div++;
		}
		//on passe au prochain diviseur
		diviseur++;
	}
	int est_prem = 0;
	if (cpt_div == 2) {
		est_prem = 1;
	}




	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================






//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*
	Obtenir le prochain nombre premier supérieur à un entier
	donné (c’est la très classique fonction nextprime des logiciels
	de mathématiques, votre première boucle imbriquée)


	*/
	//entier choisi
	int entier = 9516218;
	int est_premier = 0;
	int prochain = entier + 1;
	while (est_premier==0){
	//compteur de diviseur
	
		int cpt_div = 0;
	
	

	//savoir le nombre de diviseurs
	
		int diviseur = 1; 
	
		int nb_div = 0;
	
		while (diviseur <= prochain) {
			int modulo;
			modulo = prochain % diviseur;
			if (modulo == 0) {
				nb_div += 1;
			}
			diviseur += 1;
		}

		//voir si le nombre de diviseurs est egal a 2

		if (nb_div == 2) {
			est_premier = 1;
		}
		else
			prochain += 1;
	}
	//si oui arreter 
	//si non passer au prochain entier








	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================






//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*

	Dans un intervalle donné, trouver l’entier
	ayant un maximum de diviseurs
	*/
	int entier = 415;
	int divprime = 0;
	int nb_divprime = 0;
	while (entier<9265) {
		//compteur de diviseur

		int cpt_div = 0;



		//savoir le nombre de diviseurs

		int diviseur = 1;

		int nb_div = 0;

		while (diviseur <= entier) {
			int modulo;
			modulo = entier % diviseur;
			if (modulo == 0) {
				nb_div += 1;
			}
			diviseur += 1;
		}

		//voir si le nombre de diviseurs est egal a 2

		if (nb_div>nb_divprime) {
			nb_divprime=nb_div;
			divprime=diviseur;
			
		}
		entier += 1;
		
	}
	//si oui arreter 
	//si non passer au prochain entier



	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================






//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*
	Répéter 12000 fois l’exercice 4  pour estimer
	la proportion de nombres premiers inférieurs à
	N. (une proportion est estimée par le nombre de
	succès divisé par le nombre d’essais)
	*/
	int cpt = 0;
	int cpt_premier = 0;
	int s = 13;
	mt_srandSys();
	//entier au choix
	int entier = 10;
	while (cpt < 15) {

		
		//on genere un entier entre 1 et l'entier "entier"
		int entier_alea = mt_randi(entier);
		//premier diviseur
		int diviseur = 1;
		//compteur de diviseur
		int cpt_div = 0;
		//on incremente jusqua lentier generer
		while (diviseur <= entier_alea) {
			//on calcule le modulo
			int modulo = 1;
			modulo = entier_alea % diviseur;
			//si le modulo est 0 le "diviseur"
			//est un diviseur
			if (modulo == 0) {
				//on increment notre compteur
				cpt_div +=1;
			}
			//on passe au prochain diviseur
			diviseur+=1;
		}
		if (cpt_div == 2) {
			cpt_premier += 1;
		}
		cpt += 1;
	}
	double ratio = 1;
	ratio = cpt_premier / cpt; 


	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================



//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*
	Lancer un dé 15 fois, faire la somme des résultats 
	*/
	
	mt_srandSys(); //initialize meserene
	//valeur max du de
	int entier = 6;
	//initialize le compteur
	int cpt = 0;
	//initialize la somme
	int somme = 0;
	//on fait 12 lancer
	while (cpt < 12) {
		//initialize lentier aleatoire
		int entier_alea = 1;
		//simule lancer de de
		entier_alea = mt_randi(entier);
		//on somme le resultar
		somme += entier_alea;
		//on incremente
		cpt += 1;
	}



	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================




//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*

	Compter  le nombre de changements entre pile et face durant

	N lancers d’une pièce (par exemple la suite PPFPFFFFFFPPPP donne 4) 

	*/

	

	//p=1
	//f=2
	//initialize le compteur
	int cpt = 0;
	//initialize meserene
	mt_srandSys();
	//valeur qui va etre comparer pour P ou F
	int lancerprime = 0;
	//compteur de changement 
	int cptprime = 0;
	//on fait 10lancer
	while (cpt < 10) {
		//initialize notre lancer
		int lancer = 0;
		//simule P (1) ou F (2)

		lancer = mt_randi(2);
		//si le resultat change
		if (lancer != lancerprime) {
			//on compte le changement
			cptprime += 1;
			//on change la valeur a comparer
			lancerprime = lancer; 
		}
		//on passe au prochain lancer
		cpt += 1;

	}
	//on prend en compte le premier lancer qui a ete calculer comme un changement de resultat
	cptprime -= 1;

	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================




//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*

	Répéter 1000 fois l’expérience #1 pour trouver le minimum et le maximum des résultats obtenus
	*/
	//initialize lexperience
	int simul = 0;
	//initialize la valeur a comparer ( le max de changement est egale a cpt - 1 )
	int min = 9;
	//initialise la valeur a comparer ( le min de changement est egale a 0 )
	int max = 0;
	//on fait lexperience 10 fois
	while (simul < 10) {
		//on initialize le compteur
		int cpt = 0;
		//on initialize meserene
		mt_srandSys();
		//on initialize la valeur a comparer
		int lancerprime = 0;
		//on compte le nb de changement
		int cptprime = 0;
		//on fait 10lancer
		while (cpt < 10) {
			//on initialize le lancer
			int lancer = 0;
			// P (1) ou F (2)
			lancer = mt_randi(2);
			//si la valeur change
			if (lancer != lancerprime) {
				//on compte le changement
				cptprime += 1;
				//on change la valeur a comparer
				lancerprime = lancer;
			}
			//on compte le lancer
			cpt += 1;

		}
		//on prend en compte le premier lancer comme un changement 
		cptprime -= 1;
		//si le nb de changement est plus petit
		if (cptprime < min) {
			//on change la valeur a comparer 
			min = cptprime;
		}
		//si le nb de changement est plus grand 
		if (cptprime > max) {
			//on change la valeur a comparer
			max = cptprime;
		}
		//on passe a la prochaine experience 
		simul += 1;

	}

	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================



//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*

	Obtenir la taille de la plus longue séquence ininterrompue de piles (P) durant  N lancers d’une pièce
	*/
	
		//initialie le compteur
	int cpt = 0;
	//initialize meserene
	mt_srandSys();
	//compteur de P(1) de suite
	
	
	int cptprime = 0;
	//plus grande valeur de cptprime
	int cptprimeP = 0;
	//on fait 20 lancer
	while (cpt < 20) {
	//initialize le lancer
		int lancer = 0;
		//P(1)
		lancer = mt_randi(2);
		//si on a P
		if (lancer == 1) {
			//on commence le compte de suite
			cptprime += 1;
		}
		//si on a F (2)
		else if (lancer == 2) {
			//si on a la plus grande suite de P(1)
			if (cptprime > cptprimeP) {
				//on sauve cette valeur dans cptprimeP
				cptprimeP = cptprime;

			}
			//remet le compteur de P(1) a 0 pour recommencer le compte de suite
			cptprime = 0;
		}
		//on passe au prochain lancer
		cpt += 1;

	}
	

		

	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================




//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*

	Lancer un dé ordinaire jusqu’à obtenir successivement 2 valeurs qui se suivent (k, k+1) , on note le nombre de lancers nécessaires 

	*/
	//on veut lancer un de
	mt_srandSys();
	int lancer = 1;
	
	//noter le resultat
	
	//lancer un de
	// mt_srandSys();
	
	//comparer avec le resultat precedent
	
	
	//si cest egale au resultat precedent +1
	//on arrete
	//on compte le nb de lancer

	//sinon
	//on lance encore 
	//on note le resultat
	int lancer_prec = 8;
	int cpt = 0;
	while (lancer != (lancer_prec +1) ) {
		lancer = mt_randi(6);
		
		lancer_prec = lancer;
		
		cpt += 1;
	}


	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================



//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 0
int main(void) {

	/*

	Lancer un dé ordinaire jusqu’à obtenir successivement 2 valeurs égales (k, k) , on note le nombre de lancers nécessaires 

	*/
	//on veut lancer un de
	mt_srandSys();
	int lancer = 1;

	//noter le resultat

	//lancer un de
	// mt_srandSys();

	//comparer avec le resultat precedent


	//si cest egale au resultat precedent +1
	//on arrete
	//on compte le nb de lancer

	//sinon
	//on lance encore 
	//on note le resultat
	int lancer_prec = 8;
	int cpt = 0;
	while (lancer != lancer_prec) {
		lancer = mt_randi(6);
		if (lancer != lancer_prec) {
			lancer_prec = lancer;
			lancer = 0;
		}
		
		
		
		cpt += 1;
	}


	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================



//=========================================================
// avec son 0 au #if, ce main reste  inactif
// vous comprenez
#if 1
int main(void) {

	/*
	Dur de déterminer si les résultats obtenus des exercices 5 et 6 sont parfaitement
	semblables ou pas.  Alors  on répète 1000 fois les processus pour obtenir leurs 
	statistiques de base (le min, max et moyenne de chacun) et  pouvoir ainsi les comparer.
	*/
	//on veut lancer un de
	mt_srandSys();
	int compteur = 0;
	int smmT = 0;
	int smm = 0;

	while (compteur < 10) {
		int lancerT = 1;

		int maxT = 0;
		int minT = 2147483647;

		int lancer_precT = 8;
		int cptT = 0;
		
		while (lancerT != lancer_precT) {
			lancerT = mt_randi(6);

			if (lancerT != lancer_precT) {
				lancer_precT = lancerT;
				lancerT = 0;
			}

			cptT += 1;
		}

		smmT += cptT;
		if (cptT > maxT) {
			maxT = cptT;
		}
		if (cptT < minT) {
			minT = cptT;
		}

		int lancer = 1;
		int lancer_prec = 8;

		int cpt = 0;

		int max = 0;
		int min = 2147483647;

		while (lancer != (lancer_prec + 1)) {
			lancer = mt_randi(6);
			lancer_prec = lancer;
			cpt += 1;
		}
		smm += cpt;
		compteur += 1;
	}

	int moyT = 0;
	moyT = smmT / compteur;

	int moy = 0;
	moy = smm / compteur;

	// on termine l'exécution avec le standard... HIT ANY KEY	
	system("pause");

	// et ÇA, c'est un 0 avec une cravate...
	return EXIT_SUCCESS;
}
#endif
//=========================================================
