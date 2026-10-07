// roc 2011-06 008de470  unit: CXTPPropertyGridInplaceButton  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de470
//
// 008de470  8bc1                 mov eax, ecx
// 008de472  33c9                 xor ecx, ecx
// 008de474  c700d07ead00         mov dword ptr [eax], 0xad7ed0
// 008de47a  894804               mov dword ptr [eax + 4], ecx
// 008de47d  894810               mov dword ptr [eax + 0x10], ecx
// 008de480  89480c               mov dword ptr [eax + 0xc], ecx
// 008de483  894808               mov dword ptr [eax + 8], ecx
// 008de486  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008de470
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008de470();
};
S_func_008de470::S_func_008de470()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
