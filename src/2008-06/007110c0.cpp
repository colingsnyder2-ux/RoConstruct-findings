// roc 2008-06 007110c0  unit: CXTPPropertyGridItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007110c0
//
// 007110c0  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 007110c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007110c0 {
    char pad0[252];
    int m_x;
    int f();
};
int S_func_007110c0::f()
{
    return m_x;
}
