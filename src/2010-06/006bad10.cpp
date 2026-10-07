// roc 2010-06 006bad10  unit: RBX::Lua::WeakThreadRef::VNode::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006bad10
//
// 006bad10  8d8104010000         lea eax, [ecx + 0x104]
// 006bad16  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006bad10 {
    char pad0[260];
    int m_x;
    int* f();
};
int* S_func_006bad10::f()
{
    return &m_x;
}
