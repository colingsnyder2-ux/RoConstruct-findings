// roc 2007-08 0040d180  unit: CGdiObject  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0040d180
//
// 0040d180  8d81c8000000         lea eax, [ecx + 0xc8]
// 0040d186  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0040d180 {
    char pad0[200];
    int m_x;
    int* f();
};
int* S_func_0040d180::f()
{
    return &m_x;
}
