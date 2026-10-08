// roc 2007-03 005c79a0  unit: seg_005c0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c79a0
//
// 005c79a0  8d4104               lea eax, [ecx + 4]
// 005c79a3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005c79a0 {
    char pad0[4];
    int m_x;
    int* f();
};
int* S_func_005c79a0::f()
{
    return &m_x;
}
