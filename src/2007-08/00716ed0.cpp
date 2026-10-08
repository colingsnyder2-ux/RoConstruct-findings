// roc 2007-08 00716ed0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716ed0
//
// 00716ed0  8bc1                 mov eax, ecx
// 00716ed2  33c9                 xor ecx, ecx
// 00716ed4  c70004f37d00         mov dword ptr [eax], 0x7df304
// 00716eda  894804               mov dword ptr [eax + 4], ecx
// 00716edd  894810               mov dword ptr [eax + 0x10], ecx
// 00716ee0  89480c               mov dword ptr [eax + 0xc], ecx
// 00716ee3  894808               mov dword ptr [eax + 8], ecx
// 00716ee6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00716ed0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00716ed0();
};
S_func_00716ed0::S_func_00716ed0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
