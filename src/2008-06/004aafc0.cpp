// roc 2008-06 004aafc0  unit: RBX::Network::Replicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aafc0
//
// 004aafc0  8a814c2d0000         mov al, byte ptr [ecx + 0x2d4c]
// 004aafc6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004aafc0 {
    char pad0[11596];
    char m_x;
    char f();
};
char S_func_004aafc0::f()
{
    return m_x;
}
