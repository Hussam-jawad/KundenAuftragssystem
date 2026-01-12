#ifndef KUNDE_H   // Schutz vor mehrfacher Einbindung der Datei
#define KUNDE_H

#include <string>
using namespace std;

// ----------------------------
// Struktur für Kunde
// ----------------------------
struct Kunde
{
    int id;         // Kunden-ID
    string name;    // Name des Kunden
};

#endif
