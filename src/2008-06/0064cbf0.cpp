// from server: 100% by king_originala
// roc 2008-06 0064cbf0  unit: RBX::HUMAN::Climbing  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064cbf0
//
// 0064cbf0  53                   push ebx
// 0064cbf1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0064cbf5  56                   push esi
// 0064cbf6  57                   push edi
// 0064cbf7  8bf9                 mov edi, ecx
// 0064cbf9  8bcb                 mov ecx, ebx
// 0064cbfb  e890aff9ff           call 0x5e7b90
// 0064cc00  8b4f08               mov ecx, dword ptr [edi + 8]
// 0064cc03  8bf0                 mov esi, eax
// 0064cc05  8b01                 mov eax, dword ptr [ecx]
// 0064cc07  8b5014               mov edx, dword ptr [eax + 0x14]
// 0064cc0a  56                   push esi
// 0064cc0b  ffd2                 call edx
// 0064cc0d  8b4f08               mov ecx, dword ptr [edi + 8]
// 0064cc10  53                   push ebx
// 0064cc11  e82ac10100           call 0x668d40
// 0064cc16  57                   push edi
// 0064cc17  8bce                 mov ecx, esi
// 0064cc19  e8028cffff           call 0x645820
// 0064cc1e  85f6                 test esi, esi
// 0064cc20  740a                 je 0x64cc2c
// 0064cc22  8b06                 mov eax, dword ptr [esi]
// 0064cc24  8b10                 mov edx, dword ptr [eax]
// 0064cc26  6a01                 push 1
// 0064cc28  8bce                 mov ecx, esi
// 0064cc2a  ffd2                 call edx
// 0064cc2c  57                   push edi
// 0064cc2d  8bcb                 mov ecx, ebx
// 0064cc2f  e80c8cffff           call 0x645840
// 0064cc34  5f                   pop edi
// 0064cc35  5e                   pop esi
// 0064cc36  5b                   pop ebx
// 0064cc37  c20400               ret 4

struct Climbing;

struct Edge {
    virtual ~Edge();
    Edge* get();
    void clear(int);
    void unlink(int);
};

struct Stage {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void remove(Edge*);
    void update(Edge*);
};

struct Climbing {
    char pad[8];
    Stage* stage;
    void f(Edge*);
};

void Climbing::f(Edge* edge)
{
    Edge* previous = edge->get();
    stage->remove(previous);
    stage->update(edge);
    previous->clear(reinterpret_cast<int>(this));
    delete previous;
    edge->unlink(reinterpret_cast<int>(this));
}
