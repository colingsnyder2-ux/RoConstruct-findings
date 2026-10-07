// roc 2009-06 007d1be0  unit: CXTPDockingPaneWindowSelect  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d1be0
//
// 007d1be0  8bc1                 mov eax, ecx
// 007d1be2  33c9                 xor ecx, ecx
// 007d1be4  c700d4669000         mov dword ptr [eax], 0x9066d4
// 007d1bea  894804               mov dword ptr [eax + 4], ecx
// 007d1bed  894810               mov dword ptr [eax + 0x10], ecx
// 007d1bf0  89480c               mov dword ptr [eax + 0xc], ecx
// 007d1bf3  894808               mov dword ptr [eax + 8], ecx
// 007d1bf6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007d1be0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007d1be0();
};
S_func_007d1be0::S_func_007d1be0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
