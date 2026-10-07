// roc 2009-06 004d9a60  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d9a60
//
// 004d9a60  8b442404             mov eax, dword ptr [esp + 4]
// 004d9a64  8901                 mov dword ptr [ecx], eax
// 004d9a66  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004d9a60 {
    int m_x;
    void f(int a1);
};
void S_func_004d9a60::f(int a1)
{
    m_x = (int)a1;
}
