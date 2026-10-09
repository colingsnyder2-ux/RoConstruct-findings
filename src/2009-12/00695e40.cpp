// roc 2009-12 00695e40  unit: RBX::VTool::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00695e40
//
// 00695e40  dd81a0020000         fld qword ptr [ecx + 0x2a0]
// 00695e46  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006014a0@ns_ROCX000063@@QAENXZ)

namespace ns_ROCX000063 {
struct S_func_006014a0 {
    char pad[672];
    double m_x;
    double f();
};
double S_func_006014a0::f()
{
    return m_x;
}
}
