// from server: 100% by king_originala
// roc 2008-06 0040f960  unit: UIEnumConnectionPoints::V?$CComEnum::?$CComObject  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040f960
//
// 0040f960  56                   push esi
// 0040f961  8bf1                 mov esi, ecx
// 0040f963  c70690d78000         mov dword ptr [esi], 0x80d790
// 0040f969  c74618010000c0       mov dword ptr [esi + 0x18], 0xc0000001
// 0040f970  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 0040f976  8b01                 mov eax, dword ptr [ecx]
// 0040f978  8b5008               mov edx, dword ptr [eax + 8]
// 0040f97b  ffd2                 call edx
// 0040f97d  8bce                 mov ecx, esi
// 0040f97f  e8bcfaffff           call 0x40f440
// 0040f984  f644240801           test byte ptr [esp + 8], 1
// 0040f989  7409                 je 0x40f994
// 0040f98b  56                   push esi
// 0040f98c  e8e90c2900           call 0x6a067a
// 0040f991  83c404               add esp, 4
// 0040f994  8bc6                 mov eax, esi
// 0040f996  5e                   pop esi
// 0040f997  c20400               ret 4

struct Manager;

struct ManagerTable {
    void *slots[2];
    void (__thiscall *release)(Manager *);
};

struct Manager {
    ManagerTable *vtable;
};

extern Manager *manager;
extern void *objectTable[];
void __cdecl operator delete(void *);

struct S {
    void **vtable;
    unsigned char padding[20];
    unsigned long state;

    void cleanup();
    S *destroy(unsigned int flags);
};

S *S::destroy(unsigned int flags)
{
    vtable = objectTable;
    state = 0xC0000001UL;
    manager->vtable->release(manager);
    cleanup();
    if (flags & 1)
        operator delete(this);
    return this;
}
