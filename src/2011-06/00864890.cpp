// roc 2011-06 00864890  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864890
//
// 00864890  8bc1                 mov eax, ecx
// 00864892  33c9                 xor ecx, ecx
// 00864894  c7008cb1ac00         mov dword ptr [eax], 0xacb18c
// 0086489a  894804               mov dword ptr [eax + 4], ecx
// 0086489d  894810               mov dword ptr [eax + 0x10], ecx
// 008648a0  89480c               mov dword ptr [eax + 0xc], ecx
// 008648a3  894808               mov dword ptr [eax + 8], ecx
// 008648a6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00864890
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00864890();
};
S_func_00864890::S_func_00864890()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
