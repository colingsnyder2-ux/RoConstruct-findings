// roc 2009-06 007b2780  unit: CXTPDockBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b2780
//
// 007b2780  8bc1                 mov eax, ecx
// 007b2782  33c9                 xor ecx, ecx
// 007b2784  c7002c2d9000         mov dword ptr [eax], 0x902d2c
// 007b278a  894804               mov dword ptr [eax + 4], ecx
// 007b278d  894810               mov dword ptr [eax + 0x10], ecx
// 007b2790  89480c               mov dword ptr [eax + 0xc], ecx
// 007b2793  894808               mov dword ptr [eax + 8], ecx
// 007b2796  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007b2780
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007b2780();
};
S_func_007b2780::S_func_007b2780()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
