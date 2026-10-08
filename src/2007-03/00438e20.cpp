// roc 2007-03 00438e20  unit: seg_00430000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00438e20
//
// 00438e20  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00438e26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00438e20 {
    char pad0[144];
    int m_x;
    int f();
};
int S_func_00438e20::f()
{
    return m_x;
}
