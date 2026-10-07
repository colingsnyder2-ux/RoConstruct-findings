// roc 2011-06 00685d90  unit: RBX::Humanoid  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00685d90
//
// 00685d90  c6412801             mov byte ptr [ecx + 0x28], 1
// 00685d94  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00685d90 {
    char pad0[40];
    char m_x;
    void f();
};
void S_func_00685d90::f()
{
    m_x = (char)1;
}
