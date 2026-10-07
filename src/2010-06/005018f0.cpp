// roc 2010-06 005018f0  unit: RBX::Network::ClientReplicator  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005018f0
//
// 005018f0  8b442404             mov eax, dword ptr [esp + 4]
// 005018f4  8981d8060000         mov dword ptr [ecx + 0x6d8], eax
// 005018fa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_005018f0 {
    char pad0[1752];
    int m_x;
    void f(int a1);
};
void S_func_005018f0::f(int a1)
{
    m_x = (int)a1;
}
