// roc 2009-06 0077a550  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077a550
//
// 0077a550  8bc1                 mov eax, ecx
// 0077a552  33c9                 xor ecx, ecx
// 0077a554  c7006cc78f00         mov dword ptr [eax], 0x8fc76c
// 0077a55a  894804               mov dword ptr [eax + 4], ecx
// 0077a55d  894810               mov dword ptr [eax + 0x10], ecx
// 0077a560  89480c               mov dword ptr [eax + 0xc], ecx
// 0077a563  894808               mov dword ptr [eax + 8], ecx
// 0077a566  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0077a550
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0077a550();
};
S_func_0077a550::S_func_0077a550()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
