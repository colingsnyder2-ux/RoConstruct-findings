// roc 2011-06 0084e0d0  unit: CXTPControls  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084e0d0
//
// 0084e0d0  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0084e0d6  85c0                 test eax, eax
// 0084e0d8  7404                 je 0x84e0de
// 0084e0da  8b4024               mov eax, dword ptr [eax + 0x24]
// 0084e0dd  c3                   ret 
// 0084e0de  33c0                 xor eax, eax
// 0084e0e0  c3                   ret 
// copied from an identical function in another client (function ?GetId@CXTPControls@ns_ROCX000057@@QAEHXZ)

namespace ns_ROCX000057 {
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
