// roc 2010-06 004d66c0  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d66c0
//
// 004d66c0  8d81ac000000         lea eax, [ecx + 0xac]
// 004d66c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004d66c0 {
    char pad0[172];
    int m_x;
    int* f();
};
int* S_func_004d66c0::f()
{
    return &m_x;
}
