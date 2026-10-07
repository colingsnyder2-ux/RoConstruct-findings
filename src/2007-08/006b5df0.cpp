// roc 2007-08 006b5df0  unit: CXTPControlGalleryPaintManager  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006b5df0
//
// 006b5df0  8bc1                 mov eax, ecx
// 006b5df2  33c9                 xor ecx, ecx
// 006b5df4  c70034637d00         mov dword ptr [eax], 0x7d6334
// 006b5dfa  894804               mov dword ptr [eax + 4], ecx
// 006b5dfd  894810               mov dword ptr [eax + 0x10], ecx
// 006b5e00  89480c               mov dword ptr [eax + 0xc], ecx
// 006b5e03  894808               mov dword ptr [eax + 8], ecx
// 006b5e06  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006b5df0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006b5df0();
};
S_func_006b5df0::S_func_006b5df0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
