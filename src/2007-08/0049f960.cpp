// roc 2007-08 0049f960  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049f960
//
// 0049f960  c70100000000         mov dword ptr [ecx], 0
// 0049f966  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0049f960 {
    int m_x;
    void f();
};
void S_func_0049f960::f()
{
    m_x = (int)0;
}
