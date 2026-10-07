// roc 2011-06 0052e050  unit: RBX::Network::ProfiledRakPeer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052e050
//
// 0052e050  8a81d10b0000         mov al, byte ptr [ecx + 0xbd1]
// 0052e056  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0052e050 {
    char pad0[3025];
    char m_x;
    char f();
};
char S_func_0052e050::f()
{
    return m_x;
}
