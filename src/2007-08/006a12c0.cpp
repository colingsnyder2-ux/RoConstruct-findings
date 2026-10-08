// roc 2007-08 006a12c0  unit: CXTPDockBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a12c0
//
// 006a12c0  8bc1                 mov eax, ecx
// 006a12c2  33c9                 xor ecx, ecx
// 006a12c4  c700c4327d00         mov dword ptr [eax], 0x7d32c4
// 006a12ca  894804               mov dword ptr [eax + 4], ecx
// 006a12cd  894810               mov dword ptr [eax + 0x10], ecx
// 006a12d0  89480c               mov dword ptr [eax + 0xc], ecx
// 006a12d3  894808               mov dword ptr [eax + 8], ecx
// 006a12d6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006a12c0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006a12c0();
};
S_func_006a12c0::S_func_006a12c0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
