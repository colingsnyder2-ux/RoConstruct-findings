// roc 2008-06 005df480  unit: RBX::Message  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df480
//
// 005df480  dd81b0010000         fld qword ptr [ecx + 0x1b0]
// 005df486  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005df480 {
    char pad[432];
    double m_x;
    double f();
};
double S_func_005df480::f()
{
    return m_x;
}
