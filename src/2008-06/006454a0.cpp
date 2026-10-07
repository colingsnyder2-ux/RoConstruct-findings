// roc 2008-06 006454a0  unit: RBX::HUMAN::Climbing  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006454a0
//
// 006454a0  8b442404             mov eax, dword ptr [esp + 4]
// 006454a4  894120               mov dword ptr [ecx + 0x20], eax
// 006454a7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006454a0 {
    char pad0[32];
    int m_x;
    void f(int a1);
};
void S_func_006454a0::f(int a1)
{
    m_x = (int)a1;
}
