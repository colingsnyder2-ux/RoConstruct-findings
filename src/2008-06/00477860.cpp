// roc 2008-06 00477860  unit: G3D::VARArea  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00477860
//
// 00477860  8d81d8070000         lea eax, [ecx + 0x7d8]
// 00477866  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00477860 {
    char pad0[2008];
    int m_x;
    int* f();
};
int* S_func_00477860::f()
{
    return &m_x;
}
