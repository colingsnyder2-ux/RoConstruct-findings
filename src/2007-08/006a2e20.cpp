// roc 2007-08 006a2e20  unit: CXTPHookManagerHookAble  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006a2e20
//
// 006a2e20  8bc1                 mov eax, ecx
// 006a2e22  33c9                 xor ecx, ecx
// 006a2e24  c70020357d00         mov dword ptr [eax], 0x7d3520
// 006a2e2a  894804               mov dword ptr [eax + 4], ecx
// 006a2e2d  894810               mov dword ptr [eax + 0x10], ecx
// 006a2e30  89480c               mov dword ptr [eax + 0xc], ecx
// 006a2e33  894808               mov dword ptr [eax + 8], ecx
// 006a2e36  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006a2e20
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006a2e20();
};
S_func_006a2e20::S_func_006a2e20()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
