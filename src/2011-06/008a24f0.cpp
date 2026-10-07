// roc 2011-06 008a24f0  unit: ATL::CRegObject  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a24f0
//
// 008a24f0  8bc1                 mov eax, ecx
// 008a24f2  33c9                 xor ecx, ecx
// 008a24f4  c7008027ad00         mov dword ptr [eax], 0xad2780
// 008a24fa  894804               mov dword ptr [eax + 4], ecx
// 008a24fd  894810               mov dword ptr [eax + 0x10], ecx
// 008a2500  89480c               mov dword ptr [eax + 0xc], ecx
// 008a2503  894808               mov dword ptr [eax + 8], ecx
// 008a2506  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008a24f0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008a24f0();
};
S_func_008a24f0::S_func_008a24f0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
