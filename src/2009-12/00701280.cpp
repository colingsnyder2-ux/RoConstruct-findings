// roc 2009-12 00701280  unit: RBX::Assembly  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00701280
//
// 00701280  c6416c01             mov byte ptr [ecx + 0x6c], 1
// 00701284  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006762c0@ns_ROCX0000eb@@QAEXXZ)

namespace ns_ROCX0000eb {
struct S_func_006762c0 {
    char pad0[108];
    char m_x;
    void f();
};
void S_func_006762c0::f()
{
    m_x = (char)1;
}
}
