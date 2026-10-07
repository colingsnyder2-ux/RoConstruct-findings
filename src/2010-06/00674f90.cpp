// roc 2010-06 00674f90  unit: RBX::Humanoid  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00674f90
//
// 00674f90  c6412801             mov byte ptr [ecx + 0x28], 1
// 00674f94  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00674f90 {
    char pad0[40];
    char m_x;
    void f();
};
void S_func_00674f90::f()
{
    m_x = (char)1;
}
