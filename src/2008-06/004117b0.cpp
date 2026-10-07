// roc 2008-06 004117b0  unit: CBrush  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004117b0
//
// 004117b0  8d8110010000         lea eax, [ecx + 0x110]
// 004117b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004117b0 {
    char pad0[272];
    int m_x;
    int* f();
};
int* S_func_004117b0::f()
{
    return &m_x;
}
