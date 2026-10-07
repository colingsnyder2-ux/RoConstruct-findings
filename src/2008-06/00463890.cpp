// roc 2008-06 00463890  unit: Scintilla::CScintillaView  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00463890
//
// 00463890  8d8138010000         lea eax, [ecx + 0x138]
// 00463896  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00463890 {
    char pad0[312];
    int m_x;
    int* f();
};
int* S_func_00463890::f()
{
    return &m_x;
}
