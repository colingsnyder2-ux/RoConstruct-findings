// roc 2007-03 00698060  unit: seg_00690000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00698060
//
// 00698060  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00698063  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00698060 {
    char pad0[44];
    int m_x;
    int f();
};
int S_func_00698060::f()
{
    return m_x;
}
