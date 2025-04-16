#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void calcule_monnaie(double montant_a_rendre) {
    int billets[] = {2000, 1000, 500, 200, 100, 50, 25}; // Billets disponibles
    int pieces[] = {20, 10, 5, 1}; // Pièces en roupies
    double sous[] = {0.50, 0.20, 0.05}; // Pièces en sous

    //printf("Monnaie à rendre : %.2f Rs\n", montant_a_rendre);
    //printf("Voici la répartition :\n");
}

int main() {

  srand(time(NULL)); //valeur à payer
  double valeur_a_payer = rand() %  500 + 2000;
  printf("La valeur à payer est  : %.2f Rs\n", valeur_a_payer);


  int montant_a_donner;  //valeur à donner
    printf("Entrez le montant que vous aller donner : ");
    scanf("%d", &montant_a_donner);
    printf("La valeur que vous allez donner est  : %d Rs\n", montant_a_donner);

  while ( valeur_a_payer > montant_a_donner) {
    printf("Vueillez ressaisir un montant ");
    scanf("%d", &montant_a_donner);
    printf("La valeur que vous allez donner est  : %d Rs\n", montant_a_donner);
	}

	    return 0;
}
