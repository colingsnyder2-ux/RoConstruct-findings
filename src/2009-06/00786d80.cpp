// roc 2009-06 00786d80  unit: CXTPToolTipContext::CStandardToolTip  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00786d80
//
// 00786d80  8bc1                 mov eax, ecx
// 00786d82  33c9                 xor ecx, ecx
// 00786d84  c70064db8f00         mov dword ptr [eax], 0x8fdb64
// 00786d8a  894804               mov dword ptr [eax + 4], ecx
// 00786d8d  894810               mov dword ptr [eax + 0x10], ecx
// 00786d90  89480c               mov dword ptr [eax + 0xc], ecx
// 00786d93  894808               mov dword ptr [eax + 8], ecx
// 00786d96  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00786d80
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00786d80();
};
S_func_00786d80::S_func_00786d80()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
