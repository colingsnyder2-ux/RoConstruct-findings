// roc 2010-06 004dd270  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004dd270
//
// 004dd270  8b442404             mov eax, dword ptr [esp + 4]
// 004dd274  8901                 mov dword ptr [ecx], eax
// 004dd276  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004dd270 {
    int m_x;
    void f(int a1);
};
void S_func_004dd270::f(int a1)
{
    m_x = (int)a1;
}
