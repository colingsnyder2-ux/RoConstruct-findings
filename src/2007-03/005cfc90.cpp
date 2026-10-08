// roc 2007-03 005cfc90  unit: seg_005c0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cfc90
//
// 005cfc90  8b81a8010000         mov eax, dword ptr [ecx + 0x1a8]
// 005cfc96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005cfc90 {
    char pad0[424];
    int m_x;
    int f();
};
int S_func_005cfc90::f()
{
    return m_x;
}
