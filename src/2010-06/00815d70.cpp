// roc 2010-06 00815d70  unit: CXTPToolTipContext::CStandardToolTip  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00815d70
//
// 00815d70  8bc1                 mov eax, ecx
// 00815d72  33c9                 xor ecx, ecx
// 00815d74  c700cc22a600         mov dword ptr [eax], 0xa622cc
// 00815d7a  894804               mov dword ptr [eax + 4], ecx
// 00815d7d  894810               mov dword ptr [eax + 0x10], ecx
// 00815d80  89480c               mov dword ptr [eax + 0xc], ecx
// 00815d83  894808               mov dword ptr [eax + 8], ecx
// 00815d86  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00815d70
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00815d70();
};
S_func_00815d70::S_func_00815d70()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
