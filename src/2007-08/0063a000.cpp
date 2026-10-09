// from server: 100% by colin
// roc 2007-08 0063a000  unit: CRobloxControlColorSelector  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063a000
//
// 0063a000  8bc1                 mov eax, ecx
// 0063a002  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 0063a008  85c9                 test ecx, ecx
// 0063a00a  7405                 je 0x63a011
// 0063a00c  e92f9a0000           jmp 0x643a40
// 0063a011  8b88f4000000         mov ecx, dword ptr [eax + 0xf4]
// 0063a017  85c9                 test ecx, ecx
// 0063a019  7410                 je 0x63a02b
// 0063a01b  e860040400           call 0x67a480
// 0063a020  85c0                 test eax, eax
// 0063a022  7407                 je 0x63a02b
// 0063a024  8bc8                 mov ecx, eax
// 0063a026  e9a581ffff           jmp 0x6321d0
// 0063a02b  833dd8868c0000       cmp dword ptr [0x8c86d8], 0
// 0063a032  750a                 jne 0x63a03e
// 0063a034  6a00                 push 0
// 0063a036  e8753c0000           call 0x63dcb0
// 0063a03b  83c404               add esp, 4
// 0063a03e  a1d8868c00           mov eax, dword ptr [0x8c86d8]
// 0063a043  c3                   ret 

struct CRobloxControlColorSelector
{
    char pad[0xf4];
    void* field_f4;
    char pad2[4];
    void* field_fc;
    void* get();
};

extern void* G_8c86d8;

extern void* __fastcall func_0067a480(void*);
extern void* __fastcall func_00643a40(void*);
extern void* __fastcall func_006321d0(void*);
extern void __cdecl func_0063dcb0(int);

void* CRobloxControlColorSelector::get()
{
    if (field_fc != 0)
        return func_00643a40(field_fc);

    if (field_f4 != 0)
    {
        void* p = func_0067a480(field_f4);
        if (p != 0)
            return func_006321d0(p);
    }

    if (G_8c86d8 == 0)
        func_0063dcb0(0);

    return G_8c86d8;
}
