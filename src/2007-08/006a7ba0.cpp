// from server: 100% by colin
// roc 2007-08 006a7ba0  unit: CXTPRibbonBar  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7ba0
//
// 006a7ba0  57                   push edi
// 006a7ba1  8bf9                 mov edi, ecx
// 006a7ba3  8b8784020000         mov eax, dword ptr [edi + 0x284]
// 006a7ba9  85c0                 test eax, eax
// 006a7bab  7f21                 jg 0x6a7bce
// 006a7bad  56                   push esi
// 006a7bae  e82dfeffff           call 0x6a79e0
// 006a7bb3  8bb0fc000000         mov esi, dword ptr [eax + 0xfc]
// 006a7bb9  8bcf                 mov ecx, edi
// 006a7bbb  e820feffff           call 0x6a79e0
// 006a7bc0  8b9040060000         mov edx, dword ptr [eax + 0x640]
// 006a7bc6  8d0c76               lea ecx, [esi + esi*2]
// 006a7bc9  8d440a0a             lea eax, [edx + ecx + 0xa]
// 006a7bcd  5e                   pop esi
// 006a7bce  5f                   pop edi
// 006a7bcf  c3                   ret 

struct CXTPRibbonBar {
    int m_nSomething;
    char pad[0x280];
    int m_nCount;
    int GetFrameHelper();
    int GetRibbonBar();
    int GetHeight();
};

int CXTPRibbonBar::GetHeight()
{
    int result;
    if (m_nCount > 0)
        return m_nCount;
    int a = GetFrameHelper();
    int b = *(int*)(a + 0xfc);
    int c = GetRibbonBar();
    int d = *(int*)(c + 0x640);
    result = d + b * 3 + 0xa;
    return result;
}
