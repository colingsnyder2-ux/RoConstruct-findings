// roc 2008-06 0062e0f0  unit: RBX::GeometryService  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062e0f0
//
// 0062e0f0  c6816401000000       mov byte ptr [ecx + 0x164], 0
// 0062e0f7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0062e0f0 {
    char pad0[356];
    char m_x;
    void f(int a1);
};
void S_func_0062e0f0::f(int a1)
{
    m_x = (char)0;
}
