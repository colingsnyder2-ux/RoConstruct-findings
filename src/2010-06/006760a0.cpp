// roc 2010-06 006760a0  unit: RBX::VHumanoid::?$EventDesc  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006760a0
//
// 006760a0  c7410403000000       mov dword ptr [ecx + 4], 3
// 006760a7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006760a0 {
    char pad0[4];
    int m_x;
    void f();
};
void S_func_006760a0::f()
{
    m_x = (int)3;
}
