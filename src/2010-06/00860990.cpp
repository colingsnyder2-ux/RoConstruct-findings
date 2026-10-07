// roc 2010-06 00860990  unit: CXTPDockingPaneWindowSelect  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00860990
//
// 00860990  8bc1                 mov eax, ecx
// 00860992  33c9                 xor ecx, ecx
// 00860994  c7002caea600         mov dword ptr [eax], 0xa6ae2c
// 0086099a  894804               mov dword ptr [eax + 4], ecx
// 0086099d  894810               mov dword ptr [eax + 0x10], ecx
// 008609a0  89480c               mov dword ptr [eax + 0xc], ecx
// 008609a3  894808               mov dword ptr [eax + 8], ecx
// 008609a6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00860990
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00860990();
};
S_func_00860990::S_func_00860990()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
