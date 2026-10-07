// roc 2008-06 006b9a60  unit: CXTPPropertyGridItemConstraint  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b9a60
//
// 006b9a60  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 006b9a63  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006b9a60 {
    char pad0[44];
    int m_x;
    int f();
};
int S_func_006b9a60::f()
{
    return m_x;
}
