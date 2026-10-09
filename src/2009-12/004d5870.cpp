// roc 2009-12 004d5870  unit: CXTPPropertyGridItemConstraint  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5870
//
// 004d5870  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 004d5873  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0074ceb0@ns_ROCX00001d@@QAEHXZ)

namespace ns_ROCX00001d {
struct S_func_0074ceb0 {
    char pad0[44];
    int m_x;
    int f();
};
int S_func_0074ceb0::f()
{
    return m_x;
}
}
