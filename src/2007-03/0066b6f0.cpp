// roc 2007-03 0066b6f0  unit: seg_00660000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066b6f0
//
// 0066b6f0  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0066b6f3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0066b6f0 {
    char pad0[60];
    int m_x;
    int f();
};
int S_func_0066b6f0::f()
{
    return m_x;
}
