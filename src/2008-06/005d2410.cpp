// from server: 100% by king_originala
// roc 2008-06 005d2410  unit: RBX::VSpawnerService::?$FactoryProduct  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d2410
//
// 005d2410  56                   push esi
// 005d2411  8bf1                 mov esi, ecx
// 005d2413  57                   push edi
// 005d2414  8dbe30010000         lea edi, [esi + 0x130]
// 005d241a  8bcf                 mov ecx, edi
// 005d241c  c7062cbd8300         mov dword ptr [esi], 0x83bd2c
// 005d2422  c746101cbd8300       mov dword ptr [esi + 0x10], 0x83bd1c
// 005d2429  c7461414bd8300       mov dword ptr [esi + 0x14], 0x83bd14
// 005d2430  c746200cbd8300       mov dword ptr [esi + 0x20], 0x83bd0c
// 005d2437  c74624fcbc8300       mov dword ptr [esi + 0x24], 0x83bcfc
// 005d243e  c74644ecbc8300       mov dword ptr [esi + 0x44], 0x83bcec
// 005d2445  c74664dcbc8300       mov dword ptr [esi + 0x64], 0x83bcdc
// 005d244c  c78684000000ccbc8300 mov dword ptr [esi + 0x84], 0x83bccc
// 005d2456  c786a4000000bcbc8300 mov dword ptr [esi + 0xa4], 0x83bcbc
// 005d2460  c786c4000000acbc8300 mov dword ptr [esi + 0xc4], 0x83bcac
// 005d246a  e8d1060b00           call 0x682b40
// 005d246f  8b07                 mov eax, dword ptr [edi]
// 005d2471  50                   push eax
// 005d2472  e803e20c00           call 0x6a067a
// 005d2477  83c404               add esp, 4
// 005d247a  5f                   pop edi
// 005d247b  8bce                 mov ecx, esi
// 005d247d  5e                   pop esi
// 005d247e  e92df8ffff           jmp 0x5d1cb0

extern "C" void __cdecl release(void *);

struct Storage {
    void *value;
    void clear();
};

struct S {
    unsigned int data[0x130 / 4];
    Storage storage;
    void destroy();
    void finish();
};

void S::destroy()
{
    Storage *p = &storage;

    data[0x000 / 4] = 0x83bd2c;
    data[0x010 / 4] = 0x83bd1c;
    data[0x014 / 4] = 0x83bd14;
    data[0x020 / 4] = 0x83bd0c;
    data[0x024 / 4] = 0x83bcfc;
    data[0x044 / 4] = 0x83bcec;
    data[0x064 / 4] = 0x83bcdc;
    data[0x084 / 4] = 0x83bccc;
    data[0x0a4 / 4] = 0x83bcbc;
    data[0x0c4 / 4] = 0x83bcac;

    p->clear();
    release(p->value);
    finish();
}
