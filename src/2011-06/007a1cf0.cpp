// roc 2011-06 007a1cf0  unit: RBX::Tasks::Exclusive  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a1cf0
//
// 007a1cf0  c7410400000000       mov dword ptr [ecx + 4], 0
// 007a1cf7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007a1cf0 {
    char pad0[4];
    int m_x;
    void f(int a1);
};
void S_func_007a1cf0::f(int a1)
{
    m_x = (int)0;
}
