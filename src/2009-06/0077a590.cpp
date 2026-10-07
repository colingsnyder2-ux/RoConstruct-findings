// roc 2009-06 0077a590  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077a590
//
// 0077a590  8bc1                 mov eax, ecx
// 0077a592  33c9                 xor ecx, ecx
// 0077a594  c70084c78f00         mov dword ptr [eax], 0x8fc784
// 0077a59a  894804               mov dword ptr [eax + 4], ecx
// 0077a59d  894810               mov dword ptr [eax + 0x10], ecx
// 0077a5a0  89480c               mov dword ptr [eax + 0xc], ecx
// 0077a5a3  894808               mov dword ptr [eax + 8], ecx
// 0077a5a6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0077a590
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0077a590();
};
S_func_0077a590::S_func_0077a590()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
