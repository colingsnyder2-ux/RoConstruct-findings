// roc 2010-06 0079b760  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0079b760
//
// 0079b760  dd8160010000         fld qword ptr [ecx + 0x160]
// 0079b766  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0079b760 {
    char pad[352];
    double m_x;
    double f();
};
double S_func_0079b760::f()
{
    return m_x;
}
