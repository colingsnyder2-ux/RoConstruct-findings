// roc 2007-03 005ea1a0  unit: seg_005e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ea1a0
//
// 005ea1a0  c7410400000000       mov dword ptr [ecx + 4], 0
// 005ea1a7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_005ea1a0 {
    char pad0[4];
    int m_x;
    void f(int a1);
};
void S_func_005ea1a0::f(int a1)
{
    m_x = (int)0;
}
