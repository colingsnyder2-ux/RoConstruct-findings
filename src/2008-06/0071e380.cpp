// roc 2008-06 0071e380  unit: CXTPShortcutManager::CKeyHelper  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071e380
//
// 0071e380  8bc1                 mov eax, ecx
// 0071e382  33c9                 xor ecx, ecx
// 0071e384  c700f8f48500         mov dword ptr [eax], 0x85f4f8
// 0071e38a  894804               mov dword ptr [eax + 4], ecx
// 0071e38d  894810               mov dword ptr [eax + 0x10], ecx
// 0071e390  89480c               mov dword ptr [eax + 0xc], ecx
// 0071e393  894808               mov dword ptr [eax + 8], ecx
// 0071e396  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0071e380
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0071e380();
};
S_func_0071e380::S_func_0071e380()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
