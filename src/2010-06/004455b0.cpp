// roc 2010-06 004455b0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004455b0
//
// 004455b0  8a415c               mov al, byte ptr [ecx + 0x5c]
// 004455b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004455b0 {
    char pad0[92];
    char m_x;
    char f();
};
char S_func_004455b0::f()
{
    return m_x;
}
