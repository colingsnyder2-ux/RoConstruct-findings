// roc 2009-06 00811fd0  unit: CXTPRibbonGroup  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00811fd0
//
// 00811fd0  8bc1                 mov eax, ecx
// 00811fd2  33c9                 xor ecx, ecx
// 00811fd4  c700eccc9000         mov dword ptr [eax], 0x90ccec
// 00811fda  894804               mov dword ptr [eax + 4], ecx
// 00811fdd  894810               mov dword ptr [eax + 0x10], ecx
// 00811fe0  89480c               mov dword ptr [eax + 0xc], ecx
// 00811fe3  894808               mov dword ptr [eax + 8], ecx
// 00811fe6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00811fd0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00811fd0();
};
S_func_00811fd0::S_func_00811fd0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
