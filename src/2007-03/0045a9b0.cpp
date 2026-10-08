// roc 2007-03 0045a9b0  unit: seg_00450000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a9b0
//
// 0045a9b0  8d4158               lea eax, [ecx + 0x58]
// 0045a9b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0045a9b0 {
    char pad0[88];
    int m_x;
    int* f();
};
int* S_func_0045a9b0::f()
{
    return &m_x;
}
