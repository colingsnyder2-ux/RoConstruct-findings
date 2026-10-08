// roc 2007-08 0045d230  unit: Scintilla::CScintillaView  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d230
//
// 0045d230  8d4158               lea eax, [ecx + 0x58]
// 0045d233  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0045d230 {
    char pad0[88];
    int m_x;
    int* f();
};
int* S_func_0045d230::f()
{
    return &m_x;
}
