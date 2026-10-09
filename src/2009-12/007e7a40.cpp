// roc 2009-12 007e7a40  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e7a40
//
// 007e7a40  dd81d8000000         fld qword ptr [ecx + 0xd8]
// 007e7a46  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0079b700@ns_ROCX000003@@QAENXZ)

namespace ns_ROCX000003 {
struct S_func_0079b700 {
    char pad[216];
    double m_x;
    double f();
};
double S_func_0079b700::f()
{
    return m_x;
}
}
