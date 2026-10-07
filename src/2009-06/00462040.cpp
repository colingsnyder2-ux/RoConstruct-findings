// roc 2009-06 00462040  unit: Scintilla::CScintillaView  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462040
//
// 00462040  8d4158               lea eax, [ecx + 0x58]
// 00462043  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00462040 {
    char pad0[88];
    int m_x;
    int* f();
};
int* S_func_00462040::f()
{
    return &m_x;
}
