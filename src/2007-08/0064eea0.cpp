// roc 2007-08 0064eea0  unit: CXTPToolBar  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0064eea0
//
// 0064eea0  8d4108               lea eax, [ecx + 8]
// 0064eea3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0064eea0 {
    char pad0[8];
    int m_x;
    int* f();
};
int* S_func_0064eea0::f()
{
    return &m_x;
}
