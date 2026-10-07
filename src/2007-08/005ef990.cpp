// roc 2007-08 005ef990  unit: RBX::BodyMover  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005ef990
//
// 005ef990  8d81f8000000         lea eax, [ecx + 0xf8]
// 005ef996  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005ef990 {
    char pad0[248];
    int m_x;
    int* f();
};
int* S_func_005ef990::f()
{
    return &m_x;
}
