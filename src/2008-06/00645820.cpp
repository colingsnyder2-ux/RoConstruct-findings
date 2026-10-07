// roc 2008-06 00645820  unit: RBX::RigidJoint  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645820
//
// 00645820  c7410400000000       mov dword ptr [ecx + 4], 0
// 00645827  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00645820 {
    char pad0[4];
    int m_x;
    void f(int a1);
};
void S_func_00645820::f(int a1)
{
    m_x = (int)0;
}
