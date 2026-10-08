// from server: 45% by colin
// roc 2007-08 0065e6b0  unit: CXTPReportColumn  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e6b0
//
// 0065e6b0  56                   push esi
// 0065e6b1  8bf1                 mov esi, ecx
// 0065e6b3  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0065e6b6  85c9                 test ecx, ecx
// 0065e6b8  741d                 je 0x65e6d7
// 0065e6ba  e8a14d0700           call 0x6d3460
// 0065e6bf  85c0                 test eax, eax
// 0065e6c1  7414                 je 0x65e6d7
// 0065e6c3  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0065e6c6  e8954d0700           call 0x6d3460
// 0065e6cb  397038               cmp dword ptr [eax + 0x38], esi
// 0065e6ce  7507                 jne 0x65e6d7
// 0065e6d0  b801000000           mov eax, 1
// 0065e6d5  5e                   pop esi
// 0065e6d6  c3                   ret 
// 0065e6d7  33c0                 xor eax, eax
// 0065e6d9  5e                   pop esi
// 0065e6da  c3                   ret 

struct CXTPReportColumn {
    char pad[0x54];
    void* field_54;
    bool IsVisible() const;
};

extern "C" void* __stdcall sub_6D3460(void*);

bool CXTPReportColumn::IsVisible() const {
    if (field_54 == 0)
        return false;
    void* p = sub_6D3460(field_54);
    if (p == 0)
        return false;
    void* q = sub_6D3460(field_54);
    if (*(void**)((char*)q + 0x38) != (void*)this)
        return false;
    return true;
}
