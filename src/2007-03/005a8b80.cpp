// roc 2007-03 005a8b80  unit: seg_005a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8b80
//
// 005a8b80  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 005a8b86  83c028               add eax, 0x28
// 005a8b89  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a8b80 {
    char pad0[272];
    int m_x;
    int f();
};
int S_func_005a8b80::f()
{
    return m_x + 0x28;
}
