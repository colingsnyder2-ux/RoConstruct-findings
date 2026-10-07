// roc 2010-06 00842d60  unit: CXTPShortcutManager::CKeyHelper  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00842d60
//
// 00842d60  8bc1                 mov eax, ecx
// 00842d62  33c9                 xor ecx, ecx
// 00842d64  c7009074a600         mov dword ptr [eax], 0xa67490
// 00842d6a  894804               mov dword ptr [eax + 4], ecx
// 00842d6d  894810               mov dword ptr [eax + 0x10], ecx
// 00842d70  89480c               mov dword ptr [eax + 0xc], ecx
// 00842d73  894808               mov dword ptr [eax + 8], ecx
// 00842d76  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00842d60
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00842d60();
};
S_func_00842d60::S_func_00842d60()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
