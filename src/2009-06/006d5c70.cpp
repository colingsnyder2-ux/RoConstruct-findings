// roc 2009-06 006d5c70  unit: RBX::Mechanism  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d5c70
//
// 006d5c70  8b442404             mov eax, dword ptr [esp + 4]
// 006d5c74  894104               mov dword ptr [ecx + 4], eax
// 006d5c77  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006d5c70 {
    char pad0[4];
    int m_x;
    void f(int a1);
};
void S_func_006d5c70::f(int a1)
{
    m_x = (int)a1;
}
