// roc 2008-06 004a1570  unit: RBX::Network::Server::ClientProxy  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a1570
//
// 004a1570  c681d02c000001       mov byte ptr [ecx + 0x2cd0], 1
// 004a1577  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004a1570 {
    char pad0[11472];
    char m_x;
    void f(int a1);
};
void S_func_004a1570::f(int a1)
{
    m_x = (char)1;
}
