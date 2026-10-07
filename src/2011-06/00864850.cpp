// roc 2011-06 00864850  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864850
//
// 00864850  8bc1                 mov eax, ecx
// 00864852  33c9                 xor ecx, ecx
// 00864854  c70074b1ac00         mov dword ptr [eax], 0xacb174
// 0086485a  894804               mov dword ptr [eax + 4], ecx
// 0086485d  894810               mov dword ptr [eax + 0x10], ecx
// 00864860  89480c               mov dword ptr [eax + 0xc], ecx
// 00864863  894808               mov dword ptr [eax + 8], ecx
// 00864866  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00864850
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00864850();
};
S_func_00864850::S_func_00864850()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
