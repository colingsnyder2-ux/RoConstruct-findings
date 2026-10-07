// roc 2009-06 0078edc0  unit: CXTPPropertyGridView  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078edc0
//
// 0078edc0  8bc1                 mov eax, ecx
// 0078edc2  33c9                 xor ecx, ecx
// 0078edc4  c700eced8f00         mov dword ptr [eax], 0x8fedec
// 0078edca  894804               mov dword ptr [eax + 4], ecx
// 0078edcd  894810               mov dword ptr [eax + 0x10], ecx
// 0078edd0  89480c               mov dword ptr [eax + 0xc], ecx
// 0078edd3  894808               mov dword ptr [eax + 8], ecx
// 0078edd6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0078edc0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0078edc0();
};
S_func_0078edc0::S_func_0078edc0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
