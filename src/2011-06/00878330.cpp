// roc 2011-06 00878330  unit: CXTPPropertyGridView  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00878330
//
// 00878330  8bc1                 mov eax, ecx
// 00878332  33c9                 xor ecx, ecx
// 00878334  c700dcd9ac00         mov dword ptr [eax], 0xacd9dc
// 0087833a  894804               mov dword ptr [eax + 4], ecx
// 0087833d  894810               mov dword ptr [eax + 0x10], ecx
// 00878340  89480c               mov dword ptr [eax + 0xc], ecx
// 00878343  894808               mov dword ptr [eax + 8], ecx
// 00878346  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00878330
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00878330();
};
S_func_00878330::S_func_00878330()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
