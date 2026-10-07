// roc 2010-06 0046e6f0  unit: Scintilla::CScintillaView  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e6f0
//
// 0046e6f0  8d4158               lea eax, [ecx + 0x58]
// 0046e6f3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0046e6f0 {
    char pad0[88];
    int m_x;
    int* f();
};
int* S_func_0046e6f0::f()
{
    return &m_x;
}
