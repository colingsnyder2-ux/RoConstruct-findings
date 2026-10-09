// roc 2009-12 00695e00  unit: RBX::VTool::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00695e00
//
// 00695e00  dd81b0020000         fld qword ptr [ecx + 0x2b0]
// 00695e06  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00601460@ns_ROCX000061@@QAENXZ)

namespace ns_ROCX000061 {
struct S_func_00601460 {
    char pad[688];
    double m_x;
    double f();
};
double S_func_00601460::f()
{
    return m_x;
}
}
