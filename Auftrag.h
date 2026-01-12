#ifndef AUFTRAG_H   // Schutz vor mehrfacher Einbindung der Datei
#define AUFTRAG_H

#include "Kunde.h"
#include "Produkt.h"

// ----------------------------
// Enum für Auftragsstatus
// ----------------------------
enum AuftragsStatus
{
    NEU = 1,            // Neuer Auftrag
    IN_BEARBEITUNG,     // Auftrag in Bearbeitung
    ABGESCHLOSSEN       // Auftrag abgeschlossen
};

// ----------------------------
// Struktur für Auftrag
// ----------------------------
struct Auftrag
{
    int auftragId;       // ID des Auftrags
    int kundenId;        // ID des Kunden
    int produktId;       // ID des Produkts
    int menge;           // Menge des Produkts
    double gesamtPreis;  // Gesamtpreis des Auftrags
    AuftragsStatus status; // Status des Auftrags
};

#endif
