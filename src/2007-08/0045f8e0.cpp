// roc 2007-08 0045f8e0  unit: Scintilla::CScintillaView  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0045f8e0
//
// 0045f8e0  8d81f0000000         lea eax, [ecx + 0xf0]
// 0045f8e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0045f8e0 {
    char pad0[240];
    int m_x;
    int* f();
};
int* S_func_0045f8e0::f()
{
    return &m_x;
}
