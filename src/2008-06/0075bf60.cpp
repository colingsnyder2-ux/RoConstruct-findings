// roc 2008-06 0075bf60  unit: CXTPDockingPaneMiniWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075bf60
//
// 0075bf60  8bc1                 mov eax, ecx
// 0075bf62  33c9                 xor ecx, ecx
// 0075bf64  c700f05b8600         mov dword ptr [eax], 0x865bf0
// 0075bf6a  894804               mov dword ptr [eax + 4], ecx
// 0075bf6d  894810               mov dword ptr [eax + 0x10], ecx
// 0075bf70  89480c               mov dword ptr [eax + 0xc], ecx
// 0075bf73  894808               mov dword ptr [eax + 8], ecx
// 0075bf76  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0075bf60
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0075bf60();
};
S_func_0075bf60::S_func_0075bf60()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
