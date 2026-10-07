// roc 2008-06 007110b0  unit: CXTPPropertyGridItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007110b0
//
// 007110b0  8b81d8000000         mov eax, dword ptr [ecx + 0xd8]
// 007110b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007110b0 {
    char pad0[216];
    int m_x;
    int f();
};
int S_func_007110b0::f()
{
    return m_x;
}
