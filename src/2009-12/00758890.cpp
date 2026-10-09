// roc 2009-12 00758890  unit: RBX::ImageLabel  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00758890
//
// 00758890  8a81bc020000         mov al, byte ptr [ecx + 0x2bc]
// 00758896  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006df480@ns_ROCX000002@@QAEDXZ)

namespace ns_ROCX000002 {
struct S_func_006df480 {
    char pad0[700];
    char m_x;
    char f();
};
char S_func_006df480::f()
{
    return m_x;
}
}
