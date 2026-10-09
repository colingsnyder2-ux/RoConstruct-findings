// roc 2009-12 00713140  unit: RBX::VHint::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00713140
//
// 00713140  dd8118010000         fld qword ptr [ecx + 0x118]
// 00713146  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00692e50@ns_ROCX000004@@QAENXZ)

namespace ns_ROCX000004 {
struct S_func_00692e50 {
    char pad[280];
    double m_x;
    double f();
};
double S_func_00692e50::f()
{
    return m_x;
}
}
