// roc 2011-06 0051fed0  unit: RBX::Network::ProfiledRakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0051fed0
//
// 0051fed0  8b442404             mov eax, dword ptr [esp + 4]
// 0051fed4  8981ac080000         mov dword ptr [ecx + 0x8ac], eax
// 0051feda  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0051fed0 {
    char pad0[2220];
    int m_x;
    void f(int a1);
};
void S_func_0051fed0::f(int a1)
{
    m_x = (int)a1;
}
