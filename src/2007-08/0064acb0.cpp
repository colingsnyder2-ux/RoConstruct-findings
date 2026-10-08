// roc 2007-08 0064acb0  unit: CXTPCommandBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064acb0
//
// 0064acb0  8bc1                 mov eax, ecx
// 0064acb2  33c9                 xor ecx, ecx
// 0064acb4  c700886c7c00         mov dword ptr [eax], 0x7c6c88
// 0064acba  894804               mov dword ptr [eax + 4], ecx
// 0064acbd  894810               mov dword ptr [eax + 0x10], ecx
// 0064acc0  89480c               mov dword ptr [eax + 0xc], ecx
// 0064acc3  894808               mov dword ptr [eax + 8], ecx
// 0064acc6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0064acb0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0064acb0();
};
S_func_0064acb0::S_func_0064acb0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
