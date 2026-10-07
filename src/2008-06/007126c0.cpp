// roc 2008-06 007126c0  unit: CXTPPropertyGridItemConstraints  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007126c0
//
// 007126c0  8bc1                 mov eax, ecx
// 007126c2  33c9                 xor ecx, ecx
// 007126c4  c70000d58500         mov dword ptr [eax], 0x85d500
// 007126ca  894804               mov dword ptr [eax + 4], ecx
// 007126cd  894810               mov dword ptr [eax + 0x10], ecx
// 007126d0  89480c               mov dword ptr [eax + 0xc], ecx
// 007126d3  894808               mov dword ptr [eax + 8], ecx
// 007126d6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007126c0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007126c0();
};
S_func_007126c0::S_func_007126c0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
