// roc 2007-03 006f3f80  unit: seg_006f0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f3f80
//
// 006f3f80  8d4154               lea eax, [ecx + 0x54]
// 006f3f83  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006f3f80 {
    char pad0[84];
    int m_x;
    int* f();
};
int* S_func_006f3f80::f()
{
    return &m_x;
}
