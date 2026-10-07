// roc 2009-06 007898b0  unit: CXTPPropertyGridItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007898b0
//
// 007898b0  8b81d4000000         mov eax, dword ptr [ecx + 0xd4]
// 007898b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007898b0 {
    char pad0[212];
    int m_x;
    int f();
};
int S_func_007898b0::f()
{
    return m_x;
}
