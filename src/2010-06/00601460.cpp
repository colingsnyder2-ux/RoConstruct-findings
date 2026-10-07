// roc 2010-06 00601460  unit: RBX::VLocalScript::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00601460
//
// 00601460  dd81b0020000         fld qword ptr [ecx + 0x2b0]
// 00601466  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00601460 {
    char pad[688];
    double m_x;
    double f();
};
double S_func_00601460::f()
{
    return m_x;
}
