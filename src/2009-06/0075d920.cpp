// roc 2009-06 0075d920  unit: CXTPControls  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075d920
//
// 0075d920  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0075d926  85c0                 test eax, eax
// 0075d928  7404                 je 0x75d92e
// 0075d92a  8b4024               mov eax, dword ptr [eax + 0x24]
// 0075d92d  c3                   ret 
// 0075d92e  33c0                 xor eax, eax
// 0075d930  c3                   ret 
// copied from an identical function in another client (function ?GetId@CXTPControls@ns_ROCX0000a0@@QAEHXZ)

namespace ns_ROCX0000a0 {
struct Item {
    char pad[0x24];
    int m_id;
};

struct CXTPControls {
    char pad[0xd0];
    Item* m_item;
    int GetId();
};

int CXTPControls::GetId()
{
    return m_item ? m_item->m_id : 0;
}
}
