// roc 2011-06 0080f620  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080f620
//
// 0080f620  8d8148010000         lea eax, [ecx + 0x148]
// 0080f626  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0080f620 {
    char pad0[328];
    int m_x;
    int* f();
};
int* S_func_0080f620::f()
{
    return &m_x;
}
