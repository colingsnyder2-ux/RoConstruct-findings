// roc 2010-06 00601450  unit: RBX::VLocalScript::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00601450
//
// 00601450  dd81a8020000         fld qword ptr [ecx + 0x2a8]
// 00601456  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00601450 {
    char pad[680];
    double m_x;
    double f();
};
double S_func_00601450::f()
{
    return m_x;
}
