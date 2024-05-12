#include <iostream>
#include <cmath>
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

Tye de data :

boolean	1 byte	Stores true or false values
char	1 byte	Stores a single character/letter/number, or ASCII values
int	2 or 4 bytes	Stores whole numbers, without decimals
float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits

Un nombre � virgule flottante peut �galement �tre un nombre scientifique avec un � e � pour indiquer la puissance de 10 :
float f1 = 35e3;
double d1 = 12E4;
cout << f1;
cout << d1;

Un type de donn�es bool�en est d�clar� avec le boolmot-cl� et ne peut prendre que les valeurs trueou false.

Lorsque la valeur est renvoy�e, true = 1et false = 0.


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

L' +op�rateur peut �tre utilis� entre des cha�nes pour les additionner afin de cr�er une nouvelle cha�ne. C'est ce qu'on appelle la concat�nation
Une cha�ne en C++ est en fait un objet contenant des fonctions pouvant effectuer certaines op�rations sur des cha�nes. Par exemple,
vous pouvez �galement concat�ner des cha�nes avec la append()fonction :

string firstName = "John ";
string lastName = "Doe";
string fullName = firstName.append(lastName);
cout << fullName;

Pour obtenir la longueur d'une cha�ne, utilisez la length()fonction :
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();

Vous pouvez acc�der aux caract�res d'une cha�ne en vous r�f�rant � son num�ro d'index entre crochets [].
string myString = "Hello";
cout << myString[0];

Pour modifier la valeur d'un caract�re sp�cifique dans une cha�ne, reportez-vous au num�ro d'index et utilisez des guillemets simples :
string myString = "Hello";
myString[0] = 'J';
cout << myString;

La solution pour �viter ce probl�me est d'utiliser le caract�re d'�chappement antislash .

Le caract�re d'�chappement barre oblique inverse ( \) transforme les caract�res sp�ciaux en caract�res de cha�ne :

\'	'	Single quote
\"	"	Double quote
\\	\	Backslash

Cependant, cinconsid�re un espace (espaces, tabulations, etc.) comme un caract�re de fin, 
ce qui signifie qu'il ne peut stocker qu'un seul mot (m�me si vous tapez plusieurs mots)
C'est pourquoi, lorsque nous travaillons avec des cha�nes, nous utilisons souvent la getline() fonction pour lire une ligne de texte. 
Il prend cincomme premier param�tre et la variable cha�ne comme deuxi�me

string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;


Les mathematiques :

La fonction peut �tre utilis�e pour trouver la valeur la plus �lev�e de x et y :max(x,y)
cout << max(5, 10);
cout << min(5, 10);

#include <cmath>
D'autres fonctions, telles que sqrt(racine carr�e), round(arrondi d'un nombre) et log (logarithme naturel), peuvent �tre trouv�es dans le <cmath>fichier d'en-t�te :
cout << sqrt(64);
cout << round(2.6);
cout << log(2);


Pensons � un � exemple r�el � o� nous devons savoir si une personne est en �ge de voter.

Dans l'exemple ci-dessous, nous utilisons l' >=op�rateur de comparaison pour savoir si l'�ge ( 25) est sup�rieur OU �gal � l'�ge limite de vote, qui est fix� � 18:

Cool, non ? Une approche encore meilleure (puisque nous sommes sur une lanc�e maintenant) serait d'envelopper le code ci-dessus dans une if...elseinstruction, 
afin que nous puissions effectuer diff�rentes actions en fonction du r�sultat :

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

Utilisez le switch instruction pour s�lectionner l'un des nombreux blocs de code � ex�cuter.
Le default mot cl� sp�cifie du code � ex�cuter s'il n'y a pas de correspondance de casse :

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

La whileboucle parcourt un bloc de code tant qu'une condition sp�cifi�e esttrue :
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
Il est �galement possible de placer une boucle � l'int�rieur d'une autre boucle. C'est ce qu'on appelle une boucle imbriqu�e .

La � boucle interne � sera ex�cut�e une fois pour chaque it�ration de la � boucle externe � :

for (int i = 1; i <= 2; ++i) {
  cout << "Outer: " << i << "\n"; // Executes 2 times

  // Inner loop
  for (int j = 1; j <= 3; ++j) {
	cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
  }
}

Il existe �galement une � boucle for-each � (introduite dans la version 11 de C++ (2011), 
qui est utilis�e exclusivement pour parcourir les �l�ments d'un tableau (ou d'autres ensembles de donn�es) :

for (type variableName : arrayName) {
  // code block to be executed
}

int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}
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

	return 0;
}