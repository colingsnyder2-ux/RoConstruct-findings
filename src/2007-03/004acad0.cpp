// roc 2007-03 004acad0  unit: seg_004a0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004acad0
//
// 004acad0  c681200a000000       mov byte ptr [ecx + 0xa20], 0
// 004acad7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004acad0 {
    char pad0[2592];
    char m_x;
    void f();
};
void S_func_004acad0::f()
{
    m_x = (char)0;
}
