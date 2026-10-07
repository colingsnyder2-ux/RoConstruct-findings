// roc 2010-06 00819e20  unit: CXTPPropertyGridItemConstraints  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00819e20
//
// 00819e20  8bc1                 mov eax, ecx
// 00819e22  33c9                 xor ecx, ecx
// 00819e24  c700a02ca600         mov dword ptr [eax], 0xa62ca0
// 00819e2a  894804               mov dword ptr [eax + 4], ecx
// 00819e2d  894810               mov dword ptr [eax + 0x10], ecx
// 00819e30  89480c               mov dword ptr [eax + 0xc], ecx
// 00819e33  894808               mov dword ptr [eax + 8], ecx
// 00819e36  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00819e20
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00819e20();
};
S_func_00819e20::S_func_00819e20()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
