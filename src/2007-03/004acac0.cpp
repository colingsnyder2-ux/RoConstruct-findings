// roc 2007-03 004acac0  unit: seg_004a0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004acac0
//
// 004acac0  c681200a000001       mov byte ptr [ecx + 0xa20], 1
// 004acac7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004acac0 {
    char pad0[2592];
    char m_x;
    void f();
};
void S_func_004acac0::f()
{
    m_x = (char)1;
}
