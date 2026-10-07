// roc 2009-06 004d9740  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d9740
//
// 004d9740  c70100000000         mov dword ptr [ecx], 0
// 004d9746  c7410800000000       mov dword ptr [ecx + 8], 0
// 004d974d  c3                   ret 
// copied from an identical function in another client (function ?Reset@Creator@ns_ROCX0000ba@@QAEXXZ)

namespace ns_ROCX0000ba {
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
