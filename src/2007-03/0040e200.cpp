// roc 2007-03 0040e200  unit: seg_00400000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040e200
//
// 0040e200  8d81d0000000         lea eax, [ecx + 0xd0]
// 0040e206  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0040e200 {
    char pad0[208];
    int m_x;
    int* f();
};
int* S_func_0040e200::f()
{
    return &m_x;
}
