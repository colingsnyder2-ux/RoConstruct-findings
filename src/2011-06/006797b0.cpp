// roc 2011-06 006797b0  unit: RBX::SpecialShape  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006797b0
//
// 006797b0  8a8130010000         mov al, byte ptr [ecx + 0x130]
// 006797b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006797b0 {
    char pad0[304];
    char m_x;
    char f();
};
char S_func_006797b0::f()
{
    return m_x;
}
