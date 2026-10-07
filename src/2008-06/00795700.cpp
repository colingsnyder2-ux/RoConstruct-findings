// roc 2008-06 00795700  unit: CXTPRibbonGroup  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00795700
//
// 00795700  8bc1                 mov eax, ecx
// 00795702  33c9                 xor ecx, ecx
// 00795704  c700e0b78600         mov dword ptr [eax], 0x86b7e0
// 0079570a  894804               mov dword ptr [eax + 4], ecx
// 0079570d  894810               mov dword ptr [eax + 0x10], ecx
// 00795710  89480c               mov dword ptr [eax + 0xc], ecx
// 00795713  894808               mov dword ptr [eax + 8], ecx
// 00795716  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00795700
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00795700();
};
S_func_00795700::S_func_00795700()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
