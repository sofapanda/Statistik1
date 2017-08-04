#include <iostream>
#include <limits>

using namespace std;

int main()
{
	// die Vereinbarung der Variablen
	int maximum, minimum, eingabe = 0, summe = 0, anzahlEingaben = 0;

	float mittelwert;

	// das vorläufige Maximum und Minimum setzen

	minimum = numeric_limits<int>::max();
	maximum = numeric_limits<int>::min();

	// die Werte einlesen

	do
	{
		cout << "Geben Sie die " << anzahlEingaben + 1 << " . Zahl ein: ";
		cin >> eingabe;
		
		if (eingabe != 0)
		{

			if (eingabe < minimum)
			{
				minimum = eingabe;
			}
			if (eingabe > maximum)
			{
				maximum = eingabe;
			}

			anzahlEingaben++;

			summe = summe + eingabe;
		}
	} while (eingabe != 0);

	// ist mindestens eine Zahl eingegeben worden?

	if (anzahlEingaben != 0)
	{
		// den Mittelwert berechnen
		// dabei muss einer der gazzhalingen Werte gecastet werden

		mittelwert = summe / static_cast<float>(anzahlEingaben);

		cout << "Sie haben " << anzahlEingaben << " Werte eingegeben." << endl;
		cout << "Die Summe aller Werte ist: " << summe << endl;
		cout << "Das Minimum ist: " << minimum << endl;
		cout << "Das Maximum ist: " << maximum << endl;
		cout << "Der Mittelwert ist: " << mittelwert << endl;
 	}



	return 0;

}