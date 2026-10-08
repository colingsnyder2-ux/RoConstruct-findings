// roc 2007-03 0054be30  unit: seg_00540000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054be30
//
// 0054be30  8d4140               lea eax, [ecx + 0x40]
// 0054be33  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0054be30 {
    char pad0[64];
    int m_x;
    int* f();
};
int* S_func_0054be30::f()
{
    return &m_x;
}
