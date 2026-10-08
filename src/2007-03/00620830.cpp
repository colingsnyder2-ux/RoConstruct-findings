// roc 2007-03 00620830  unit: seg_00620000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00620830
//
// 00620830  8b81ac010000         mov eax, dword ptr [ecx + 0x1ac]
// 00620836  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00620830 {
    char pad0[428];
    int m_x;
    int f();
};
int S_func_00620830::f()
{
    return m_x;
}
