// roc 2009-06 0070c740  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070c740
//
// 0070c740  c7417802000000       mov dword ptr [ecx + 0x78], 2
// 0070c747  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0070c740 {
    char pad0[120];
    int m_x;
    void f();
};
void S_func_0070c740::f()
{
    m_x = (int)2;
}
