// from server: 100% by king_originala
// roc 2008-06 005e7050  unit: RBX::Clump  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7050
//
// 005e7050  56                   push esi
// 005e7051  8b742410             mov esi, dword ptr [esp + 0x10]
// 005e7055  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 005e7058  57                   push edi
// 005e7059  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e705d  8b475c               mov eax, dword ptr [edi + 0x5c]
// 005e7060  50                   push eax
// 005e7061  e86affffff           call 0x5e6fd0
// 005e7066  8b8fa0000000         mov ecx, dword ptr [edi + 0xa0]
// 005e706c  51                   push ecx
// 005e706d  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 005e7073  e838d80200           call 0x6148b0
// 005e7078  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e707c  8bb6a0000000         mov esi, dword ptr [esi + 0xa0]
// 005e7082  e809ecffff           call 0x5e5c90
// 005e7087  50                   push eax
// 005e7088  8bce                 mov ecx, esi
// 005e708a  e8f1d20200           call 0x614380
// 005e708f  5f                   pop edi
// 005e7090  5e                   pop esi
// 005e7091  c3                   ret 

struct Link {
    void assign(Link*);
};

struct State {
    void assign(State*);
    void update(int);
};

struct Source {
    int value();
};

struct Clump {
    char pad0[0x5c];
    Link* link;
    char pad1[0x40];
    State* state;
};

void __cdecl func_005e7050(Clump* first, Source* source, Clump* third)
{
    third->link->assign(first->link);
    third->state->assign(first->state);
    State* state = third->state;
    state->update(source->value());
}
