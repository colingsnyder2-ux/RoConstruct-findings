// roc 2008-06 006e3490  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e3490
//
// 006e3490  8bc1                 mov eax, ecx
// 006e3492  33c9                 xor ecx, ecx
// 006e3494  c70084688500         mov dword ptr [eax], 0x856884
// 006e349a  894804               mov dword ptr [eax + 4], ecx
// 006e349d  894810               mov dword ptr [eax + 0x10], ecx
// 006e34a0  89480c               mov dword ptr [eax + 0xc], ecx
// 006e34a3  894808               mov dword ptr [eax + 8], ecx
// 006e34a6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006e3490
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006e3490();
};
S_func_006e3490::S_func_006e3490()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
