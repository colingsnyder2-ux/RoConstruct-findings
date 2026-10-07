// roc 2009-06 00464520  unit: Scintilla::CScintillaView  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464520
//
// 00464520  8d81b4000000         lea eax, [ecx + 0xb4]
// 00464526  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00464520 {
    char pad0[180];
    int m_x;
    int* f();
};
int* S_func_00464520::f()
{
    return &m_x;
}
