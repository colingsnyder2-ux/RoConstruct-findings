// roc 2011-06 007a0990  unit: RBX::Network::VPersistentDataStore::?$sp_counted_impl_p  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a0990
//
// 007a0990  c7411c0f000000       mov dword ptr [ecx + 0x1c], 0xf
// 007a0997  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007a0990 {
    char pad0[28];
    int m_x;
    void f();
};
void S_func_007a0990::f()
{
    m_x = (int)0xf;
}
