// roc 2007-08 00692a80  unit: CXTPStatusBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692a80
//
// 00692a80  8bc1                 mov eax, ecx
// 00692a82  33c9                 xor ecx, ecx
// 00692a84  c700a8097d00         mov dword ptr [eax], 0x7d09a8
// 00692a8a  894804               mov dword ptr [eax + 4], ecx
// 00692a8d  894810               mov dword ptr [eax + 0x10], ecx
// 00692a90  89480c               mov dword ptr [eax + 0xc], ecx
// 00692a93  894808               mov dword ptr [eax + 8], ecx
// 00692a96  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00692a80
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00692a80();
};
S_func_00692a80::S_func_00692a80()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
