// roc 2007-03 00654a10  unit: seg_00650000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00654a10
//
// 00654a10  8b442408             mov eax, dword ptr [esp + 8]
// 00654a14  8b542404             mov edx, dword ptr [esp + 4]
// 00654a18  89849164020000       mov dword ptr [ecx + edx*4 + 0x264], eax
// 00654a1f  c20800               ret 8
// copied from an identical function in another client (function ?SetSlot@CXTTreeBase_Map@ns_ROCX00002a@@QAEXHPAX@Z)

namespace ns_ROCX00002a {
struct CXTTreeBase_Map {
    char m_pad[0x264];
    void* m_slots[4];
    void SetSlot(int index, void* value);
};

void CXTTreeBase_Map::SetSlot(int index, void* value) {
    m_slots[index] = value;
}
}
