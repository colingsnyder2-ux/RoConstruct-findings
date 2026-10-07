// roc 2009-06 00780050  unit: CXTPStatusBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00780050
//
// 00780050  8bc1                 mov eax, ecx
// 00780052  33c9                 xor ecx, ecx
// 00780054  c7003cce8f00         mov dword ptr [eax], 0x8fce3c
// 0078005a  894804               mov dword ptr [eax + 4], ecx
// 0078005d  894810               mov dword ptr [eax + 0x10], ecx
// 00780060  89480c               mov dword ptr [eax + 0xc], ecx
// 00780063  894808               mov dword ptr [eax + 8], ecx
// 00780066  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00780050
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00780050();
};
S_func_00780050::S_func_00780050()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
