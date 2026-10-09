// roc 2009-12 0046abe0  unit: Scintilla::CScintillaView  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046abe0
//
// 0046abe0  8d4158               lea eax, [ecx + 0x58]
// 0046abe3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00462040@ns_ROCX0000ee@@QAEPAHXZ)

namespace ns_ROCX0000ee {
struct S_func_00462040 {
    char pad0[88];
    int m_x;
    int* f();
};
int* S_func_00462040::f()
{
    return &m_x;
}
}
