// roc 2009-06 0066be10  unit: RBX::Humanoid  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066be10
//
// 0066be10  8a4158               mov al, byte ptr [ecx + 0x58]
// 0066be13  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066be10 {
    char pad0[88];
    char m_x;
    char f();
};
char S_func_0066be10::f()
{
    return m_x;
}
