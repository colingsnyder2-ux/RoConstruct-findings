// roc 2009-12 004cb540  unit: G3D::VARArea  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cb540
//
// 004cb540  8d81d8070000         lea eax, [ecx + 0x7d8]
// 004cb546  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0049eed0@ns_ROCX000001@@QAEPAHXZ)

namespace ns_ROCX000001 {
struct S_func_0049eed0 {
    char pad0[2008];
    int m_x;
    int* f();
};
int* S_func_0049eed0::f()
{
    return &m_x;
}
}
