// roc 2008-06 006b9a70  unit: CXTPPropertyGridItemConstraint  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b9a70
//
// 006b9a70  8d4130               lea eax, [ecx + 0x30]
// 006b9a73  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006b9a70 {
    char pad0[48];
    int m_x;
    int* f();
};
int* S_func_006b9a70::f()
{
    return &m_x;
}
