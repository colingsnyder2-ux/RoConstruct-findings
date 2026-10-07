// roc 2010-06 006bad00  unit: RBX::Lua::WeakThreadRef::VNode::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006bad00
//
// 006bad00  8d81f8000000         lea eax, [ecx + 0xf8]
// 006bad06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006bad00 {
    char pad0[248];
    int m_x;
    int* f();
};
int* S_func_006bad00::f()
{
    return &m_x;
}
