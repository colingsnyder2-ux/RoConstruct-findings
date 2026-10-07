// roc 2010-06 0075cb20  unit: RBX::VHandles::?$FactoryProduct  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075cb20
//
// 0075cb20  8a4118               mov al, byte ptr [ecx + 0x18]
// 0075cb23  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0075cb20 {
    char pad0[24];
    char m_x;
    char f();
};
char S_func_0075cb20::f()
{
    return m_x;
}
