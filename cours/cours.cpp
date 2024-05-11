#include <iostream>
using namespace std;

/* 

#include <iostream> est une bibliothèque de fichiers d'en-tête qui nous permet de travailler avec des objets d'entrée et de sortie, tels que cout
using namespace std signifie que nous pouvons utiliser des noms d’objets et de variables de la bibliothèque standard.
cout permet d'imprimer du texte, variable, resultat d'une fonction ... cependant il n'insère pas de nouvelle ligne à la fin de la sortie
\n permet d'inserer une nouvelle ligne dans la sortie
2 \n ou << endl permet d'inserer une ligne vide
Remarque : Chaque instruction C++ se termine par un point-virgule ;

*/

/* Les variables :

int- stocke les entiers (nombres entiers), sans décimales, comme 123 ou -123
double - stocke les nombres à virgule flottante, avec des décimales, telles que 19, 99 ou - 19, 99
char - stocke des caractères uniques, tels que « a » ou « B ».Les valeurs de caractères sont entourées de guillemets simples
string - stocke du texte, tel que "Hello World".Les valeurs de chaîne sont entourées de guillemets doubles
bool - stocke les valeurs avec deux états : vrai ou faux

type variableName = value;

Pour déclarer plusieurs variables du même type , utilisez une liste séparée par des virgules :
int x = 5, y = 6, z = 50;

Vous pouvez également attribuer la même valeur à plusieurs variables sur une seule ligne :
int x, y, z;
x = y = z = 50;

Lorsque vous ne souhaitez pas que d'autres (ou vous-même) modifient les valeurs de variables existantes, 
utilisez le constmot-clé (cela déclarera la variable comme "constante", ce qui signifie non modifiable et en lecture seule ) :

const int mySecondNumber = 20;

Exercice 1:

Calcul de l'aire d'un rectangle :
Écrivez un programme C++ qui calcule et affiche l'aire du rectangle en utilisant la formule
aire=longueur×largeur. 
Utilisez des variables pour stocker la longueur, la largeur et le résultat de l'aire.

cinest une variable prédéfinie qui lit les données du clavier avec l'opérateur d'extraction ( >>).
int x;
cout << "Type a number: "; // Type a number and press enter
cin >> x; // Get user input from the keyboard
cout << "Your number is: " << x; // Display the input value

Exercice 1:
Simple calculatrice :
Écrivez un programme C++ qui fait la somme de 2 inputs de l'utilisateur

*/


int main() {
	// cout << "Hello World!" << endl;
	// cout << "Bonjour \n";

	int myNum = 5;               // Integer (whole number without decimals)
	double myFloatNum = 5.99;    // Floating point number (with decimals)
	char myLetter = 'D';         // Character
	string myText = "Hello";     // String (text)
	bool myBoolean = true;       // Boolean (true or false)

	int myAge = 35;
	// cout << "I am " << myAge << " years old. \n";

	int a = 12;
	int b = 2;

	int sum = a * b;

	// cout << sum;

	// Exo 1:
	const int longueur = 250;
	const int largeur = 100;

	int air = longueur * largeur;
	//cout << "L'air de la forme est de " << air << " cm2 \n";

	int x;
	// cout << "Type a number: "; // Type a number and press enter
	// cin >> x; // Get user input from the keyboard
	// cout << "Your number is: " << x; // Display the input value

	// Exo 2 :
	int input1;
	int input2;
	int result;
	// cout << "Ecrivez un premier nombre :";
	//cin >> input1;
	// cout << "Ecrivez un deuxieme nombre :";
	// cin >> input2;

	result = input1 + input2;
	// cout << "Le resultat est : " << result << endl;

	return 0;
}