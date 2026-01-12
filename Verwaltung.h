#ifndef VERWALTUNG_H   // Schutz vor mehrfacher Einbindung der Datei
#define VERWALTUNG_H

#include "Kunde.h"
#include "Produkt.h"
#include "Auftrag.h"
#include <iostream>
using namespace std;

// ----------------------------
// Verwaltung Funktionen
// ----------------------------
void addKunde(Kunde kunden[], int& kundenCount);       // Kunde hinzufügen
void addProdukt(Produkt produkte[], int& produktCount); // Produkt hinzufügen
void createAuftrag(Auftrag auftraege[], Kunde kunden[], Produkt produkte[], int& auftragCount, int produktCount);
void showKunden(Kunde kunden[], int kundenCount);
void showAuftraege(Auftrag auftraege[], int auftragCount);
void changeAuftragStatus(Auftrag auftraege[], int auftragCount);

#endif
