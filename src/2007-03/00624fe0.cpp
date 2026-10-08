// roc 2007-03 00624fe0  unit: seg_00620000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00624fe0
//
// 00624fe0  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00624fe3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00624fe0 {
    char pad0[40];
    int m_x;
    int f();
};
int S_func_00624fe0::f()
{
    return m_x;
}
