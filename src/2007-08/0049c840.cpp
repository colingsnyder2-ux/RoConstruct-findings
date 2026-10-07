// roc 2007-08 0049c840  unit: RBX::Network::Server::ClientProxy  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0049c840
//
// 0049c840  8b81201e0000         mov eax, dword ptr [ecx + 0x1e20]
// 0049c846  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0049c840 {
    char pad0[7712];
    int m_x;
    int f();
};
int S_func_0049c840::f()
{
    return m_x;
}
