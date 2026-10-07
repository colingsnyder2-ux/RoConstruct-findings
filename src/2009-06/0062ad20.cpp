// roc 2009-06 0062ad20  unit: RBX::VServiceProvider::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062ad20
//
// 0062ad20  dd8170020000         fld qword ptr [ecx + 0x270]
// 0062ad26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0062ad20 {
    char pad[624];
    double m_x;
    double f();
};
double S_func_0062ad20::f()
{
    return m_x;
}
