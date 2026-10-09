// roc 2007-03 0069a2f0  unit: seg_00690000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069a2f0
//
// 0069a2f0  8b817c020000         mov eax, dword ptr [ecx + 0x27c]
// 0069a2f6  85c0                 test eax, eax
// 0069a2f8  740c                 je 0x69a306
// 0069a2fa  83784400             cmp dword ptr [eax + 0x44], 0
// 0069a2fe  7406                 je 0x69a306
// 0069a300  b801000000           mov eax, 1
// 0069a305  c3                   ret 
// 0069a306  33c0                 xor eax, eax
// 0069a308  c3                   ret 
// copied from an identical function in another client (function ?IsSomethingValid@CXTPRibbonBar@ns_ROCX00003c@@QAEHXZ)

namespace ns_ROCX00003c {
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
}
