// roc 2007-08 0052fd20  unit: RBX::ICameraSubject  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0052fd20
//
// 0052fd20  8d8168010000         lea eax, [ecx + 0x168]
// 0052fd26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0052fd20 {
    char pad0[360];
    int m_x;
    int* f();
};
int* S_func_0052fd20::f()
{
    return &m_x;
}
