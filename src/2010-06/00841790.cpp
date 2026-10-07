// roc 2010-06 00841790  unit: CXTPKeyboardManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00841790
//
// 00841790  8bc1                 mov eax, ecx
// 00841792  33c9                 xor ecx, ecx
// 00841794  c7005874a600         mov dword ptr [eax], 0xa67458
// 0084179a  894804               mov dword ptr [eax + 4], ecx
// 0084179d  894810               mov dword ptr [eax + 0x10], ecx
// 008417a0  89480c               mov dword ptr [eax + 0xc], ecx
// 008417a3  894808               mov dword ptr [eax + 8], ecx
// 008417a6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00841790
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00841790();
};
S_func_00841790::S_func_00841790()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
