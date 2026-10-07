// roc 2008-06 00759430  unit: CXTPDockingPaneWindowSelect  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00759430
//
// 00759430  8bc1                 mov eax, ecx
// 00759432  33c9                 xor ecx, ecx
// 00759434  c70084568600         mov dword ptr [eax], 0x865684
// 0075943a  894804               mov dword ptr [eax + 4], ecx
// 0075943d  894810               mov dword ptr [eax + 0x10], ecx
// 00759440  89480c               mov dword ptr [eax + 0xc], ecx
// 00759443  894808               mov dword ptr [eax + 8], ecx
// 00759446  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00759430
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00759430();
};
S_func_00759430::S_func_00759430()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
