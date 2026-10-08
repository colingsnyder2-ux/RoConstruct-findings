// roc 2007-03 004efbb0  unit: seg_004e0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004efbb0
//
// 004efbb0  8a4158               mov al, byte ptr [ecx + 0x58]
// 004efbb3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004efbb0 {
    char pad0[88];
    char m_x;
    char f();
};
char S_func_004efbb0::f()
{
    return m_x;
}
