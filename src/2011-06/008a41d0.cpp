// roc 2011-06 008a41d0  unit: CXTPPropertyGridItemConstraint  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a41d0
//
// 008a41d0  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 008a41d3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008a41d0 {
    char pad0[44];
    int m_x;
    int f();
};
int S_func_008a41d0::f()
{
    return m_x;
}
