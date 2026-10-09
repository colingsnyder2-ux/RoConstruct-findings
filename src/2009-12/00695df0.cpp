// roc 2009-12 00695df0  unit: RBX::VTool::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00695df0
//
// 00695df0  dd81a8020000         fld qword ptr [ecx + 0x2a8]
// 00695df6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00601450@ns_ROCX000060@@QAENXZ)

namespace ns_ROCX000060 {
struct S_func_00601450 {
    char pad[680];
    double m_x;
    double f();
};
double S_func_00601450::f()
{
    return m_x;
}
}
