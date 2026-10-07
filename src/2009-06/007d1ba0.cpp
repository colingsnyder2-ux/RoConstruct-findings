// roc 2009-06 007d1ba0  unit: CXTPDockingPaneWindowSelect  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d1ba0
//
// 007d1ba0  8bc1                 mov eax, ecx
// 007d1ba2  33c9                 xor ecx, ecx
// 007d1ba4  c700bc669000         mov dword ptr [eax], 0x9066bc
// 007d1baa  894804               mov dword ptr [eax + 4], ecx
// 007d1bad  894810               mov dword ptr [eax + 0x10], ecx
// 007d1bb0  89480c               mov dword ptr [eax + 0xc], ecx
// 007d1bb3  894808               mov dword ptr [eax + 8], ecx
// 007d1bb6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007d1ba0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007d1ba0();
};
S_func_007d1ba0::S_func_007d1ba0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
