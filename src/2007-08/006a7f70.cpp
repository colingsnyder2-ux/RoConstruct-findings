// from server: 100% by colin
// roc 2007-08 006a7f70  unit: CXTPRibbonBar  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7f70
//
// 006a7f70  8b817c020000         mov eax, dword ptr [ecx + 0x27c]
// 006a7f76  85c0                 test eax, eax
// 006a7f78  740c                 je 0x6a7f86
// 006a7f7a  83784400             cmp dword ptr [eax + 0x44], 0
// 006a7f7e  7406                 je 0x6a7f86
// 006a7f80  b801000000           mov eax, 1
// 006a7f85  c3                   ret 
// 006a7f86  33c0                 xor eax, eax
// 006a7f88  c3                   ret 

struct CXTPRibbonBar {
    char m_pad[0x27c];
    void* m_pField;
    int IsSomethingValid();
};

int CXTPRibbonBar::IsSomethingValid() {
    void* p = m_pField;
    if (p != 0 && *(int*)((char*)p + 0x44) != 0)
        return 1;
    return 0;
}
