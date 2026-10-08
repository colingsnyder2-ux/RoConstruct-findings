// roc 2007-03 005d85b0  unit: seg_005d0000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d85b0
//
// 005d85b0  c6411401             mov byte ptr [ecx + 0x14], 1
// 005d85b4  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005d85b0 {
    char pad0[20];
    char m_x;
    void f();
};
void S_func_005d85b0::f()
{
    m_x = (char)1;
}
