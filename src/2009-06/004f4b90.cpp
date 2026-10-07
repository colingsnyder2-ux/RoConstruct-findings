// roc 2009-06 004f4b90  unit: RBX::Network::ClientReplicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f4b90
//
// 004f4b90  8a81182f0000         mov al, byte ptr [ecx + 0x2f18]
// 004f4b96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004f4b90 {
    char pad0[12056];
    char m_x;
    char f();
};
char S_func_004f4b90::f()
{
    return m_x;
}
