// from server: 100% by king_originala
// roc 2008-06 005b17d0  unit: RBX::VHat::?$FactoryProduct  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b17d0
//
// 005b17d0  56                   push esi
// 005b17d1  8b742408             mov esi, dword ptr [esp + 8]
// 005b17d5  57                   push edi
// 005b17d6  56                   push esi
// 005b17d7  8bf9                 mov edi, ecx
// 005b17d9  e8128b0500           call 0x60a2f0
// 005b17de  83c404               add esp, 4
// 005b17e1  84c0                 test al, al
// 005b17e3  7534                 jne 0x5b1819
// 005b17e5  8d4708               lea eax, [edi + 8]
// 005b17e8  85c0                 test eax, eax
// 005b17ea  7422                 je 0x5b180e
// 005b17ec  8b0e                 mov ecx, dword ptr [esi]
// 005b17ee  8908                 mov dword ptr [eax], ecx
// 005b17f0  8b5604               mov edx, dword ptr [esi + 4]
// 005b17f3  895004               mov dword ptr [eax + 4], edx
// 005b17f6  8b4e08               mov ecx, dword ptr [esi + 8]
// 005b17f9  894808               mov dword ptr [eax + 8], ecx
// 005b17fc  8b560c               mov edx, dword ptr [esi + 0xc]
// 005b17ff  89500c               mov dword ptr [eax + 0xc], edx
// 005b1802  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005b1805  894810               mov dword ptr [eax + 0x10], ecx
// 005b1808  8b5614               mov edx, dword ptr [esi + 0x14]
// 005b180b  895014               mov dword ptr [eax + 0x14], edx
// 005b180e  c7073c4d8300         mov dword ptr [edi], 0x834d3c
// 005b1814  5f                   pop edi
// 005b1815  5e                   pop esi
// 005b1816  c20400               ret 4
// 005b1819  c70700000000         mov dword ptr [edi], 0
// 005b181f  5f                   pop edi
// 005b1820  5e                   pop esi
// 005b1821  c20400               ret 4

struct Data
{
    unsigned int words[6];
};

extern bool __cdecl func_0060a2f0();
extern char marker;

struct S
{
    const void* tag;
    unsigned int reserved;
    Data data;

    void func_005b17d0(const Data& source);
};

void S::func_005b17d0(const Data& source)
{
    typedef bool (__cdecl *Predicate)(const Data&);
    if (!((Predicate)&func_0060a2f0)(source))
    {
        Data* destination = &data;
        if (destination)
            *destination = source;
        tag = &marker;
    }
    else
    {
        tag = 0;
    }
}
