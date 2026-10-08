// roc 2007-03 004c0650  unit: seg_004c0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c0650
//
// 004c0650  8d4160               lea eax, [ecx + 0x60]
// 004c0653  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004c0650 {
    char pad0[96];
    int m_x;
    int* f();
};
int* S_func_004c0650::f()
{
    return &m_x;
}
