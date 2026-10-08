// roc 2007-03 004efbc0  unit: seg_004e0000  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004efbc0
//
// 004efbc0  8a4159               mov al, byte ptr [ecx + 0x59]
// 004efbc3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004efbc0 {
    char pad0[89];
    char m_x;
    char f();
};
char S_func_004efbc0::f()
{
    return m_x;
}
