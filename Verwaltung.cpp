#include "Verwaltung.h"

// ----------------------------
// Kunde hinzufügen
// ----------------------------
void addKunde(Kunde kunden[], int& kundenCount)
{
    cout << "Kunden ID: ";
    cin >> kunden[kundenCount].id;

    cout << "Name: ";
    cin >> kunden[kundenCount].name;

    kundenCount++;
}

// ----------------------------
// Produkt hinzufügen
// ----------------------------
void addProdukt(Produkt produkte[], int& produktCount)
{
    cout << "Produkt ID: ";
    cin >> produkte[produktCount].id;

    cout << "Name: ";
    cin >> produkte[produktCount].name;

    cout << "Preis: ";
    cin >> produkte[produktCount].preis;

    produktCount++;
}

// ----------------------------
// Auftrag erstellen
// ----------------------------
void createAuftrag(Auftrag auftraege[], Kunde kunden[], Produkt produkte[], int& auftragCount, int produktCount)
{
    cout << "Auftrag ID: ";
    cin >> auftraege[auftragCount].auftragId;

    cout << "Kunden ID: ";
    cin >> auftraege[auftragCount].kundenId;

    cout << "Produkt ID: ";
    cin >> auftraege[auftragCount].produktId;

    cout << "Menge: ";
    cin >> auftraege[auftragCount].menge;

    // Gesamtpreis berechnen
    for (int i = 0; i < produktCount; i++)
    {
        if (produkte[i].id == auftraege[auftragCount].produktId)
        {
            auftraege[auftragCount].gesamtPreis = produkte[i].preis * auftraege[auftragCount].menge;
        }
    }

    auftraege[auftragCount].status = NEU;

    auftragCount++;
}

// ----------------------------
// Alle Kunden anzeigen
// ----------------------------
void showKunden(Kunde kunden[], int kundenCount)
{
    for (int i = 0; i < kundenCount; i++)
    {
        cout << "ID: " << kunden[i].id
            << " | Name: " << kunden[i].name << endl;
    }
}

// ----------------------------
// Alle Aufträge anzeigen
// ----------------------------
void showAuftraege(Auftrag auftraege[], int auftragCount)
{
    for (int i = 0; i < auftragCount; i++)
    {
        cout << "Auftrag ID: " << auftraege[i].auftragId
            << " | Kunde ID: " << auftraege[i].kundenId
            << " | Produkt ID: " << auftraege[i].produktId
            << " | Gesamtpreis: " << auftraege[i].gesamtPreis
            << " | Status: ";

        if (auftraege[i].status == NEU)
            cout << "Neu";
        else if (auftraege[i].status == IN_BEARBEITUNG)
            cout << "In Bearbeitung";
        else if (auftraege[i].status == ABGESCHLOSSEN)
            cout << "Abgeschlossen";

        cout << endl;
    }
}

// ----------------------------
// Auftrag Status ändern
// ----------------------------
void changeAuftragStatus(Auftrag auftraege[], int auftragCount)
{
    int id, newStatus;
    cout << "Auftrag ID: ";
    cin >> id;

    cout << "Neuer Status (1=Neu, 2=In Bearbeitung, 3=Abgeschlossen): ";
    cin >> newStatus;

    for (int i = 0; i < auftragCount; i++)
    {
        if (auftraege[i].auftragId == id)
        {
            auftraege[i].status = (AuftragsStatus)newStatus;
        }
    }
}
