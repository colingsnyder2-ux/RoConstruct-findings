// roc 2009-06 00695db0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00695db0
//
// 00695db0  8a81a4000000         mov al, byte ptr [ecx + 0xa4]
// 00695db6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00695db0 {
    char pad0[164];
    char m_x;
    char f();
};
char S_func_00695db0::f()
{
    return m_x;
}
