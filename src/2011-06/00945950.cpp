// roc 2011-06 00945950  unit: RBX::TextureProxyBase  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00945950
//
// 00945950  8b442404             mov eax, dword ptr [esp + 4]
// 00945954  89410c               mov dword ptr [ecx + 0xc], eax
// 00945957  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00945950 {
    char pad0[12];
    int m_x;
    void f(int a1);
};
void S_func_00945950::f(int a1)
{
    m_x = (int)a1;
}
