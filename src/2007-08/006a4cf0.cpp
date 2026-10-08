// roc 2007-08 006a4cf0  unit: CXTPShortcutManager::CKeyHelper  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a4cf0
//
// 006a4cf0  8bc1                 mov eax, ecx
// 006a4cf2  33c9                 xor ecx, ecx
// 006a4cf4  c70028367d00         mov dword ptr [eax], 0x7d3628
// 006a4cfa  894804               mov dword ptr [eax + 4], ecx
// 006a4cfd  894810               mov dword ptr [eax + 0x10], ecx
// 006a4d00  89480c               mov dword ptr [eax + 0xc], ecx
// 006a4d03  894808               mov dword ptr [eax + 8], ecx
// 006a4d06  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006a4cf0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006a4cf0();
};
S_func_006a4cf0::S_func_006a4cf0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
