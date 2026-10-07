// roc 2010-06 008633d0  unit: CXTPDockingPaneMiniWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008633d0
//
// 008633d0  8bc1                 mov eax, ecx
// 008633d2  33c9                 xor ecx, ecx
// 008633d4  c70080b3a600         mov dword ptr [eax], 0xa6b380
// 008633da  894804               mov dword ptr [eax + 4], ecx
// 008633dd  894810               mov dword ptr [eax + 0x10], ecx
// 008633e0  89480c               mov dword ptr [eax + 0xc], ecx
// 008633e3  894808               mov dword ptr [eax + 8], ecx
// 008633e6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008633d0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008633d0();
};
S_func_008633d0::S_func_008633d0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
