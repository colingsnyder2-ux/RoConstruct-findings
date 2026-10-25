// from server: 100% by king_originala
// roc 2008-06 00666da0  unit: RBX::HUMAN::Dead  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666da0
//
// 00666da0  56                   push esi
// 00666da1  8bf1                 mov esi, ecx
// 00666da3  c706e0cc8400         mov dword ptr [esi], 0x84cce0
// 00666da9  c74604d8cc8400       mov dword ptr [esi + 4], 0x84ccd8
// 00666db0  e80bc8fdff           call 0x6435c0
// 00666db5  f644240801           test byte ptr [esp + 8], 1
// 00666dba  7409                 je 0x666dc5
// 00666dbc  56                   push esi
// 00666dbd  e8b8980300           call 0x6a067a
// 00666dc2  83c404               add esp, 4
// 00666dc5  8bc6                 mov eax, esi
// 00666dc7  5e                   pop esi
// 00666dc8  c20400               ret 4

extern void __cdecl freeObject(void*);

struct S
{
    unsigned int table0;
    unsigned int table1;

    void cleanup();
    void* destroy(unsigned int flags);
};

void* S::destroy(unsigned int flags)
{
    table0 = 0x0084cce0;
    table1 = 0x0084ccd8;
    cleanup();
    if (flags & 1)
        freeObject(this);
    return this;
}
