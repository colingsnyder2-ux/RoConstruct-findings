// roc 2008-06 0071d050  unit: CXTPKeyboardManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071d050
//
// 0071d050  8bc1                 mov eax, ecx
// 0071d052  33c9                 xor ecx, ecx
// 0071d054  c70028f48500         mov dword ptr [eax], 0x85f428
// 0071d05a  894804               mov dword ptr [eax + 4], ecx
// 0071d05d  894810               mov dword ptr [eax + 0x10], ecx
// 0071d060  89480c               mov dword ptr [eax + 0xc], ecx
// 0071d063  894808               mov dword ptr [eax + 8], ecx
// 0071d066  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0071d050
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0071d050();
};
S_func_0071d050::S_func_0071d050()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
