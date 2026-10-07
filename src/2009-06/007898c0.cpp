// roc 2009-06 007898c0  unit: CXTPPropertyGridItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007898c0
//
// 007898c0  8b81d8000000         mov eax, dword ptr [ecx + 0xd8]
// 007898c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007898c0 {
    char pad0[216];
    int m_x;
    int f();
};
int S_func_007898c0::f()
{
    return m_x;
}
