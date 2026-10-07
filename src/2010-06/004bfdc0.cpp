// roc 2010-06 004bfdc0  unit: RBX::Network::VPlayer::?$EventDesc  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004bfdc0
//
// 004bfdc0  8b442404             mov eax, dword ptr [esp + 4]
// 004bfdc4  89816c010000         mov dword ptr [ecx + 0x16c], eax
// 004bfdca  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004bfdc0 {
    char pad0[364];
    int m_x;
    void f(int a1);
};
void S_func_004bfdc0::f(int a1)
{
    m_x = (int)a1;
}
