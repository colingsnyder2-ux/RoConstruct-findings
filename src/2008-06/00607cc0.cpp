// from server: 85% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_espclaude_8acc7b682a6ccd03.cpp

// Candidate translation unit (score above; library headers required).
#include "G3D/Array.h"

namespace RBX {
class Body;
enum GeoPairType { GEO_PAIR_A };

class GeoPair {
public:
    bool match(Body* b0, Body* b1, GeoPairType pairType, int param0, int param1);
    char pad[0xc];
    Body* body0;
    Body* body1;
};

class ContactConnector {
public:
    char pad[8];
    GeoPair geoPair;
    bool match(Body* b0, Body* b1, GeoPairType pairType, int param0, int param1) { return geoPair.match(b0, b1, pairType, param0, param1); }
};

class Contact {
public:
    static int contactPairMatches;
    static int contactPairMisses;
};

class BlockBlockContact : public Contact {
public:
    char pad[0x34];
    G3D::Array<ContactConnector*> connectors;
    G3D::Array<bool> matched;
    ContactConnector* createConnector(Body* b0, Body* b1);
    ContactConnector* matchContactConnector(Body* b0, Body* b1, GeoPairType pairType, int param0, int param1);
};

ContactConnector* BlockBlockContact::matchContactConnector(Body* b0, Body* b1, GeoPairType pairType, int param0, int param1)
{
    for (int i = 0; i < matched.size(); i++)
    {
        if (matched[i] == false)
        {
            if (connectors[i]->match(b0, b1, pairType, param0, param1))
            {
                matched[i] = true;
                Contact::contactPairMatches++;
                connectors[i]->geoPair.body0 = b0;
                connectors[i]->geoPair.body1 = b1;
                return connectors[i];
            }
        }
    }

    Contact::contactPairMisses++;
    ContactConnector* connector = createConnector(b0, b1);
    connectors.append(connector);
    matched.append(true);
    return connector;
}
}
