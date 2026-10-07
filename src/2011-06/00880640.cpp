// roc 2011-06 00880640  unit: CXTPResourceManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00880640
//
// 00880640  8bc1                 mov eax, ecx
// 00880642  33c9                 xor ecx, ecx
// 00880644  c700f8f9ac00         mov dword ptr [eax], 0xacf9f8
// 0088064a  894804               mov dword ptr [eax + 4], ecx
// 0088064d  894810               mov dword ptr [eax + 0x10], ecx
// 00880650  89480c               mov dword ptr [eax + 0xc], ecx
// 00880653  894808               mov dword ptr [eax + 8], ecx
// 00880656  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00880640
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00880640();
};
S_func_00880640::S_func_00880640()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
