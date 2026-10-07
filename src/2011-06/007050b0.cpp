// roc 2011-06 007050b0  unit: RBX::$$A6AXW4NormalId::?$signal::Vslot::?$callable  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007050b0
//
// 007050b0  8a81b0000000         mov al, byte ptr [ecx + 0xb0]
// 007050b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007050b0 {
    char pad0[176];
    char m_x;
    char f();
};
char S_func_007050b0::f()
{
    return m_x;
}
