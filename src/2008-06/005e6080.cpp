// from server: 100% by king_originala
// roc 2008-06 005e6080  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6080
//
// 005e6080  56                   push esi
// 005e6081  8b742408             mov esi, dword ptr [esp + 8]
// 005e6085  8bce                 mov ecx, esi
// 005e6087  e8041b0000           call 0x5e7b90
// 005e608c  85c0                 test eax, eax
// 005e608e  7431                 je 0x5e60c1
// 005e6090  80782400             cmp byte ptr [eax + 0x24], 0
// 005e6094  741f                 je 0x5e60b5
// 005e6096  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005e6099  3bf1                 cmp esi, ecx
// 005e609b  7503                 jne 0x5e60a0
// 005e609d  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005e60a0  85c9                 test ecx, ecx
// 005e60a2  741f                 je 0x5e60c3
// 005e60a4  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 005e60aa  8b5214               mov edx, dword ptr [edx + 0x14]
// 005e60ad  3b91a0000000         cmp edx, dword ptr [ecx + 0xa0]
// 005e60b3  740e                 je 0x5e60c3
// 005e60b5  50                   push eax
// 005e60b6  8bce                 mov ecx, esi
// 005e60b8  e8e31a0000           call 0x5e7ba0
// 005e60bd  85c0                 test eax, eax
// 005e60bf  75cf                 jne 0x5e6090
// 005e60c1  33c0                 xor eax, eax
// 005e60c3  5e                   pop esi
// 005e60c4  c3                   ret 

struct Geometry;
struct Edge;
typedef Edge Primitive;

struct State {
    char pad[0x14];
    State* related;
};

struct Geometry {
    char pad[0xa0];
    State* state;

    Primitive* getFirstB();
    Edge* getNextB(Edge*);
};

struct Edge {
    char pad0[0x0c];
    Geometry* g0;
    Geometry* g1;
    char pad1[0x10];
    unsigned char enabled;
};

Edge* __cdecl findEdge(Geometry* geometry)
{
    Edge* edge = geometry->getFirstB();
    while (edge) {
        if (edge->enabled) {
            Geometry* other = edge->g0;
            if (geometry == other)
                other = edge->g1;
            if (!other || geometry->state->related == other->state)
                return edge;
        }
        edge = geometry->getNextB(edge);
    }
    return 0;
}
