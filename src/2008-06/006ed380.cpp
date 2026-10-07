// roc 2008-06 006ed380  unit: CXTPCustomizeCommandsPage  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ed380
//
// 006ed380  8bc1                 mov eax, ecx
// 006ed382  33c9                 xor ecx, ecx
// 006ed384  c70090868500         mov dword ptr [eax], 0x858690
// 006ed38a  894804               mov dword ptr [eax + 4], ecx
// 006ed38d  894810               mov dword ptr [eax + 0x10], ecx
// 006ed390  89480c               mov dword ptr [eax + 0xc], ecx
// 006ed393  894808               mov dword ptr [eax + 8], ecx
// 006ed396  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006ed380
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006ed380();
};
S_func_006ed380::S_func_006ed380()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
