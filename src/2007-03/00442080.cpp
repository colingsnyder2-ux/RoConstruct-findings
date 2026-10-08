// roc 2007-03 00442080  unit: seg_00440000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00442080
//
// 00442080  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00442083  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00442080 {
    char pad0[12];
    int m_x;
    int f();
};
int S_func_00442080::f()
{
    return m_x;
}
