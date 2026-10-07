// roc 2009-06 004d9750  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d9750
//
// 004d9750  c70100000000         mov dword ptr [ecx], 0
// 004d9756  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004d9750 {
    int m_x;
    void f();
};
void S_func_004d9750::f()
{
    m_x = (int)0;
}
