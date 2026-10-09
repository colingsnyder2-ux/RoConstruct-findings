// roc 2009-12 004cb530  unit: G3D::VARArea  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cb530
//
// 004cb530  8d81a8070000         lea eax, [ecx + 0x7a8]
// 004cb536  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0049eec0@ns_ROCX000000@@QAEPAHXZ)

namespace ns_ROCX000000 {
struct S_func_0049eec0 {
    char pad0[1960];
    int m_x;
    int* f();
};
int* S_func_0049eec0::f()
{
    return &m_x;
}
}
