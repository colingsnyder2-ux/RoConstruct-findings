// roc 2009-12 00695e10  unit: RBX::VTool::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00695e10
//
// 00695e10  dd81b8020000         fld qword ptr [ecx + 0x2b8]
// 00695e16  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00601470@ns_ROCX000062@@QAENXZ)

namespace ns_ROCX000062 {
struct S_func_00601470 {
    char pad[696];
    double m_x;
    double f();
};
double S_func_00601470::f()
{
    return m_x;
}
}
