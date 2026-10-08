// from server: 100% by colin
// roc 2007-08 006ab030  unit: CXTPRibbonBar  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ab030
//
// 006ab030  8b8164020000         mov eax, dword ptr [ecx + 0x264]
// 006ab036  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006ab03a  0578010000           add eax, 0x178
// 006ab03f  85c9                 test ecx, ecx
// 006ab041  7c0e                 jl 0x6ab051
// 006ab043  3b485c               cmp ecx, dword ptr [eax + 0x5c]
// 006ab046  7d09                 jge 0x6ab051
// 006ab048  8b4058               mov eax, dword ptr [eax + 0x58]
// 006ab04b  8b0488               mov eax, dword ptr [eax + ecx*4]
// 006ab04e  c20400               ret 4
// 006ab051  33c0                 xor eax, eax
// 006ab053  c20400               ret 4

struct CXTPRibbonBar {
    char pad[0x264];
    void* field_264;
    void* GetItem(int index);
};

void* CXTPRibbonBar::GetItem(int index) {
    char* base = (char*)field_264 + 0x178;
    if (index >= 0 && index < *(int*)(base + 0x5c))
        return *(void**)(*(int*)(base + 0x58) + index * 4);
    return 0;
}
