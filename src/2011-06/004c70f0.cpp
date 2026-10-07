// roc 2011-06 004c70f0  unit: RBX::Network::Players  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c70f0
//
// 004c70f0  8b442404             mov eax, dword ptr [esp + 4]
// 004c70f4  8981ec010000         mov dword ptr [ecx + 0x1ec], eax
// 004c70fa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004c70f0 {
    char pad0[492];
    int m_x;
    void f(int a1);
};
void S_func_004c70f0::f(int a1)
{
    m_x = (int)a1;
}
