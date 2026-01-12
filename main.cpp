#include <iostream>
#include "Kunde.h"
#include "Produkt.h"
#include "Auftrag.h"
#include "Verwaltung.h"

using namespace std;

int main()
{
    Kunde kunden[10];
    Produkt produkte[10];
    Auftrag auftraege[10];

    int kundenCount = 0;
    int produktCount = 0;
    int auftragCount = 0;

    int choice;

    do
    {
        cout << "\n1 - Kunde anlegen";
        cout << "\n2 - Produkt anlegen";
        cout << "\n3 - Auftrag erstellen";
        cout << "\n4 - Kunden anzeigen";
        cout << "\n5 - Auftraege anzeigen";
        cout << "\n6 - Auftrag Status aendern";
        cout << "\n0 - Beenden\n";

        cin >> choice;

        switch (choice)
        {
        case 1: addKunde(kunden, kundenCount); break;
        case 2: addProdukt(produkte, produktCount); break;
        case 3: createAuftrag(auftraege, kunden, produkte, auftragCount, produktCount); break;
        case 4: showKunden(kunden, kundenCount); break;
        case 5: showAuftraege(auftraege, auftragCount); break;
        case 6: changeAuftragStatus(auftraege, auftragCount); break;
        }
    } while (choice != 0);

    return 0;
}
