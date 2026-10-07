// roc 2007-08 0066c620  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0066c620
//
// 0066c620  8bc1                 mov eax, ecx
// 0066c622  33c9                 xor ecx, ecx
// 0066c624  c70098b07c00         mov dword ptr [eax], 0x7cb098
// 0066c62a  894804               mov dword ptr [eax + 4], ecx
// 0066c62d  894810               mov dword ptr [eax + 0x10], ecx
// 0066c630  89480c               mov dword ptr [eax + 0xc], ecx
// 0066c633  894808               mov dword ptr [eax + 8], ecx
// 0066c636  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0066c620
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0066c620();
};
S_func_0066c620::S_func_0066c620()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
