// roc 2007-08 005681d0  unit: RBX::RootInstance  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005681d0
//
// 005681d0  c6814802000001       mov byte ptr [ecx + 0x248], 1
// 005681d7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005681d0 {
    char pad0[584];
    char m_x;
    void f();
};
void S_func_005681d0::f()
{
    m_x = (char)1;
}
