// roc 2007-03 0065a110  unit: seg_00650000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065a110
//
// 0065a110  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0065a116  83c044               add eax, 0x44
// 0065a119  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0065a110 {
    char pad0[208];
    int m_x;
    int f();
};
int S_func_0065a110::f()
{
    return m_x + 0x44;
}
