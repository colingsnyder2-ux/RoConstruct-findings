// roc 2007-03 00666a80  unit: seg_00660000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00666a80
//
// 00666a80  8b4140               mov eax, dword ptr [ecx + 0x40]
// 00666a83  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00666a80 {
    char pad0[64];
    int m_x;
    int f(int a1);
};
int S_func_00666a80::f(int a1)
{
    return m_x;
}
