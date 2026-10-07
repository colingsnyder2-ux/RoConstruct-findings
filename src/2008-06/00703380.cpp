// roc 2008-06 00703380  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00703380
//
// 00703380  8bc1                 mov eax, ecx
// 00703382  33c9                 xor ecx, ecx
// 00703384  c70064b78500         mov dword ptr [eax], 0x85b764
// 0070338a  894804               mov dword ptr [eax + 4], ecx
// 0070338d  894810               mov dword ptr [eax + 0x10], ecx
// 00703390  89480c               mov dword ptr [eax + 0xc], ecx
// 00703393  894808               mov dword ptr [eax + 8], ecx
// 00703396  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00703380
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00703380();
};
S_func_00703380::S_func_00703380()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
