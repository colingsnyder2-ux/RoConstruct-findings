// roc 2011-06 007fd8a0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fd8a0
//
// 007fd8a0  c7818800000002000000 mov dword ptr [ecx + 0x88], 2
// 007fd8aa  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007fd8a0 {
    char pad0[136];
    int m_x;
    void f();
};
void S_func_007fd8a0::f()
{
    m_x = (int)2;
}
