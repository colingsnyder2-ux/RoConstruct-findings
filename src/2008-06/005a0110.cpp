// roc 2008-06 005a0110  unit: RBX::SpecialShape  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0110
//
// 005a0110  dd8120040000         fld qword ptr [ecx + 0x420]
// 005a0116  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a0110 {
    char pad[1056];
    double m_x;
    double f();
};
double S_func_005a0110::f()
{
    return m_x;
}
