// roc 2009-06 0040fb70  unit: CBrush  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040fb70
//
// 0040fb70  8d4154               lea eax, [ecx + 0x54]
// 0040fb73  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0040fb70 {
    char pad0[84];
    int m_x;
    int* f();
};
int* S_func_0040fb70::f()
{
    return &m_x;
}
