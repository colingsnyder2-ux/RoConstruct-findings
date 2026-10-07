// roc 2009-06 006d5c40  unit: RBX::Body  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d5c40
//
// 006d5c40  c7410400000000       mov dword ptr [ecx + 4], 0
// 006d5c47  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006d5c40 {
    char pad0[4];
    int m_x;
    void f(int a1);
};
void S_func_006d5c40::f(int a1)
{
    m_x = (int)0;
}
