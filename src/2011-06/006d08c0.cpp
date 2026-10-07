// roc 2011-06 006d08c0  unit: seg_006d0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d08c0
//
// 006d08c0  dd8118010000         fld qword ptr [ecx + 0x118]
// 006d08c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d08c0 {
    char pad[280];
    double m_x;
    double f();
};
double S_func_006d08c0::f()
{
    return m_x;
}
