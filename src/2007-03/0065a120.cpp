// roc 2007-03 0065a120  unit: seg_00650000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065a120
//
// 0065a120  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0065a126  83c028               add eax, 0x28
// 0065a129  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0065a120 {
    char pad0[208];
    int m_x;
    int f();
};
int S_func_0065a120::f()
{
    return m_x + 0x28;
}
