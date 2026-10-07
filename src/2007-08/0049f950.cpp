// roc 2007-08 0049f950  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 14 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0049f950
//
// 0049f950  c70100000000         mov dword ptr [ecx], 0
// 0049f956  c7410800000000       mov dword ptr [ecx + 8], 0
// 0049f95d  c3                   ret 
// copied from an identical function in another client (function ?Reset@Creator@ns_ROCX0000c4@@QAEXXZ)

namespace ns_ROCX0000c4 {
struct Creator {
    void* m_a;
    int m_b;
    void* m_c;
    void Reset();
};

void Creator::Reset()
{
    m_a = 0;
    m_c = 0;
}
}
