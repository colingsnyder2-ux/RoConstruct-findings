// roc 2009-12 007e79d0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e79d0
//
// 007e79d0  c7818000000002000000 mov dword ptr [ecx + 0x80], 2
// 007e79da  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0079b690@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
struct S_func_0079b690 {
    char pad0[128];
    int m_x;
    void f();
};
void S_func_0079b690::f()
{
    m_x = (int)2;
}
}
