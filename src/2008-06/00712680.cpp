// roc 2008-06 00712680  unit: CXTPPropertyGridItemConstraints  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00712680
//
// 00712680  8bc1                 mov eax, ecx
// 00712682  33c9                 xor ecx, ecx
// 00712684  c700e8d48500         mov dword ptr [eax], 0x85d4e8
// 0071268a  894804               mov dword ptr [eax + 4], ecx
// 0071268d  894810               mov dword ptr [eax + 0x10], ecx
// 00712690  89480c               mov dword ptr [eax + 0xc], ecx
// 00712693  894808               mov dword ptr [eax + 8], ecx
// 00712696  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00712680
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00712680();
};
S_func_00712680::S_func_00712680()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
