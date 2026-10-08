// roc 2007-08 006ffa50  unit: CXTPTabPaintManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ffa50
//
// 006ffa50  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 006ffa56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006ffa50 {
    char pad0[252];
    int m_x;
    int f();
};
int S_func_006ffa50::f()
{
    return m_x;
}
