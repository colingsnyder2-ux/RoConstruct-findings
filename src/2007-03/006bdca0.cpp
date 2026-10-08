// roc 2007-03 006bdca0  unit: seg_006b0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bdca0
//
// 006bdca0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 006bdca3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006bdca0 {
    char pad0[88];
    int m_x;
    int f();
};
int S_func_006bdca0::f()
{
    return m_x;
}
