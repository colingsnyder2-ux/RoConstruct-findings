// roc 2007-03 006b5ee0  unit: seg_006b0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b5ee0
//
// 006b5ee0  8b4124               mov eax, dword ptr [ecx + 0x24]
// 006b5ee3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006b5ee0 {
    char pad0[36];
    int m_x;
    int f();
};
int S_func_006b5ee0::f()
{
    return m_x;
}
