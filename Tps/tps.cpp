/*

TP1: Calcul de l'aire d'un cercle

Écrivez un programme C++ qui calcule et affiche l'aire d'un cercle en utilisant la formule : 
aire = π * rayon^2. 
Demandez à l'utilisateur d'entrer le rayon du cercle, puis affichez l'aire calculée.

TP2: Convertisseur de température

Écrivez un programme C++ qui convertit la température de Celsius en Fahrenheit et vice versa. 
Demandez à l'utilisateur de choisir le mode de conversion et d'entrer la température à convertir. 
Ensuite, affichez la température convertie.

TP3: Calcul de la somme des nombres pairs jusqu'à un nombre donné

Écrivez un programme C++ qui demande à l'utilisateur d'entrer un nombre entier positif. 
Ensuite, utilisez une boucle pour calculer la somme de tous les nombres pairs de 0 jusqu'au nombre donné inclus. 
Affichez ensuite cette somme.

TP4: Demineur

Écrivez un programme C++ qui demande à l'utilisateur d'entrer des coordonnes.
Avec une barre de vie de 3, verifier si les coordonnes est une mine ou non
Si oui, -1 vie, si non continuer jusqu'a deminer tout le terrain
Faire perdre l'utilisateur si 0 vie
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;


int main() {

	// TP1 :

	int rayonUser;
	const float pi = M_PI;

	// cout << "Entrez un rayon en cm: \n";
	// cin >> rayonUser;
	// int result = pi * pow(rayonUser,2);
	// cout << "L'air de votre cercel est de : " << result << " cm²" << endl;


	// TP2 :

	char mode;
	// int temperatureUser, result;
	const string error = "Le mode choisit est invalide";

	/*cout << "Entrez un mode de conversion c pour Celsius ou f pour Fahrenheit : \n";
	cin >> mode;

	cout << "Entrez une temperature en " << mode << endl;
	cin >> temperatureUser;

	switch (mode) {
		case 'f':
			result = (temperatureUser * 1.8) + 32;
			cout << result;
			break;
		case 'c':
			result = (temperatureUser - 32) * 1.8;
			cout << result;
			break;
		default:
			cout << error;
	}*/


	// TP3 :

	int numberUser;
	int result = 0;

	//cout << "Entrez un nombre entier positif : \n";
	//cin >> numberUser;

	//if (numberUser < 0) {
	//	cout << "Le nombre n'est pas positif \n";
	//	return 0;
	//}

	//for (int i = 0; i < numberUser + 1; i++) {
	//	if ((i % 2) == 0) {
	//		result += i;
	//	} 
	//}

	// cout << "Voici la somme de tous les nombres pairs de 0 jusqu'au nombre donné inclus : " << result << endl;


	// TP4 :

	int life = 4;
	int tries = 0;
	int tohit = 12;
	
	// Define the game area
	int grille[4][4] = {
		{0,1,1,1},
		{1,1,1,0},
		{0,0,1,1},
		{1,1,1,1}
	};

	string preview[4][4] = {
		{"?","?","?","?"},
		{"?","?","?","?"},
		{"?","?","?","?"},
		{"?","?","?","?"}
	};

	while (life > 0 && tohit > 0) {
		int x, y;
		
		// Ask to the user to select a x and y
		for (int i = 0; i < 4; ++i) {
			for (int j = 0; j < 4; ++j) {
				cout << preview[i][j] << " ";
			}
			cout << std::endl;
		}

		cout << "Vie restante : " << life << endl;
		cout << "Hit restant a deminer : " << tohit << endl;

		cout << "Select coordinate" << endl;

		cout << "Select a x : ";
		cin >> y;

		cout << "Select a y : ";
		cin >> x;

		if (grille[x][y] == 1) {
			cout << "Demine ! \n";
			grille[x][y] = 2;
			preview[x][y] = "OK";
			tries += 1;
			tohit -= 1;
		}
		else if (grille[x][y] == 2) {
			cout << "Case deja utiliser ! \n";
		}
		else {
			cout << "Mine touche ! \n";
			grille[x][y] = 2;
			preview[x][y] = "NO";
			tries += 1;
			life -= 1;
		}
	}

	if (life == 0){
		cout << "Perdu !";
	}
	else {
		cout << "Ggane en " << tries << " coups !" << endl;
	}

	return 0;
}