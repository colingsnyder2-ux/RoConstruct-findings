// roc 2007-03 005abd20  unit: seg_005a0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abd20
//
// 005abd20  8b4150               mov eax, dword ptr [ecx + 0x50]
// 005abd23  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005abd20 {
    char pad0[80];
    int m_x;
    int f();
};
int S_func_005abd20::f()
{
    return m_x;
}
