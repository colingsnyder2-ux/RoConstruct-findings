// roc 2008-06 006e5040  unit: CXTPControls  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e5040
//
// 006e5040  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 006e5046  85c0                 test eax, eax
// 006e5048  7404                 je 0x6e504e
// 006e504a  8b4024               mov eax, dword ptr [eax + 0x24]
// 006e504d  c3                   ret 
// 006e504e  33c0                 xor eax, eax
// 006e5050  c3                   ret 

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
