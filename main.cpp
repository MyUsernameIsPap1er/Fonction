#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<assert.h>
#include"Aut2023_155_cours00/mtwister.h"

int main(void){
ts_compter_nb_digit_impair_de_entier();
compter_nb_digit_impair_de_entier(506571);
	return EXIT_SUCCESS;
}





//def_function===============================
int compter_nb_digit_impair_de_entier(int N){
	int cpt_imp = 0;

	while(N){
		int digit = N % 10;
		if (digit % 2) {
			++cpt_imp;
		}

		N /= 10;
	}
	return cpt_imp;
}


//========================================
void ts_compter_nb_digit_impair_de_entier(void){
assert(compter_nb_digit_impair_de_entier(0)==0);
assert(compter_nb_digit_impair_de_entier(2)==0);
assert(compter_nb_digit_impair_de_entier(1)==1);
assert(compter_nb_digit_impair_de_entier(3740)==2);
assert(compter_nb_digit_impair_de_entier(-2)==0);


//========================================================
//Nouvelle version

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<assert.h>
#include<mtwister.h>
void ts_compter_nb_digit_impair_de_entier(void);
int compter_nb_digit_impair_de_entier(int N);

int main(void) {
	ts_compter_nb_digit_impair_de_entier();
	int test = compter_nb_digit_impair_de_entier(506571);
	test;
}





//def_function===============================
int compter_nb_digit_impair_de_entier(int N) {
	int cpt_imp = 0;

	while (N) {
		int digit = N % 10;
		if (digit % 2) {
			++cpt_imp;
		}

		N /= 10;
	}
	return cpt_imp;
}


//========================================
void ts_compter_nb_digit_impair_de_entier(void) {
	assert(compter_nb_digit_impair_de_entier(0) == 0);
	assert(compter_nb_digit_impair_de_entier(2) == 0);
	assert(compter_nb_digit_impair_de_entier(1) == 1);
	assert(compter_nb_digit_impair_de_entier(3740) == 2);
	assert(compter_nb_digit_impair_de_entier(-2) == 0);
}






