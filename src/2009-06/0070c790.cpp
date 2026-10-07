// roc 2009-06 0070c790  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070c790
//
// 0070c790  dd81d0000000         fld qword ptr [ecx + 0xd0]
// 0070c796  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0070c790 {
    char pad[208];
    double m_x;
    double f();
};
double S_func_0070c790::f()
{
    return m_x;
}
