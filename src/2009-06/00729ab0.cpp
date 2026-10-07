// roc 2009-06 00729ab0  unit: MyXTPCommandBars  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00729ab0
//
// 00729ab0  8bc1                 mov eax, ecx
// 00729ab2  33c9                 xor ecx, ecx
// 00729ab4  c7008c278f00         mov dword ptr [eax], 0x8f278c
// 00729aba  894804               mov dword ptr [eax + 4], ecx
// 00729abd  894810               mov dword ptr [eax + 0x10], ecx
// 00729ac0  89480c               mov dword ptr [eax + 0xc], ecx
// 00729ac3  894808               mov dword ptr [eax + 8], ecx
// 00729ac6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00729ab0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00729ab0();
};
S_func_00729ab0::S_func_00729ab0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
