// roc 2007-08 0068a120  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068a120
//
// 0068a120  8bc1                 mov eax, ecx
// 0068a122  33c9                 xor ecx, ecx
// 0068a124  c700e4fc7c00         mov dword ptr [eax], 0x7cfce4
// 0068a12a  894804               mov dword ptr [eax + 4], ecx
// 0068a12d  894810               mov dword ptr [eax + 0x10], ecx
// 0068a130  89480c               mov dword ptr [eax + 0xc], ecx
// 0068a133  894808               mov dword ptr [eax + 8], ecx
// 0068a136  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0068a120
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0068a120();
};
S_func_0068a120::S_func_0068a120()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
