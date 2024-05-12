#include <iostream>
#include <cmath>
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

Tye de data :

boolean	1 byte	Stores true or false values
char	1 byte	Stores a single character/letter/number, or ASCII values
int	2 or 4 bytes	Stores whole numbers, without decimals
float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits

Un nombre à virgule flottante peut également être un nombre scientifique avec un « e » pour indiquer la puissance de 10 :
float f1 = 35e3;
double d1 = 12E4;
cout << f1;
cout << d1;

Un type de données booléen est déclaré avec le boolmot-clé et ne peut prendre que les valeurs trueou false.

Lorsque la valeur est renvoyée, true = 1et false = 0.


Les operateurs :

+	Addition	Adds together two values	x + y
-	Subtraction	Subtracts one value from another	x - y
*	Multiplication	Multiplies two values	x * y
/	Division	Divides one value by another	x / y
%	Modulus	Returns the division remainder	x % y
++	Increment	Increases the value of a variable by 1	++x
--	Decrement	Decreases the value of a variable by 1	--x


Operator Exemple Same As
=	x = 5	x = 5
+=	x += 3	x = x + 3
-=	x -= 3	x = x - 3
*=	x *= 3	x = x * 3
/=	x /= 3	x = x / 3
%=	x %= 3	x = x % 3
&=	x &= 3	x = x & 3
|=	x |= 3	x = x | 3
^=	x ^= 3	x = x ^ 3
>>=	x >>= 3	x = x >> 3
<<=	x <<= 3	x = x << 3

==	Equal to	x == y
!=	Not equal	x != y
>	Greater than	x > y
<	Less than	x < y
>=	Greater than or equal to	x >= y
<=	Less than or equal to	x <= y

&& 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10
|| 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4
!	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)


Les strings :

L' +opérateur peut être utilisé entre des chaînes pour les additionner afin de créer une nouvelle chaîne. C'est ce qu'on appelle la concaténation
Une chaîne en C++ est en fait un objet contenant des fonctions pouvant effectuer certaines opérations sur des chaînes. Par exemple,
vous pouvez également concaténer des chaînes avec la append()fonction :

string firstName = "John ";
string lastName = "Doe";
string fullName = firstName.append(lastName);
cout << fullName;

Pour obtenir la longueur d'une chaîne, utilisez la length()fonction :
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();

Vous pouvez accéder aux caractères d'une chaîne en vous référant à son numéro d'index entre crochets [].
string myString = "Hello";
cout << myString[0];

Pour modifier la valeur d'un caractère spécifique dans une chaîne, reportez-vous au numéro d'index et utilisez des guillemets simples :
string myString = "Hello";
myString[0] = 'J';
cout << myString;

La solution pour éviter ce problème est d'utiliser le caractère d'échappement antislash .

Le caractère d'échappement barre oblique inverse ( \) transforme les caractères spéciaux en caractères de chaîne :

\'	'	Single quote
\"	"	Double quote
\\	\	Backslash

Cependant, cinconsidère un espace (espaces, tabulations, etc.) comme un caractère de fin, 
ce qui signifie qu'il ne peut stocker qu'un seul mot (même si vous tapez plusieurs mots)
C'est pourquoi, lorsque nous travaillons avec des chaînes, nous utilisons souvent la getline() fonction pour lire une ligne de texte. 
Il prend cincomme premier paramètre et la variable chaîne comme deuxième

string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;


Les mathematiques :

La fonction peut être utilisée pour trouver la valeur la plus élevée de x et y :max(x,y)
cout << max(5, 10);
cout << min(5, 10);

#include <cmath>
D'autres fonctions, telles que sqrt(racine carrée), round(arrondi d'un nombre) et log (logarithme naturel), peuvent être trouvées dans le <cmath>fichier d'en-tête :
cout << sqrt(64);
cout << round(2.6);
cout << log(2);


Pensons à un « exemple réel » où nous devons savoir si une personne est en âge de voter.

Dans l'exemple ci-dessous, nous utilisons l' >=opérateur de comparaison pour savoir si l'âge ( 25) est supérieur OU égal à l'âge limite de vote, qui est fixé à 18:

Cool, non ? Une approche encore meilleure (puisque nous sommes sur une lancée maintenant) serait d'envelopper le code ci-dessus dans une if...elseinstruction, 
afin que nous puissions effectuer différentes actions en fonction du résultat :

int myAge = 25;
int votingAge = 18;

if (myAge >= votingAge) {
  cout << "Old enough to vote!";
} else {
  cout << "Not old enough to vote.";
}

if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
}

if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}

Utilisez le switch instruction pour sélectionner l'un des nombreux blocs de code à exécuter.
Le default mot clé spécifie du code à exécuter s'il n'y a pas de correspondance de casse :

switch(expression) {
  case x:
	// code block
	break;
  case y:
	// code block
	break;
  default:
	// code block
}

La whileboucle parcourt un bloc de code tant qu'une condition spécifiée esttrue :
while (condition) {
  // code block to be executed
}

int i = 0;
while (i < 5) {
  cout << i << "\n";
  i++;
}

do {
  // code block to be executed
}
while (condition);

int i = 0;
do {
  cout << i << "\n";
  i++;
}
while (i < 5);


for (statement 1; statement 2; statement 3) {
  // code block to be executed
}

for (int i = 0; i < 5; i++) {
  cout << i << "\n";
}
Il est également possible de placer une boucle à l'intérieur d'une autre boucle. C'est ce qu'on appelle une boucle imbriquée .

La « boucle interne » sera exécutée une fois pour chaque itération de la « boucle externe » :

for (int i = 1; i <= 2; ++i) {
  cout << "Outer: " << i << "\n"; // Executes 2 times

  // Inner loop
  for (int j = 1; j <= 3; ++j) {
	cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
  }
}

Il existe également une « boucle for-each » (introduite dans la version 11 de C++ (2011), 
qui est utilisée exclusivement pour parcourir les éléments d'un tableau (ou d'autres ensembles de données) :

for (type variableName : arrayName) {
  // code block to be executed
}

int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}

Le continue instruction interrompt une itération (dans la boucle), si une condition spécifiée se produit, et continue avec l'itération suivante dans la boucle.


Les tableaux :


Les tableaux sont utilisés pour stocker plusieurs valeurs dans une seule variable, au lieu de déclarer des variables distinctes pour chaque valeur.

Pour déclarer un tableau, définissez le type de variable, précisez le nom du tableau suivi de crochets et précisez le nombre d'éléments qu'il doit stocker :

string name[value];
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

for (type variableName : arrayName) {
  // code block to be executed
}

En C++, vous n'avez pas besoin de spécifier la taille du tableau. 
Le compilateur est suffisamment intelligent pour déterminer la taille du tableau en fonction du nombre de valeurs insérées :

string cars[] = {"Volvo", "BMW", "Ford"}; // Three array elements

Pour obtenir la taille d'un tableau, vous pouvez utiliser l' sizeof() opérateur :
RESULTAT EN OCTETS

Vous avez appris dans le chapitre Types de données qu'un int type fait généralement 4 octets, 
donc dans l'exemple ci-dessus, 4 x 5 (4 octets x 5 éléments) = 20 bytes .

Utilsier sizeof(myNumbers) / sizeof(int); pour connaitre la vrai taille du tableau

Un tableau multidimensionnel est un tableau de tableaux.
string letters[2][4];
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

Pour accéder à un élément d'un tableau multidimensionnel, spécifiez un numéro d'index dans chacune des dimensions du tableau.
cout << letters[0][2];

Pour parcourir un tableau multidimensionnel, vous avez besoin d’une boucle pour chacune des dimensions du tableau.

L'exemple suivant affiche tous les éléments du tableau de lettres :

string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 4; j++) {
	cout << letters[i][j] << "\n";
  }
}


Les structures :

Les structures (également appelées structs) sont un moyen de regrouper plusieurs variables liées en un seul endroit. Chaque variable de la structure est appelée membre de la structure.

Contrairement à un tableau , une structure peut contenir de nombreux types de données différents (int, string, bool, etc.).

struct {             // Structure declaration
  int myNum;         // Member (int variable)
  string myString;   // Member (string variable)
} myStructure;       // Structure variable

Vous pouvez utiliser une virgule ( ,) pour utiliser une structure dans plusieurs variables :

struct {
  int myNum;
  string myString;
} myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas

Pour créer une structure nommée, mettez le nom de la structure juste après le structmot-clé :

struct myDataType { // This structure is named "myDataType"
  int myNum;
  string myString;
};

myDataType myVar;


Les references :

string food = "Pizza";  // food variable
string &meal = food;    // reference to food

Un pointeur est une variable qui stocke l’adresse mémoire comme valeur .

Une variable pointeur pointe vers un type de données (comme intou string) du même type et est créée avec l' *opérateur. 
L'adresse de la variable avec laquelle vous travaillez est affectée au pointeur

Vous pouvez également modifier la valeur du pointeur. Mais notez que cela modifiera également la valeur de la variable d'origine :
string food = "Pizza";
string* ptr = &food;

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Access the memory address of food and output its value (Pizza)
cout << *ptr << "\n";

// Change the value of the pointer
*ptr = "Hamburger";

// Output the new value of the pointer (Hamburger)
cout << *ptr << "\n";

// Output the new value of the food variable (Hamburger)
cout << food << "\n";


Les fonctions :

C++ fournit certaines fonctions prédéfinies, telles que main(), qui sont utilisées pour exécuter du code. 
Mais vous pouvez également créer vos propres fonctions pour effectuer certaines actions.

void myFunction() {
  // code to be executed
}
myFunction()

Remarque : Si une fonction définie par l'utilisateur, telle que myFunction()est déclarée après la main()fonction, une erreur se produira 

Cependant, il est possible de séparer la déclaration et la définition de la fonction – pour optimiser le code.

Vous verrez souvent des programmes C++ qui ont une déclaration de fonction ci-dessus main()et une définition de fonction ci-dessous main(). 
Cela rendra le code mieux organisé et plus facile à lire :

// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
}

Les informations peuvent être transmises aux fonctions en tant que paramètre. Les paramètres agissent comme des variables à l'intérieur de la fonction.

Les paramètres sont spécifiés après le nom de la fonction, entre parenthèses. 
Vous pouvez ajouter autant de paramètres que vous le souhaitez, il suffit de les séparer par une virgule :

void functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}

Vous pouvez également utiliser une valeur de paramètre par défaut, en utilisant le signe égal ( =).

Si nous appelons la fonction sans argument, elle utilise la valeur par défaut ("Norvège") :
void myFunction(string country = "Norway") {
  cout << country << "\n";
}
Le voidmot-clé, utilisé dans les exemples précédents, indique que la fonction ne doit pas renvoyer de valeur. Si vous souhaitez que la fonction renvoie une valeur, 
vous pouvez utiliser un type de données (tel que int, string, etc.) au lieu de voidet utiliser le return mot-clé à l'intérieur de la fonction :

int myFunction(int x) {
  return 5 + x;
}

int main() {
  cout << myFunction(3);
  return 0;
}

Vous pouvez également stocker le résultat dans une variable :
int z = myFunction(5, 3);

Vous pouvez également passer des tableaux à une fonction :
void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
	cout << myNumbers[i] << "\n";
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}

Avec la surcharge de fonctions , plusieurs fonctions peuvent avoir le même nom avec des paramètres différents :
int myFunction(int x)
float myFunction(float x)
double myFunction(double x, double y)

Au lieu de définir deux fonctions qui devraient faire la même chose, il vaut mieux en surcharger une.

Dans l'exemple ci-dessous, nous surchargeons la plusFuncfonction pour qu'elle fonctionne à la fois pour int et double:

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}

La récursivité est la technique permettant d'appeler une fonction elle-même. Cette technique permet de décomposer des problèmes complexes en problèmes simples plus faciles à résoudre.

La récursivité peut être un peu difficile à comprendre. La meilleure façon de comprendre comment cela fonctionne est de l’expérimenter.

Additionner deux nombres est facile à faire, mais ajouter une plage de nombres est plus compliqué. Dans l'exemple suivant,
la récursivité est utilisée pour additionner une plage de nombres en la décomposant en la tâche simple consistant à ajouter deux nombres :

int sum(int k) {
  if (k > 0) {
	return k + sum(k - 1);
  } else {
	return 0;
  }
}

int main() {
  int result = sum(10);
  cout << result;
  return 0;
}

Lorsque la sum()fonction est appelée, elle ajoute un paramètre kà la somme de tous les nombres inférieurs à k et renvoie le résultat.
Lorsque k devient 0, la fonction renvoie simplement 0. Lors de son exécution, le programme suit ces étapes :

10 + somme(9)
10 + ( 9 + somme(8) )
10 + ( 9 + ( 8 + somme(7) ) )
...
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + somme(0)
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0

*/

void myFunction(string fname) {
	cout << fname << " Refsnes\n";
}

int plusFunc(int x, int y) {
	return x + y;
}

double plusFunc(double x, double y) {
	return x + y;
}


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
	//cout << "L'air de la forme est de " << air 
	// << " cm2 \n";

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

	// result = input1 + input2;
	// cout << "Le resultat est : " << result << endl;

	int oui = 120;
	oui += 5;

	// cout << oui;

	string greeting = "Hello";

	//for (int i = 0; i < 10; i++) {
	//	if (i == 4) {
	//		continue;
	//	}
	//	cout << i << "\n";
	//}

	string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };
	// cout << cars[0];

	/*int myNumbers[5] = { 10, 20, 30, 40, 50 };*/
	/*for (int i : myNumbers) {
		cout << i << "\n";
	}*/

	int myNumbers[5] = { 10, 20, 30, 40, 50 };
	int getArrayLength = sizeof(myNumbers) / sizeof(int);
	//cout << getArrayLength;

	// Create a structure variable called myStructure
	struct {
		int myNum;
		string myString;
	} myStructure;

	// Assign values to members of myStructure
	myStructure.myNum = 1;
	myStructure.myString = "Hello World!";

	// Print members of myStructure
	//cout << myStructure.myNum << "\n";
	//cout << myStructure.myString << "\n";

	//string food = "Pizza";
	//string& meal = food;


	//cout << food << "\n";
	//cout << meal << "\n";
	//cout << &food << "\n";

	string food = "Pizza";
	string* ptr = &food;  

	// Output the value of food (Pizza)
	//cout << food << "\n";

	// Output the memory address of food
	//cout << &food << "\n";

	// Output the memory address of food with the pointer
	//cout << ptr << "\n";

	/*cout << *ptr << "\n";*/

	//myFunction("Liam");
	//myFunction("Lycos");

	int myNum1 = plusFunc(8, 5);
	double myNum2 = plusFunc(4.3, 6.26);
	//cout << "Int: " << myNum1 << "\n";
	//cout << "Double: " << myNum2;


	return 0;
}