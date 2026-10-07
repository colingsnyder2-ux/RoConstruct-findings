// roc 2011-06 0089e8b0  unit: CXTPKeyboardManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089e8b0
//
// 0089e8b0  8bc1                 mov eax, ecx
// 0089e8b2  33c9                 xor ecx, ecx
// 0089e8b4  c700781ead00         mov dword ptr [eax], 0xad1e78
// 0089e8ba  894804               mov dword ptr [eax + 4], ecx
// 0089e8bd  894810               mov dword ptr [eax + 0x10], ecx
// 0089e8c0  89480c               mov dword ptr [eax + 0xc], ecx
// 0089e8c3  894808               mov dword ptr [eax + 8], ecx
// 0089e8c6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0089e8b0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0089e8b0();
};
S_func_0089e8b0::S_func_0089e8b0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
