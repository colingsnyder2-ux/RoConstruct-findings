// roc 2011-06 0086c850  unit: CXTPStatusBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086c850
//
// 0086c850  8bc1                 mov eax, ecx
// 0086c852  33c9                 xor ecx, ecx
// 0086c854  c7009cbeac00         mov dword ptr [eax], 0xacbe9c
// 0086c85a  894804               mov dword ptr [eax + 4], ecx
// 0086c85d  894810               mov dword ptr [eax + 0x10], ecx
// 0086c860  89480c               mov dword ptr [eax + 0xc], ecx
// 0086c863  894808               mov dword ptr [eax + 8], ecx
// 0086c866  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0086c850
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0086c850();
};
S_func_0086c850::S_func_0086c850()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
