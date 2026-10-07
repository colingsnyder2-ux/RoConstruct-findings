// roc 2011-06 007c3d80  unit: RBX::GroupRunDragger  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c3d80
//
// 007c3d80  c6812002000001       mov byte ptr [ecx + 0x220], 1
// 007c3d87  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007c3d80 {
    char pad0[544];
    char m_x;
    void f();
};
void S_func_007c3d80::f()
{
    m_x = (char)1;
}
