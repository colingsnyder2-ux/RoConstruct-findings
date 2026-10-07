// roc 2010-06 0079b690  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0079b690
//
// 0079b690  c7818000000002000000 mov dword ptr [ecx + 0x80], 2
// 0079b69a  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0079b690 {
    char pad0[128];
    int m_x;
    void f();
};
void S_func_0079b690::f()
{
    m_x = (int)2;
}
