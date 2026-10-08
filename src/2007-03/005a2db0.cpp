// roc 2007-03 005a2db0  unit: seg_005a0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a2db0
//
// 005a2db0  8d8124010000         lea eax, [ecx + 0x124]
// 005a2db6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a2db0 {
    char pad0[292];
    int m_x;
    int* f();
};
int* S_func_005a2db0::f()
{
    return &m_x;
}
