// roc 2008-06 006a3080  unit: CRobloxControlColorSelector  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a3080
//
// 006a3080  8bc1                 mov eax, ecx
// 006a3082  33c9                 xor ecx, ecx
// 006a3084  c700d4038500         mov dword ptr [eax], 0x8503d4
// 006a308a  894804               mov dword ptr [eax + 4], ecx
// 006a308d  894810               mov dword ptr [eax + 0x10], ecx
// 006a3090  89480c               mov dword ptr [eax + 0xc], ecx
// 006a3093  894808               mov dword ptr [eax + 8], ecx
// 006a3096  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006a3080
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006a3080();
};
S_func_006a3080::S_func_006a3080()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
