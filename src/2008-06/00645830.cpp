// roc 2008-06 00645830  unit: RBX::Primitive  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645830
//
// 00645830  8b442404             mov eax, dword ptr [esp + 4]
// 00645834  894104               mov dword ptr [ecx + 4], eax
// 00645837  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00645830 {
    char pad0[4];
    int m_x;
    void f(int a1);
};
void S_func_00645830::f(int a1)
{
    m_x = (int)a1;
}
