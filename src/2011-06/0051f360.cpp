// roc 2011-06 0051f360  unit: RBX::Network::ProfiledRakPeer  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0051f360
//
// 0051f360  668b410a             mov ax, word ptr [ecx + 0xa]
// 0051f364  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0051f360 {
    char pad0[10];
    short m_x;
    short f();
};
short S_func_0051f360::f()
{
    return m_x;
}
