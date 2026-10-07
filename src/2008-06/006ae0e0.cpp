// roc 2008-06 006ae0e0  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae0e0
//
// 006ae0e0  8d8148010000         lea eax, [ecx + 0x148]
// 006ae0e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006ae0e0 {
    char pad0[328];
    int m_x;
    int* f();
};
int* S_func_006ae0e0::f()
{
    return &m_x;
}
