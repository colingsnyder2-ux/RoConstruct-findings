// roc 2011-06 007050c0  unit: RBX::VHandles::?$FactoryProduct  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007050c0
//
// 007050c0  8a411c               mov al, byte ptr [ecx + 0x1c]
// 007050c3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007050c0 {
    char pad0[28];
    char m_x;
    char f();
};
char S_func_007050c0::f()
{
    return m_x;
}
