// roc 2010-06 0087bab0  unit: VCEdit::?$CXTMaskEditT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087bab0
//
// 0087bab0  8bc1                 mov eax, ecx
// 0087bab2  33c9                 xor ecx, ecx
// 0087bab4  c70090e1a600         mov dword ptr [eax], 0xa6e190
// 0087baba  894804               mov dword ptr [eax + 4], ecx
// 0087babd  894810               mov dword ptr [eax + 0x10], ecx
// 0087bac0  89480c               mov dword ptr [eax + 0xc], ecx
// 0087bac3  894808               mov dword ptr [eax + 8], ecx
// 0087bac6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0087bab0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0087bab0();
};
S_func_0087bab0::S_func_0087bab0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
