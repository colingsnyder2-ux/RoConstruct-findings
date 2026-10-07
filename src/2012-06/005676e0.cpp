// roc 2012-06 005676e0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005676e0
//
// 005676e0  c70100000000         mov dword ptr [ecx], 0
// 005676e6  c7410800000000       mov dword ptr [ecx + 8], 0
// 005676ed  c3                   ret 
// copied from an identical function in another client (function ?Reset@Creator@ns_ROCX0000b9@@QAEXXZ)

namespace ns_ROCX0000b9 {
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
