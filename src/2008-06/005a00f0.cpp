// roc 2008-06 005a00f0  unit: RBX::SpecialShape  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a00f0
//
// 005a00f0  dd8110040000         fld qword ptr [ecx + 0x410]
// 005a00f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a00f0 {
    char pad[1040];
    double m_x;
    double f();
};
double S_func_005a00f0::f()
{
    return m_x;
}
