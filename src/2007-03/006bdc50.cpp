// roc 2007-03 006bdc50  unit: seg_006b0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bdc50
//
// 006bdc50  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 006bdc53  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006bdc50 {
    char pad0[76];
    int m_x;
    int f();
};
int S_func_006bdc50::f()
{
    return m_x;
}
