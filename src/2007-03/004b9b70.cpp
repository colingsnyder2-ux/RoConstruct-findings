// roc 2007-03 004b9b70  unit: seg_004b0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9b70
//
// 004b9b70  8a81d5020000         mov al, byte ptr [ecx + 0x2d5]
// 004b9b76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004b9b70 {
    char pad0[725];
    char m_x;
    char f();
};
char S_func_004b9b70::f()
{
    return m_x;
}
