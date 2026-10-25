// from server: 100% by king_originala
// roc 2008-06 0043d660  unit: G3D::VColor3::?$XItem  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043d660
//
// 0043d660  56                   push esi
// 0043d661  8bf1                 mov esi, ecx
// 0043d663  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 0043d669  85c0                 test eax, eax
// 0043d66b  7409                 je 0x43d676
// 0043d66d  50                   push eax
// 0043d66e  e807302600           call 0x6a067a
// 0043d673  83c404               add esp, 4
// 0043d676  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 0043d67c  50                   push eax
// 0043d67d  c7862801000000000000 mov dword ptr [esi + 0x128], 0
// 0043d687  c7862c01000000000000 mov dword ptr [esi + 0x12c], 0
// 0043d691  c7863001000000000000 mov dword ptr [esi + 0x130], 0
// 0043d69b  e8da2f2600           call 0x6a067a
// 0043d6a0  83c404               add esp, 4
// 0043d6a3  8bce                 mov ecx, esi
// 0043d6a5  e8b6602d00           call 0x713760
// 0043d6aa  f644240801           test byte ptr [esp + 8], 1
// 0043d6af  7409                 je 0x43d6ba
// 0043d6b1  56                   push esi
// 0043d6b2  e8c32f2600           call 0x6a067a
// 0043d6b7  83c404               add esp, 4
// 0043d6ba  8bc6                 mov eax, esi
// 0043d6bc  5e                   pop esi
// 0043d6bd  c20400               ret 4

extern "C" void __cdecl release(void*);

struct S {
    char pad000[0x11c];
    void* field11c;
    char pad120[8];
    void* field128;
    unsigned int field12c;
    unsigned int field130;

    void baseDestroy();
    S* destroy(unsigned int flags);
};

S* S::destroy(unsigned int flags) {
    if (field128)
        release(field128);

    field128 = 0;
    field12c = 0;
    field130 = 0;
    release(field11c);

    baseDestroy();

    if (flags & 1)
        release(this);

    return this;
}
