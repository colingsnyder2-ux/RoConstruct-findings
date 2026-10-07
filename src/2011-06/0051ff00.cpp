// roc 2011-06 0051ff00  unit: RBX::Network::ProfiledRakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0051ff00
//
// 0051ff00  8b442404             mov eax, dword ptr [esp + 4]
// 0051ff04  8981c0080000         mov dword ptr [ecx + 0x8c0], eax
// 0051ff0a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0051ff00 {
    char pad0[2240];
    int m_x;
    void f(int a1);
};
void S_func_0051ff00::f(int a1)
{
    m_x = (int)a1;
}
