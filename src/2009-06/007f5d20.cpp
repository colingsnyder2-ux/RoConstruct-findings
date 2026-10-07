// roc 2009-06 007f5d20  unit: CXTPTabPaintManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f5d20
//
// 007f5d20  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 007f5d26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007f5d20 {
    char pad0[252];
    int m_x;
    int f();
};
int S_func_007f5d20::f()
{
    return m_x;
}
