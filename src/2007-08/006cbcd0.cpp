// roc 2007-08 006cbcd0  unit: CXTPReportPaintManager  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006cbcd0
//
// 006cbcd0  8b813c020000         mov eax, dword ptr [ecx + 0x23c]
// 006cbcd6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006cbcd0 {
    char pad0[572];
    int m_x;
    int f();
};
int S_func_006cbcd0::f()
{
    return m_x;
}
