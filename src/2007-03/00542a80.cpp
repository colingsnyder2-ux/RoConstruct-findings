// roc 2007-03 00542a80  unit: seg_00540000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00542a80
//
// 00542a80  8a81f2000000         mov al, byte ptr [ecx + 0xf2]
// 00542a86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00542a80 {
    char pad0[242];
    char m_x;
    char f();
};
char S_func_00542a80::f()
{
    return m_x;
}
