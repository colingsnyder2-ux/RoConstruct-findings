// roc 2007-08 006a3980  unit: CXTPKeyboardManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3980
//
// 006a3980  8bc1                 mov eax, ecx
// 006a3982  33c9                 xor ecx, ecx
// 006a3984  c70058357d00         mov dword ptr [eax], 0x7d3558
// 006a398a  894804               mov dword ptr [eax + 4], ecx
// 006a398d  894810               mov dword ptr [eax + 0x10], ecx
// 006a3990  89480c               mov dword ptr [eax + 0xc], ecx
// 006a3993  894808               mov dword ptr [eax + 8], ecx
// 006a3996  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006a3980
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006a3980();
};
S_func_006a3980::S_func_006a3980()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
