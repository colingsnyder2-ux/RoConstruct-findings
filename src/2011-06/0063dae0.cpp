// roc 2011-06 0063dae0  unit: RBX::VLocalScript::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063dae0
//
// 0063dae0  dd8158020000         fld qword ptr [ecx + 0x258]
// 0063dae6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0063dae0 {
    char pad[600];
    double m_x;
    double f();
};
double S_func_0063dae0::f()
{
    return m_x;
}
