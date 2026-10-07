// roc 2009-06 004da260  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004da260
//
// 004da260  8b01                 mov eax, dword ptr [ecx]
// 004da262  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004da260 {
    int m_x;
    int f();
};
int S_func_004da260::f()
{
    return m_x;
}
