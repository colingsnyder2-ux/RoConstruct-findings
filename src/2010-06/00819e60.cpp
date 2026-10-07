// roc 2010-06 00819e60  unit: CXTPPropertyGridItemConstraints  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00819e60
//
// 00819e60  8bc1                 mov eax, ecx
// 00819e62  33c9                 xor ecx, ecx
// 00819e64  c700b82ca600         mov dword ptr [eax], 0xa62cb8
// 00819e6a  894804               mov dword ptr [eax + 4], ecx
// 00819e6d  894810               mov dword ptr [eax + 0x10], ecx
// 00819e70  89480c               mov dword ptr [eax + 0xc], ecx
// 00819e73  894808               mov dword ptr [eax + 8], ecx
// 00819e76  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00819e60
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00819e60();
};
S_func_00819e60::S_func_00819e60()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
