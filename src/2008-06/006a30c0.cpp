// roc 2008-06 006a30c0  unit: CRobloxControlColorSelector  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a30c0
//
// 006a30c0  8bc1                 mov eax, ecx
// 006a30c2  33c9                 xor ecx, ecx
// 006a30c4  c700ec038500         mov dword ptr [eax], 0x8503ec
// 006a30ca  894804               mov dword ptr [eax + 4], ecx
// 006a30cd  894810               mov dword ptr [eax + 0x10], ecx
// 006a30d0  89480c               mov dword ptr [eax + 0xc], ecx
// 006a30d3  894808               mov dword ptr [eax + 8], ecx
// 006a30d6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006a30c0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006a30c0();
};
S_func_006a30c0::S_func_006a30c0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
