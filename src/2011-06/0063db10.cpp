// roc 2011-06 0063db10  unit: RBX::VLocalScript::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063db10
//
// 0063db10  dd8140020000         fld qword ptr [ecx + 0x240]
// 0063db16  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0063db10 {
    char pad[576];
    double m_x;
    double f();
};
double S_func_0063db10::f()
{
    return m_x;
}
