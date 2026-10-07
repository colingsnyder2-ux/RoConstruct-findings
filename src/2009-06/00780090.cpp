// roc 2009-06 00780090  unit: CXTPStatusBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00780090
//
// 00780090  8bc1                 mov eax, ecx
// 00780092  33c9                 xor ecx, ecx
// 00780094  c70054ce8f00         mov dword ptr [eax], 0x8fce54
// 0078009a  894804               mov dword ptr [eax + 4], ecx
// 0078009d  894810               mov dword ptr [eax + 0x10], ecx
// 007800a0  89480c               mov dword ptr [eax + 0xc], ecx
// 007800a3  894808               mov dword ptr [eax + 8], ecx
// 007800a6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00780090
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00780090();
};
S_func_00780090::S_func_00780090()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
