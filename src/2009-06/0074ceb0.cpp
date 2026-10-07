// roc 2009-06 0074ceb0  unit: CXTPPropertyGridItemConstraint  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074ceb0
//
// 0074ceb0  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0074ceb3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0074ceb0 {
    char pad0[44];
    int m_x;
    int f();
};
int S_func_0074ceb0::f()
{
    return m_x;
}
