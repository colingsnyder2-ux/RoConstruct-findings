// roc 2007-08 0063cde0  unit: CRobloxControlColorSelector  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0063cde0
//
// 0063cde0  8d8128010000         lea eax, [ecx + 0x128]
// 0063cde6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0063cde0 {
    char pad0[296];
    int m_x;
    int* f();
};
int* S_func_0063cde0::f()
{
    return &m_x;
}
