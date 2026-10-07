// roc 2012-06 009c6580  unit: CXTPControls  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c6580
//
// 009c6580  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 009c6586  85c0                 test eax, eax
// 009c6588  7404                 je 0x9c658e
// 009c658a  8b4024               mov eax, dword ptr [eax + 0x24]
// 009c658d  c3                   ret 
// 009c658e  33c0                 xor eax, eax
// 009c6590  c3                   ret 
// copied from an identical function in another client (function ?GetId@CXTPControls@ns_ROCX00009f@@QAEHXZ)

namespace ns_ROCX00009f {
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
