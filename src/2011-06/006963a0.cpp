// roc 2011-06 006963a0  unit: RBX::Configuration  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006963a0
//
// 006963a0  dd8190000000         fld qword ptr [ecx + 0x90]
// 006963a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006963a0 {
    char pad[144];
    double m_x;
    double f();
};
double S_func_006963a0::f()
{
    return m_x;
}
