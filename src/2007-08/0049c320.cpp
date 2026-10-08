// roc 2007-08 0049c320  unit: RBX::Network::Server::ClientProxy  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049c320
//
// 0049c320  c681b41d000001       mov byte ptr [ecx + 0x1db4], 1
// 0049c327  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0049c320 {
    char pad0[7604];
    char m_x;
    void f(int a1);
};
void S_func_0049c320::f(int a1)
{
    m_x = (char)1;
}
