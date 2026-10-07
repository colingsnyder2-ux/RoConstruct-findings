// roc 2010-06 00750ab0  unit: RBX::Assembly  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00750ab0
//
// 00750ab0  c7410400000000       mov dword ptr [ecx + 4], 0
// 00750ab7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00750ab0 {
    char pad0[4];
    int m_x;
    void f(int a1);
};
void S_func_00750ab0::f(int a1)
{
    m_x = (int)0;
}
