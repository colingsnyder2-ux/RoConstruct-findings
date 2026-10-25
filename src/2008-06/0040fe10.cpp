// from server: 100% by king_originala
// roc 2008-06 0040fe10  unit: UIEnumConnections::V?$CComEnum::?$CComObject  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040fe10
//
// 0040fe10  56                   push esi
// 0040fe11  8bf1                 mov esi, ecx
// 0040fe13  c706f0d78000         mov dword ptr [esi], 0x80d7f0
// 0040fe19  c74618010000c0       mov dword ptr [esi + 0x18], 0xc0000001
// 0040fe20  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 0040fe26  8b01                 mov eax, dword ptr [ecx]
// 0040fe28  8b5008               mov edx, dword ptr [eax + 8]
// 0040fe2b  ffd2                 call edx
// 0040fe2d  8bce                 mov ecx, esi
// 0040fe2f  e85ceeffff           call 0x40ec90
// 0040fe34  f644240801           test byte ptr [esp + 8], 1
// 0040fe39  7409                 je 0x40fe44
// 0040fe3b  56                   push esi
// 0040fe3c  e839082900           call 0x6a067a
// 0040fe41  83c404               add esp, 4
// 0040fe44  8bc6                 mov eax, esi
// 0040fe46  5e                   pop esi
// 0040fe47  c20400               ret 4

struct Service {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
};

extern Service* service;
extern void* objectTable[];
extern "C" void __cdecl releaseStorage(void*);

struct S {
    void** table;
    unsigned char reserved[20];
    unsigned long state;

    void cleanup();
    S* destroy(unsigned int flags);
};

S* S::destroy(unsigned int flags)
{
    table = objectTable;
    state = 0xC0000001UL;
    service->slot2();
    cleanup();
    if (flags & 1)
        releaseStorage(this);
    return this;
}
