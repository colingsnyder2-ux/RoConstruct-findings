// roc 2007-03 004efbd0  unit: seg_004e0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004efbd0
//
// 004efbd0  8d4128               lea eax, [ecx + 0x28]
// 004efbd3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004efbd0 {
    char pad0[40];
    int m_x;
    int* f();
};
int* S_func_004efbd0::f()
{
    return &m_x;
}
