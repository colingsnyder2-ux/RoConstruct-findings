// roc 2007-08 004cbc50  unit: seg_004c0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cbc50
//
// 004cbc50  8d4160               lea eax, [ecx + 0x60]
// 004cbc53  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004cbc50 {
    char pad0[96];
    int m_x;
    int* f();
};
int* S_func_004cbc50::f()
{
    return &m_x;
}
