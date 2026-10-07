// roc 2011-06 00758890  unit: seg_00750000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00758890
//
// 00758890  8d4110               lea eax, [ecx + 0x10]
// 00758893  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00758890 {
    char pad0[16];
    int m_x;
    int* f();
};
int* S_func_00758890::f()
{
    return &m_x;
}
