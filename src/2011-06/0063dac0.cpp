// roc 2011-06 0063dac0  unit: RBX::VLocalScript::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063dac0
//
// 0063dac0  dd8148020000         fld qword ptr [ecx + 0x248]
// 0063dac6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0063dac0 {
    char pad[584];
    double m_x;
    double f();
};
double S_func_0063dac0::f()
{
    return m_x;
}
