// roc 2010-06 0089f790  unit: CXTPRibbonTab  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089f790
//
// 0089f790  8bc1                 mov eax, ecx
// 0089f792  33c9                 xor ecx, ecx
// 0089f794  c7003814a700         mov dword ptr [eax], 0xa71438
// 0089f79a  894804               mov dword ptr [eax + 4], ecx
// 0089f79d  894810               mov dword ptr [eax + 0x10], ecx
// 0089f7a0  89480c               mov dword ptr [eax + 0xc], ecx
// 0089f7a3  894808               mov dword ptr [eax + 8], ecx
// 0089f7a6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0089f790
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0089f790();
};
S_func_0089f790::S_func_0089f790()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
