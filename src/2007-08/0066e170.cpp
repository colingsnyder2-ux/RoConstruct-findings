// roc 2007-08 0066e170  unit: CXTPControls  size: 17 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e170
//
// 0066e170  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0066e176  85c0                 test eax, eax
// 0066e178  7404                 je 0x66e17e
// 0066e17a  8b4024               mov eax, dword ptr [eax + 0x24]
// 0066e17d  c3                   ret 
// 0066e17e  33c0                 xor eax, eax
// 0066e180  c3                   ret 
// copied from an identical function in another client (function ?GetId@CXTPControls@ns_ROCX0000aa@@QAEHXZ)

namespace ns_ROCX0000aa {
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
