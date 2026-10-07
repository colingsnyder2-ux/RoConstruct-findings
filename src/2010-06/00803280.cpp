// roc 2010-06 00803280  unit: CXTPPropertyGrid  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00803280
//
// 00803280  8bc1                 mov eax, ecx
// 00803282  33c9                 xor ecx, ecx
// 00803284  c7007002a600         mov dword ptr [eax], 0xa60270
// 0080328a  894804               mov dword ptr [eax + 4], ecx
// 0080328d  894810               mov dword ptr [eax + 0x10], ecx
// 00803290  89480c               mov dword ptr [eax + 0xc], ecx
// 00803293  894808               mov dword ptr [eax + 8], ecx
// 00803296  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00803280
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00803280();
};
S_func_00803280::S_func_00803280()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
