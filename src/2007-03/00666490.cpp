// roc 2007-03 00666490  unit: seg_00660000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00666490
//
// 00666490  c7413001000000       mov dword ptr [ecx + 0x30], 1
// 00666497  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00666490 {
    char pad0[48];
    int m_x;
    void f();
};
void S_func_00666490::f()
{
    m_x = (int)1;
}
