// roc 2011-06 00511f90  unit: RBX::Network::ClientReplicator  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00511f90
//
// 00511f90  c60101               mov byte ptr [ecx], 1
// 00511f93  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00511f90 {
    char m_x;
    void f(int a1);
};
void S_func_00511f90::f(int a1)
{
    m_x = (char)1;
}
