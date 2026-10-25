// from server: 100% by auto
// roc 2008-06 004613d0  unit: Scintilla::CScintillaView  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004613d0
//
// 004613d0  8d4158               lea eax, [ecx + 0x58]
// 004613d3  c3                   ret 

struct S_func_004613d0 {
    char pad0[88];
    int m_x;
    int* f();
};
int* S_func_004613d0::f()
{
    return &m_x;
}
