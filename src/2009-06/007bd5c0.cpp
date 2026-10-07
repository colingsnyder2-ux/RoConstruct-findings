// roc 2009-06 007bd5c0  unit: CXTPRibbonBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007bd5c0
//
// 007bd5c0  8bc1                 mov eax, ecx
// 007bd5c2  33c9                 xor ecx, ecx
// 007bd5c4  c700944b9000         mov dword ptr [eax], 0x904b94
// 007bd5ca  894804               mov dword ptr [eax + 4], ecx
// 007bd5cd  894810               mov dword ptr [eax + 0x10], ecx
// 007bd5d0  89480c               mov dword ptr [eax + 0xc], ecx
// 007bd5d3  894808               mov dword ptr [eax + 8], ecx
// 007bd5d6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007bd5c0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007bd5c0();
};
S_func_007bd5c0::S_func_007bd5c0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
