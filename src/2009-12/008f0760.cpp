// roc 2009-12 008f0760  unit: CXTPRibbonControlTab  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0760
//
// 008f0760  8b8114020000         mov eax, dword ptr [ecx + 0x214]
// 008f0766  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00814c00@ns_ROCX0000a0@@QAEHXZ)

namespace ns_ROCX0000a0 {
struct S_func_00814c00 {
    char pad0[532];
    int m_x;
    int f();
};
int S_func_00814c00::f()
{
    return m_x;
}
}
