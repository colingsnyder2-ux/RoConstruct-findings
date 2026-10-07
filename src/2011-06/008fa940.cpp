// roc 2011-06 008fa940  unit: CXTPRibbonGroup  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fa940
//
// 008fa940  8bc1                 mov eax, ecx
// 008fa942  33c9                 xor ecx, ecx
// 008fa944  c7007cb8ad00         mov dword ptr [eax], 0xadb87c
// 008fa94a  894804               mov dword ptr [eax + 4], ecx
// 008fa94d  894810               mov dword ptr [eax + 0x10], ecx
// 008fa950  89480c               mov dword ptr [eax + 0xc], ecx
// 008fa953  894808               mov dword ptr [eax + 8], ecx
// 008fa956  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008fa940
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008fa940();
};
S_func_008fa940::S_func_008fa940()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
