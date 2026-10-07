// roc 2011-06 008f8310  unit: CXTPRibbonTab  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f8310
//
// 008f8310  8bc1                 mov eax, ecx
// 008f8312  33c9                 xor ecx, ecx
// 008f8314  c70060afad00         mov dword ptr [eax], 0xadaf60
// 008f831a  894804               mov dword ptr [eax + 4], ecx
// 008f831d  894810               mov dword ptr [eax + 0x10], ecx
// 008f8320  89480c               mov dword ptr [eax + 0xc], ecx
// 008f8323  894808               mov dword ptr [eax + 8], ecx
// 008f8326  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008f8310
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008f8310();
};
S_func_008f8310::S_func_008f8310()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
