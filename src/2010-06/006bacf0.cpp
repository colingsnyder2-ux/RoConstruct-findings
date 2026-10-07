// roc 2010-06 006bacf0  unit: RBX::Lua::WeakThreadRef::VNode::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006bacf0
//
// 006bacf0  8d81ec000000         lea eax, [ecx + 0xec]
// 006bacf6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006bacf0 {
    char pad0[236];
    int m_x;
    int* f();
};
int* S_func_006bacf0::f()
{
    return &m_x;
}
