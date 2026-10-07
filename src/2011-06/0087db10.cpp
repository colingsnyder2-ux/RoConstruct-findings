// roc 2011-06 0087db10  unit: CXTPWinThemeWrapper  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087db10
//
// 0087db10  8bc1                 mov eax, ecx
// 0087db12  33c9                 xor ecx, ecx
// 0087db14  c7004cedac00         mov dword ptr [eax], 0xaced4c
// 0087db1a  894804               mov dword ptr [eax + 4], ecx
// 0087db1d  894810               mov dword ptr [eax + 0x10], ecx
// 0087db20  89480c               mov dword ptr [eax + 0xc], ecx
// 0087db23  894808               mov dword ptr [eax + 8], ecx
// 0087db26  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0087db10
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0087db10();
};
S_func_0087db10::S_func_0087db10()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
