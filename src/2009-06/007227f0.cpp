// roc 2009-06 007227f0  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007227f0
//
// 007227f0  8d8148010000         lea eax, [ecx + 0x148]
// 007227f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007227f0 {
    char pad0[328];
    int m_x;
    int* f();
};
int* S_func_007227f0::f()
{
    return &m_x;
}
