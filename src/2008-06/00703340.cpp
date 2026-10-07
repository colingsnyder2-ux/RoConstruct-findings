// roc 2008-06 00703340  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00703340
//
// 00703340  8bc1                 mov eax, ecx
// 00703342  33c9                 xor ecx, ecx
// 00703344  c7004cb78500         mov dword ptr [eax], 0x85b74c
// 0070334a  894804               mov dword ptr [eax + 4], ecx
// 0070334d  894810               mov dword ptr [eax + 0x10], ecx
// 00703350  89480c               mov dword ptr [eax + 0xc], ecx
// 00703353  894808               mov dword ptr [eax + 8], ecx
// 00703356  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00703340
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00703340();
};
S_func_00703340::S_func_00703340()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
