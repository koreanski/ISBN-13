// ISBN-13.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;
int isbn_in; // eingegebe isbn
const int isbn_l = 13; // isbn länge
char isbn_test[] = { "978-3-426-28154-3" }; // test initialisiert
//char isbn[]; // array der eingegebene isbn

int z[13];
int sum_g = 0;
int sum_u = 0;
int pruef;



int main()
{	
	cout << "Bitte geben sie die ISBN ein: "<<endl;
	//cin >> isbn;
	int g_count = sizeof(isbn_test) / sizeof(char); // g_count größe des arrays

	for (int i = 0,j=0; i < g_count; i++)
	{
		if (48 < isbn_test[i] && isbn_test[i] < 58)
		{
			z[j] = isbn_test[i] - 48;
			j++;
		}
	}

	cout << z[0];

	cout<<"\n";

	for (int g = 0; g < 11; g = g+2)
	{
		sum_g += z[g];
	}
	cout << sum_g<<endl;

	for (int u = 1; u < 13; u = u + 2)
	{
		sum_u += z[u];
	}
	cout << sum_u<<endl;

	pruef = (10 - (sum_g + 3 * sum_u) % 10) % 10;

	cout << pruef << endl;

	if (pruef != z[12])
	{
		cout << "Die von Ihnen eingegebene ISBN ist nicht gueltig." << endl;
	}

		
	


}

// Programm ausführen: STRG+F5 oder "Debuggen" > Menü "Ohne Debuggen starten"3
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
