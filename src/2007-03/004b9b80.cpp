// roc 2007-03 004b9b80  unit: seg_004b0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9b80
//
// 004b9b80  8a81d4020000         mov al, byte ptr [ecx + 0x2d4]
// 004b9b86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b9b80 {
    char pad0[724];
    char m_x;
    char f();
};
char S_func_004b9b80::f()
{
    return m_x;
}
