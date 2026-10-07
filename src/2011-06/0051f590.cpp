// roc 2011-06 0051f590  unit: RBX::Network::ProfiledRakPeer  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0051f590
//
// 0051f590  668b4108             mov ax, word ptr [ecx + 8]
// 0051f594  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0051f590 {
    char pad0[8];
    short m_x;
    short f();
};
short S_func_0051f590::f()
{
    return m_x;
}
