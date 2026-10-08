// roc 2007-03 005a8b90  unit: seg_005a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8b90
//
// 005a8b90  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 005a8b96  83c058               add eax, 0x58
// 005a8b99  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a8b90 {
    char pad0[272];
    int m_x;
    int f();
};
int S_func_005a8b90::f()
{
    return m_x + 0x58;
}
