// roc 2010-06 00842da0  unit: CXTPShortcutManager::CKeyHelper  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00842da0
//
// 00842da0  8bc1                 mov eax, ecx
// 00842da2  33c9                 xor ecx, ecx
// 00842da4  c700a874a600         mov dword ptr [eax], 0xa674a8
// 00842daa  894804               mov dword ptr [eax + 4], ecx
// 00842dad  894810               mov dword ptr [eax + 0x10], ecx
// 00842db0  89480c               mov dword ptr [eax + 0xc], ecx
// 00842db3  894808               mov dword ptr [eax + 8], ecx
// 00842db6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00842da0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00842da0();
};
S_func_00842da0::S_func_00842da0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
