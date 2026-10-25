// from server: 100% by king_originala
// roc 2008-06 0064a400  unit: RBX::CleanStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a400
//
// 0064a400  56                   push esi
// 0064a401  57                   push edi
// 0064a402  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064a406  8bf1                 mov esi, ecx
// 0064a408  8b4e08               mov ecx, dword ptr [esi + 8]
// 0064a40b  57                   push edi
// 0064a40c  e83fe40100           call 0x668850
// 0064a411  56                   push esi
// 0064a412  8bcf                 mov ecx, edi
// 0064a414  e807b4ffff           call 0x645820
// 0064a419  5f                   pop edi
// 0064a41a  5e                   pop esi
// 0064a41b  c20400               ret 4

struct S_func_00645820 {
    char pad0[4];
    int m_x;
    void f(int a1);
};

struct S_func_00668850 {
    void f(S_func_00645820* a1);
};

struct S {
    char pad0[8];
    S_func_00668850* member;
    void f(S_func_00645820* a1);
};

void S::f(S_func_00645820* a1)
{
    member->f(a1);
    a1->f((int)this);
}
