#ifndef PRODUKT_H   // Schutz vor mehrfacher Einbindung der Datei
#define PRODUKT_H

#include <string>
using namespace std;

// ----------------------------
// Struktur für Produkt
// ----------------------------
struct Produkt
{
    int id;         // Produkt-ID
    string name;    // Name des Produkts
    double preis;   // Preis des Produkts
};

#endif
