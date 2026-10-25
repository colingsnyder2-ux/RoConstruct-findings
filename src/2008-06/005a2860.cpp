// from server: 100% by king_originala
// roc 2008-06 005a2860  unit: RBX::Workspace  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a2860
//
// 005a2860  56                   push esi
// 005a2861  8b742408             mov esi, dword ptr [esp + 8]
// 005a2865  57                   push edi
// 005a2866  56                   push esi
// 005a2867  8bf9                 mov edi, ecx
// 005a2869  e8827a0600           call 0x60a2f0
// 005a286e  83c404               add esp, 4
// 005a2871  84c0                 test al, al
// 005a2873  7534                 jne 0x5a28a9
// 005a2875  8d4708               lea eax, [edi + 8]
// 005a2878  85c0                 test eax, eax
// 005a287a  7422                 je 0x5a289e
// 005a287c  8b0e                 mov ecx, dword ptr [esi]
// 005a287e  8908                 mov dword ptr [eax], ecx
// 005a2880  8b5604               mov edx, dword ptr [esi + 4]
// 005a2883  895004               mov dword ptr [eax + 4], edx
// 005a2886  8b4e08               mov ecx, dword ptr [esi + 8]
// 005a2889  894808               mov dword ptr [eax + 8], ecx
// 005a288c  8b560c               mov edx, dword ptr [esi + 0xc]
// 005a288f  89500c               mov dword ptr [eax + 0xc], edx
// 005a2892  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005a2895  894810               mov dword ptr [eax + 0x10], ecx
// 005a2898  8b5614               mov edx, dword ptr [esi + 0x14]
// 005a289b  895014               mov dword ptr [eax + 0x14], edx
// 005a289e  c70708398300         mov dword ptr [edi], 0x833908
// 005a28a4  5f                   pop edi
// 005a28a5  5e                   pop esi
// 005a28a6  c20400               ret 4
// 005a28a9  c70700000000         mov dword ptr [edi], 0
// 005a28af  5f                   pop edi
// 005a28b0  5e                   pop esi
// 005a28b1  c20400               ret 4

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
