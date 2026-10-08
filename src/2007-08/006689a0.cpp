// from server: 67% by colin
// roc 2007-08 006689a0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006689a0
//
// 006689a0  8b442404             mov eax, dword ptr [esp + 4]
// 006689a4  8d50e2               lea edx, [eax - 0x1e]
// 006689a7  83fa20               cmp edx, 0x20
// 006689aa  771a                 ja 0x6689c6
// 006689ac  8b948160030000       mov edx, dword ptr [ecx + eax*4 + 0x360]
// 006689b3  83faff               cmp edx, -1
// 006689b6  7509                 jne 0x6689c1
// 006689b8  89442404             mov dword ptr [esp + 4], eax
// 006689bc  e9affdffff           jmp 0x668770
// 006689c1  8bc2                 mov eax, edx
// 006689c3  c20400               ret 4
// 006689c6  89442404             mov dword ptr [esp + 4], eax
// 006689ca  e9a1fdffff           jmp 0x668770

struct CXTTreeBase {
    int GetValue(int key);
    int GetValueSlow(int key);
};

int CXTTreeBase::GetValue(int key) {
    unsigned int diff = (unsigned int)(key - 30);
    if (diff <= 0x20) {
        int val = *(int*)((char*)this + key * 4 + 0x360);
        if (val != -1)
            return val;
    }
    return GetValueSlow(key);
}
