// roc 2007-03 0069a500  unit: seg_00690000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069a500
//
// 0069a500  8b8144020000         mov eax, dword ptr [ecx + 0x244]
// 0069a506  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0069a500 {
    char pad0[580];
    int m_x;
    int f();
};
int S_func_0069a500::f()
{
    return m_x;
}
