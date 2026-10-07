// roc 2010-06 00601470  unit: RBX::VLocalScript::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00601470
//
// 00601470  dd81b8020000         fld qword ptr [ecx + 0x2b8]
// 00601476  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00601470 {
    char pad[696];
    double m_x;
    double f();
};
double S_func_00601470::f()
{
    return m_x;
}
