#include <iostream>
#include <cstdlib>	//Für die Verwendung von ("CLS") = Bildschirm leeren


using namespace std;	//Namensraum

// Funktionsblock für die Addition
double addition(double a, double b) 
{
    return a + b;
}

// Funktionsblock für die Subtraktion
double subtraktion(double a, double b) 
{
    return a - b;
}

// Funktionsblock für die Multiplikation
double multiplikation(double a, double b) 
{
    return a * b;
}

// Funktionsblock für die Division
double division(double a, double b) 
{
    if (b != 0) 
	{
        return a / b;
    } 
	else 
		{
	        cout << "Fehler! Die division einer Zahl durch Null ist nicht erlaubt!\n";	//Ausgabe, wenn eine Zahl durch 0 geteilt werden soll
	        return 0.0;
	    }
}

int main() //Hauptfunktion
{
	char fortfahren;

	do{
		
    double NUM1, NUM2;	//Variable für die Nummer 1 und 2 definieren
    char Rechenart;	//Variable für die Rechenart definieren
    
    cout<< "Wilkommen bei dem Taschenrechner\n";	//Ausgabe, was das Programm im grundgerüst macht ( rechnen )
    cout <<"\n";	//Freie zeile
    cout <<"Ich kann Ihnen das Ergebnis von Plus, Minus, Mal und Geteilt aufgaben liefern, falls Sie es nicht berechnen koennen.\n";	//Ausgabe, was das Programm berechnen kann
    cout <<"\n";	//Freie zeile
    
    cout << "Bitte geben Sie nun die erste Zahl ein: ";	//Eingabeaufforderung für die erste Zahl für die Rechnung
    	cin >> NUM1;	//Einlesen der ersten Zahl

    cout << "Bitte geben Sie die gewuenschte Operation ein (+ , - , * , / ): ";	//Eingabeaufforderung für den Rechenoperator der Rechnung
    	cin >> Rechenart;	//Einlesen der Rechenart ( + , - , * , / )

    cout << "Bitte geben Sie nun die zweite Zahl ein: ";	//Eingabeaufforderung für die zweite Zahl für die Rechnung
    	cin >> NUM2;	//Einlesen der zweiten Zahl

    double Result = 0.0;	//Das Ergebnis der Rechnung auf 0 setzen
    
    
    switch (Rechenart)	//Switch, welche die oben definierten Funktionen abruft und die berechnung durchführt 
	{
        case '+':
            Result = addition(NUM1, NUM2);	//Das Unterprogramm von oben für die berechnung von der Addition zweier Zahlen abrufen
            break;
        case '-':
            Result = subtraktion(NUM1, NUM2);	//Das Unterprogramm von oben für die berechnung von der Subrtaktion zweier Zahlen abrufen
            break;
        case '*':
            Result = multiplikation(NUM1, NUM2);	//Das Unterprogramm von oben für die berechnung von der Multiplikation zweier Zahlen abrufen
            break;
        case '/':
            Result = division(NUM1, NUM2);	//Das Unterprogramm von oben für die berechnung von der Division zweier Zahlen abrufen
            break;
        default:
            cout << "Ungültige Operation eingegeben!" << endl;	//Ausgabe, dass ein Fehler bei der Rechenarteingabe vorliegt
            return 0;	//Switch beenden
    }

    cout << "Das ergebnis von: " << NUM1 << " "<<Rechenart << " " << NUM2 << " lautet: " << Result << "\n";	//Ausgabe des ergebnisses
    cout << "\n"; //Neue Zeile
    
    cout <<"Moechten Sie eine erneute berechnung durchfuehren? ( j , n ) \n";	//Ausgabe, ob man eine erneute berechnung durchführen möchte
    	cin >> fortfahren;	//Einlesen der eingabe des Benutzers
    	
		system("cls");	//Den Bildschirm leeren
	}
	
    while (fortfahren == 'j' || fortfahren == 'J');	//Überprüfen, ob die Wahl j oder J entspricht und das Programm erneut sratren
    
    if (fortfahren == 'n' || fortfahren == 'N');	//Überprüfen, ob die Wahl n oder N entspricht und das Programm mit der nachfolgenden Ausgabe beenden
    {
    	cout<< "Einen schoenen Tag ihnen noch!\n";	//Ausgabe, wenn man nicht mehr rechnen möchte
	}
	return 0;	//Programm beenden
}
