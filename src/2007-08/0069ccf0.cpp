// roc 2007-08 0069ccf0  unit: CXTPPropertyGridView  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069ccf0
//
// 0069ccf0  8bc1                 mov eax, ecx
// 0069ccf2  33c9                 xor ecx, ecx
// 0069ccf4  c700041f7d00         mov dword ptr [eax], 0x7d1f04
// 0069ccfa  894804               mov dword ptr [eax + 4], ecx
// 0069ccfd  894810               mov dword ptr [eax + 0x10], ecx
// 0069cd00  89480c               mov dword ptr [eax + 0xc], ecx
// 0069cd03  894808               mov dword ptr [eax + 8], ecx
// 0069cd06  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0069ccf0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0069ccf0();
};
S_func_0069ccf0::S_func_0069ccf0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
