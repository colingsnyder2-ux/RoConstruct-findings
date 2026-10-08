// roc 2007-08 00699260  unit: CXTPPropertyGridItemConstraints  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00699260
//
// 00699260  8bc1                 mov eax, ecx
// 00699262  33c9                 xor ecx, ecx
// 00699264  c70068167d00         mov dword ptr [eax], 0x7d1668
// 0069926a  894804               mov dword ptr [eax + 4], ecx
// 0069926d  894810               mov dword ptr [eax + 0x10], ecx
// 00699270  89480c               mov dword ptr [eax + 0xc], ecx
// 00699273  894808               mov dword ptr [eax + 8], ecx
// 00699276  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00699260
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00699260();
};
S_func_00699260::S_func_00699260()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
