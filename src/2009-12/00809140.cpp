// roc 2009-12 00809140  unit: CXTPCommandBar  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00809140
//
// 00809140  8d4130               lea eax, [ecx + 0x30]
// 00809143  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00731fc0@ns_ROCX000059@@QAEPAHXZ)

namespace ns_ROCX000059 {
struct S_func_00731fc0 {
    char pad0[48];
    int m_x;
    int* f();
};
int* S_func_00731fc0::f()
{
    return &m_x;
}
}
