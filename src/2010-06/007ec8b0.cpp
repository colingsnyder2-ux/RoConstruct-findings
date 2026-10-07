// roc 2010-06 007ec8b0  unit: CXTPControls  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ec8b0
//
// 007ec8b0  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 007ec8b6  85c0                 test eax, eax
// 007ec8b8  7404                 je 0x7ec8be
// 007ec8ba  8b4024               mov eax, dword ptr [eax + 0x24]
// 007ec8bd  c3                   ret 
// 007ec8be  33c0                 xor eax, eax
// 007ec8c0  c3                   ret 
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
