// ISBN-13.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;
int isbn_in; // eingegebe isbn
const int isbn_l = 13; // isbn länge
int isbn[isbn_l]; // array der eingegebene isbn
int z[13];
int sum_g = 0;
int sum_u = 0;
int pruef;



int main()
{

	
	cout << "Bitte geben sie die ISBN ein: ";

	for (int i = 0; i < isbn_l; i++)
	{
		cin >> z[i];
	}
	"\n";
	cout << z[12]<<endl;
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
	"\n";

	if (pruef != z[12])
	{
		cout << "Die von Ihnen eingegebene ISBN ist nicht gültig." << endl;
	}

		
	//char g_count = sizeof(isbn) / sizeof(char); // g_count größe des arrays


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
