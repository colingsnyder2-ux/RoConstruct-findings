// roc 2007-03 00654aa0  unit: seg_00650000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00654aa0
//
// 00654aa0  8b8164040000         mov eax, dword ptr [ecx + 0x464]
// 00654aa6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00654aa0 {
    char pad0[1124];
    int m_x;
    int f();
};
int S_func_00654aa0::f()
{
    return m_x;
}
