// roc 2010-06 0079b700  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0079b700
//
// 0079b700  dd81d8000000         fld qword ptr [ecx + 0xd8]
// 0079b706  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0079b700 {
    char pad[216];
    double m_x;
    double f();
};
double S_func_0079b700::f()
{
    return m_x;
}
