// from server: 100% by colin
// roc 2007-08 00718590  unit: CXTPRibbonControlTab  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00718590
//
// 00718590  8b442404             mov eax, dword ptr [esp + 4]
// 00718594  85c0                 test eax, eax
// 00718596  7508                 jne 0x7185a0
// 00718598  b857000780           mov eax, 0x80070057
// 0071859d  c20400               ret 4
// 007185a0  8b89b4010000         mov ecx, dword ptr [ecx + 0x1b4]
// 007185a6  8908                 mov dword ptr [eax], ecx
// 007185a8  33c0                 xor eax, eax
// 007185aa  c20400               ret 4

struct CXTPRibbonControlTab {
    char m_pad[0x1b4];
    int m_value;
    int GetValue(int* pOut);
};

int CXTPRibbonControlTab::GetValue(int* pOut) {
    if (pOut == 0)
        return 0x80070057;
    *pOut = m_value;
    return 0;
}
