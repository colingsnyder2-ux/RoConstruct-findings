// roc 2009-12 00528ad0  unit: RBX::Network::VClient::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00528ad0
//
// 00528ad0  dd8110010000         fld qword ptr [ecx + 0x110]
// 00528ad6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00678b60@ns_ROCX0000ef@@QAENXZ)

namespace ns_ROCX0000ef {
struct S_func_00678b60 {
    char pad[272];
    double m_x;
    double f();
};
double S_func_00678b60::f()
{
    return m_x;
}
}
