// roc 2011-06 007fd980  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fd980
//
// 007fd980  dd8170010000         fld qword ptr [ecx + 0x170]
// 007fd986  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007fd980 {
    char pad[368];
    double m_x;
    double f();
};
double S_func_007fd980::f()
{
    return m_x;
}
