// roc 2011-06 0052e060  unit: RBX::Network::ProfiledRakPeer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052e060
//
// 0052e060  8a81d00b0000         mov al, byte ptr [ecx + 0xbd0]
// 0052e066  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0052e060 {
    char pad0[3024];
    char m_x;
    char f();
};
char S_func_0052e060::f()
{
    return m_x;
}
