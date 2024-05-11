#include <iostream>
using namespace std;

/* 

#include <iostream> est une biblioth�que de fichiers d'en-t�te qui nous permet de travailler avec des objets d'entr�e et de sortie, tels que cout
using namespace std signifie que nous pouvons utiliser des noms d�objets et de variables de la biblioth�que standard.
cout permet d'imprimer du texte, variable, resultat d'une fonction ... cependant il n'ins�re pas de nouvelle ligne � la fin de la sortie
\n permet d'inserer une nouvelle ligne dans la sortie
2 \n ou << endl permet d'inserer une ligne vide
Remarque : Chaque instruction C++ se termine par un point-virgule ;

*/

/* Les variables :

int- stocke les entiers (nombres entiers), sans d�cimales, comme 123 ou -123
double - stocke les nombres � virgule flottante, avec des d�cimales, telles que 19, 99 ou - 19, 99
char - stocke des caract�res uniques, tels que � a � ou � B �.Les valeurs de caract�res sont entour�es de guillemets simples
string - stocke du texte, tel que "Hello World".Les valeurs de cha�ne sont entour�es de guillemets doubles
bool - stocke les valeurs avec deux �tats : vrai ou faux

type variableName = value;

Pour d�clarer plusieurs variables du m�me type , utilisez une liste s�par�e par des virgules :
int x = 5, y = 6, z = 50;

Vous pouvez �galement attribuer la m�me valeur � plusieurs variables sur une seule ligne :
int x, y, z;
x = y = z = 50;

Lorsque vous ne souhaitez pas que d'autres (ou vous-m�me) modifient les valeurs de variables existantes, 
utilisez le constmot-cl� (cela d�clarera la variable comme "constante", ce qui signifie non modifiable et en lecture seule ) :

const int mySecondNumber = 20;

Exercice 1:

Calcul de l'aire d'un rectangle :
�crivez un programme C++ qui calcule et affiche l'aire du rectangle en utilisant la formule
aire=longueur�largeur. 
Utilisez des variables pour stocker la longueur, la largeur et le r�sultat de l'aire.

cinest une variable pr�d�finie qui lit les donn�es du clavier avec l'op�rateur d'extraction ( >>).
int x;
cout << "Type a number: "; // Type a number and press enter
cin >> x; // Get user input from the keyboard
cout << "Your number is: " << x; // Display the input value

Exercice 1:
Simple calculatrice :
�crivez un programme C++ qui fait la somme de 2 inputs de l'utilisateur

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