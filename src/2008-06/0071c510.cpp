// roc 2008-06 0071c510  unit: CXTPHookManagerHookAble  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071c510
//
// 0071c510  8bc1                 mov eax, ecx
// 0071c512  33c9                 xor ecx, ecx
// 0071c514  c700f0f38500         mov dword ptr [eax], 0x85f3f0
// 0071c51a  894804               mov dword ptr [eax + 4], ecx
// 0071c51d  894810               mov dword ptr [eax + 0x10], ecx
// 0071c520  89480c               mov dword ptr [eax + 0xc], ecx
// 0071c523  894808               mov dword ptr [eax + 8], ecx
// 0071c526  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0071c510
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0071c510();
};
S_func_0071c510::S_func_0071c510()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
