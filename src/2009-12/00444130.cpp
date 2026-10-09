// roc 2009-12 00444130  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00444130
//
// 00444130  8a415c               mov al, byte ptr [ecx + 0x5c]
// 00444133  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_004455b0@ns_ROCX000007@@QAEDXZ)

namespace ns_ROCX000007 {
struct S_func_004455b0 {
    char pad0[92];
    char m_x;
    char f();
};
char S_func_004455b0::f()
{
    return m_x;
}
}
