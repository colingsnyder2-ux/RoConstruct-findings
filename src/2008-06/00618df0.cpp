// from server: 100% by king_originala
// roc 2008-06 00618df0  unit: RBX::VTool::?$FactoryProduct  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618df0
//
// 00618df0  56                   push esi
// 00618df1  8b742408             mov esi, dword ptr [esp + 8]
// 00618df5  57                   push edi
// 00618df6  56                   push esi
// 00618df7  8bf9                 mov edi, ecx
// 00618df9  e8f214ffff           call 0x60a2f0
// 00618dfe  83c404               add esp, 4
// 00618e01  84c0                 test al, al
// 00618e03  7534                 jne 0x618e39
// 00618e05  8d4708               lea eax, [edi + 8]
// 00618e08  85c0                 test eax, eax
// 00618e0a  7422                 je 0x618e2e
// 00618e0c  8b0e                 mov ecx, dword ptr [esi]
// 00618e0e  8908                 mov dword ptr [eax], ecx
// 00618e10  8b5604               mov edx, dword ptr [esi + 4]
// 00618e13  895004               mov dword ptr [eax + 4], edx
// 00618e16  8b4e08               mov ecx, dword ptr [esi + 8]
// 00618e19  894808               mov dword ptr [eax + 8], ecx
// 00618e1c  8b560c               mov edx, dword ptr [esi + 0xc]
// 00618e1f  89500c               mov dword ptr [eax + 0xc], edx
// 00618e22  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00618e25  894810               mov dword ptr [eax + 0x10], ecx
// 00618e28  8b5614               mov edx, dword ptr [esi + 0x14]
// 00618e2b  895014               mov dword ptr [eax + 0x14], edx
// 00618e2e  c707483f8400         mov dword ptr [edi], 0x843f48
// 00618e34  5f                   pop edi
// 00618e35  5e                   pop esi
// 00618e36  c20400               ret 4
// 00618e39  c70700000000         mov dword ptr [edi], 0
// 00618e3f  5f                   pop edi
// 00618e40  5e                   pop esi
// 00618e41  c20400               ret 4

struct Data
{
    unsigned int words[6];
};

extern bool __cdecl func_0060a2f0(const Data*);

struct S
{
    unsigned int tag;
    unsigned int padding;
    Data data;

    void __thiscall func_00618df0(const Data* source);
};

void S::func_00618df0(const Data* source)
{
    if (!func_0060a2f0(source))
    {
        Data* destination = &data;
        if (destination)
            *destination = *source;
        tag = 0x00843f48;
    }
    else
    {
        tag = 0;
    }
}
