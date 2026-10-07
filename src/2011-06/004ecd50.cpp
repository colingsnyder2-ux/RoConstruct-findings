// roc 2011-06 004ecd50  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ecd50
//
// 004ecd50  8b442404             mov eax, dword ptr [esp + 4]
// 004ecd54  8901                 mov dword ptr [ecx], eax
// 004ecd56  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004ecd50 {
    int m_x;
    void f(int a1);
};
void S_func_004ecd50::f(int a1)
{
    m_x = (int)a1;
}
