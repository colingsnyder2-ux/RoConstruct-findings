// roc 2008-06 004ce9f0  unit: RBX::Network::PhysicsSender  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ce9f0
//
// 004ce9f0  8b442404             mov eax, dword ptr [esp + 4]
// 004ce9f4  8981d8030000         mov dword ptr [ecx + 0x3d8], eax
// 004ce9fa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004ce9f0 {
    char pad0[984];
    int m_x;
    void f(int a1);
};
void S_func_004ce9f0::f(int a1)
{
    m_x = (int)a1;
}
