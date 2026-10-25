// from server: 100% by colin
// roc 2008-06 005d23b0  unit: RBX::VSpawnerService::?$FactoryProduct  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d23b0
//
// 005d23b0  56                   push esi
// 005d23b1  8b742408             mov esi, dword ptr [esp + 8]
// 005d23b5  57                   push edi
// 005d23b6  56                   push esi
// 005d23b7  8bf9                 mov edi, ecx
// 005d23b9  e8327f0300           call 0x60a2f0
// 005d23be  83c404               add esp, 4
// 005d23c1  84c0                 test al, al
// 005d23c3  7534                 jne 0x5d23f9
// 005d23c5  8d4708               lea eax, [edi + 8]
// 005d23c8  85c0                 test eax, eax
// 005d23ca  7422                 je 0x5d23ee
// 005d23cc  8b0e                 mov ecx, dword ptr [esi]
// 005d23ce  8908                 mov dword ptr [eax], ecx
// 005d23d0  8b5604               mov edx, dword ptr [esi + 4]
// 005d23d3  895004               mov dword ptr [eax + 4], edx
// 005d23d6  8b4e08               mov ecx, dword ptr [esi + 8]
// 005d23d9  894808               mov dword ptr [eax + 8], ecx
// 005d23dc  8b560c               mov edx, dword ptr [esi + 0xc]
// 005d23df  89500c               mov dword ptr [eax + 0xc], edx
// 005d23e2  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005d23e5  894810               mov dword ptr [eax + 0x10], ecx
// 005d23e8  8b5614               mov edx, dword ptr [esi + 0x14]
// 005d23eb  895014               mov dword ptr [eax + 0x14], edx
// 005d23ee  c707a0bc8300         mov dword ptr [edi], 0x83bca0
// 005d23f4  5f                   pop edi
// 005d23f5  5e                   pop esi
// 005d23f6  c20400               ret 4
// 005d23f9  c70700000000         mov dword ptr [edi], 0
// 005d23ff  5f                   pop edi
// 005d2400  5e                   pop esi
// 005d2401  c20400               ret 4

struct Data {
    unsigned long a, b, c, d, e, f;
};

extern bool __cdecl func_0060a2f0();
extern unsigned char tag;

struct S {
    const void *type;
    unsigned long unused;
    Data data;

    void f(const Data &value);
};

void S::f(const Data &value)
{
    if (!reinterpret_cast<bool (__cdecl *)(const Data *)>(
            &func_0060a2f0)(&value)) {
        Data *destination = &data;
        if (destination)
            *destination = value;
        type = &tag;
    } else {
        type = 0;
    }
}
