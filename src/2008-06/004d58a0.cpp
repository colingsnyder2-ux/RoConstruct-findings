// roc 2008-06 004d58a0  unit: seg_004d0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d58a0
//
// 004d58a0  8d4160               lea eax, [ecx + 0x60]
// 004d58a3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004d58a0 {
    char pad0[96];
    int m_x;
    int* f();
};
int* S_func_004d58a0::f()
{
    return &m_x;
}
