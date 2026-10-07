// roc 2011-06 0063dad0  unit: RBX::VLocalScript::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063dad0
//
// 0063dad0  dd8150020000         fld qword ptr [ecx + 0x250]
// 0063dad6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0063dad0 {
    char pad[592];
    double m_x;
    double f();
};
double S_func_0063dad0::f()
{
    return m_x;
}
