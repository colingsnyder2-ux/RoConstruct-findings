// roc 2009-06 0070c7f0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070c7f0
//
// 0070c7f0  dd8158010000         fld qword ptr [ecx + 0x158]
// 0070c7f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0070c7f0 {
    char pad[344];
    double m_x;
    double f();
};
double S_func_0070c7f0::f()
{
    return m_x;
}
