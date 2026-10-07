// roc 2010-06 004dcf60  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004dcf60
//
// 004dcf60  c70100000000         mov dword ptr [ecx], 0
// 004dcf66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004dcf60 {
    int m_x;
    void f();
};
void S_func_004dcf60::f()
{
    m_x = (int)0;
}
