// roc 2011-06 008d59c0  unit: CXTPTabPaintManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d59c0
//
// 008d59c0  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 008d59c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008d59c0 {
    char pad0[252];
    int m_x;
    int f();
};
int S_func_008d59c0::f()
{
    return m_x;
}
