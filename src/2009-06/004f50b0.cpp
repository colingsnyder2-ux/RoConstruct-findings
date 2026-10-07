// roc 2009-06 004f50b0  unit: RBX::Network::ClientReplicator  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f50b0
//
// 004f50b0  8b442404             mov eax, dword ptr [esp + 4]
// 004f50b4  8981d8060000         mov dword ptr [ecx + 0x6d8], eax
// 004f50ba  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004f50b0 {
    char pad0[1752];
    int m_x;
    void f(int a1);
};
void S_func_004f50b0::f(int a1)
{
    m_x = (int)a1;
}
