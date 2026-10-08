// roc 2007-03 00475040  unit: seg_00470000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475040
//
// 00475040  8b4178               mov eax, dword ptr [ecx + 0x78]
// 00475043  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00475040 {
    char pad0[120];
    int m_x;
    int f();
};
int S_func_00475040::f()
{
    return m_x;
}
