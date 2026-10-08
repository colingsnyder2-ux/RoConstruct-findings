// from server: 100% by colin
// roc 2007-08 006689d0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006689d0
//
// 006689d0  8b442408             mov eax, dword ptr [esp + 8]
// 006689d4  8b542404             mov edx, dword ptr [esp + 4]
// 006689d8  89849164020000       mov dword ptr [ecx + edx*4 + 0x264], eax
// 006689df  c20800               ret 8

struct CXTTreeBase_Map {
    char m_pad[0x264];
    void* m_slots[4];
    void SetSlot(int index, void* value);
};

void CXTTreeBase_Map::SetSlot(int index, void* value) {
    m_slots[index] = value;
}
