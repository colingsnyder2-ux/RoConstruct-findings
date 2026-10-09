// roc 2009-12 0060bfc0  unit: seg_00600000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060bfc0
//
// 0060bfc0  dd4118               fld qword ptr [ecx + 0x18]
// 0060bfc3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0058a190@ns_ROCX00000a@@QAENXZ)

namespace ns_ROCX00000a {
struct S_func_0058a190 {
    char pad[24];
    double m_x;
    double f();
};
double S_func_0058a190::f()
{
    return m_x;
}
}
