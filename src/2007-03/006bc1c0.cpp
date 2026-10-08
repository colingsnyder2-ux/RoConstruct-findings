// roc 2007-03 006bc1c0  unit: seg_006b0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bc1c0
//
// 006bc1c0  8b4154               mov eax, dword ptr [ecx + 0x54]
// 006bc1c3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006bc1c0 {
    char pad0[84];
    int m_x;
    int f();
};
int S_func_006bc1c0::f()
{
    return m_x;
}
