// roc 2008-06 0071e3c0  unit: CXTPShortcutManager::CKeyHelper  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071e3c0
//
// 0071e3c0  8bc1                 mov eax, ecx
// 0071e3c2  33c9                 xor ecx, ecx
// 0071e3c4  c70010f58500         mov dword ptr [eax], 0x85f510
// 0071e3ca  894804               mov dword ptr [eax + 4], ecx
// 0071e3cd  894810               mov dword ptr [eax + 0x10], ecx
// 0071e3d0  89480c               mov dword ptr [eax + 0xc], ecx
// 0071e3d3  894808               mov dword ptr [eax + 8], ecx
// 0071e3d6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0071e3c0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0071e3c0();
};
S_func_0071e3c0::S_func_0071e3c0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
