// roc 2007-03 0065f2e0  unit: seg_00650000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065f2e0
//
// 0065f2e0  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 0065f2e6  83c00a               add eax, 0xa
// 0065f2e9  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0065f2e0 {
    char pad0[372];
    int m_x;
    int f();
};
int S_func_0065f2e0::f()
{
    return m_x + 0xa;
}
