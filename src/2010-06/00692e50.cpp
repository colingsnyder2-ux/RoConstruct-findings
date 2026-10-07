// roc 2010-06 00692e50  unit: RBX::VHint::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00692e50
//
// 00692e50  dd8118010000         fld qword ptr [ecx + 0x118]
// 00692e56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00692e50 {
    char pad[280];
    double m_x;
    double f();
};
double S_func_00692e50::f()
{
    return m_x;
}
