// roc 2010-06 00601480  unit: RBX::VLocalScript::?$FactoryProduct  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00601480
//
// 00601480  dd81b8020000         fld qword ptr [ecx + 0x2b8]
// 00601486  dc81b0020000         fadd qword ptr [ecx + 0x2b0]
// 0060148c  dc81a8020000         fadd qword ptr [ecx + 0x2a8]
// 00601492  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00695e20@ns_ROCX000008@@QAENXZ)

namespace ns_ROCX000008 {
struct S_func_00695e20 {
    char pad[680];
    double m_a;
    double m_b;
    double m_c;
    double f();
};

double S_func_00695e20::f()
{
    return m_c + m_b + m_a;
}
}
