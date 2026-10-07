// roc 2010-06 007ad180  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ad180
//
// 007ad180  8d8148010000         lea eax, [ecx + 0x148]
// 007ad186  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007ad180 {
    char pad0[328];
    int m_x;
    int* f();
};
int* S_func_007ad180::f()
{
    return &m_x;
}
