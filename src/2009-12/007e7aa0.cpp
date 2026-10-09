// roc 2009-12 007e7aa0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e7aa0
//
// 007e7aa0  dd8160010000         fld qword ptr [ecx + 0x160]
// 007e7aa6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0079b760@ns_ROCX000004@@QAENXZ)

namespace ns_ROCX000004 {
struct S_func_0079b760 {
    char pad[352];
    double m_x;
    double f();
};
double S_func_0079b760::f()
{
    return m_x;
}
}
