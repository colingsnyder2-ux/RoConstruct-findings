// roc 2007-03 0069f180  unit: seg_00690000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069f180
//
// 0069f180  668b410c             mov ax, word ptr [ecx + 0xc]
// 0069f184  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0069f180 {
    char pad0[12];
    short m_x;
    short f();
};
short S_func_0069f180::f()
{
    return m_x;
}
