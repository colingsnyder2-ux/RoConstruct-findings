// roc 2008-06 005a0100  unit: RBX::SpecialShape  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0100
//
// 005a0100  dd8118040000         fld qword ptr [ecx + 0x418]
// 005a0106  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a0100 {
    char pad[1048];
    double m_x;
    double f();
};
double S_func_005a0100::f()
{
    return m_x;
}
