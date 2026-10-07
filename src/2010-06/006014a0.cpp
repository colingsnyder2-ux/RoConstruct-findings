// roc 2010-06 006014a0  unit: RBX::VLocalScript::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006014a0
//
// 006014a0  dd81a0020000         fld qword ptr [ecx + 0x2a0]
// 006014a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006014a0 {
    char pad[672];
    double m_x;
    double f();
};
double S_func_006014a0::f()
{
    return m_x;
}
