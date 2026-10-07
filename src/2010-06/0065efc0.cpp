// roc 2010-06 0065efc0  unit: RBX::Backpack  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065efc0
//
// 0065efc0  8a8195000000         mov al, byte ptr [ecx + 0x95]
// 0065efc6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0065efc0 {
    char pad0[149];
    char m_x;
    char f();
};
char S_func_0065efc0::f()
{
    return m_x;
}
