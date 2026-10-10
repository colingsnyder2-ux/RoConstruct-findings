// roc 2008-06 00793440  unit: CXTCaptionPopupWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00793440
//
// 00793440  56                   push esi
// 00793441  8bf1                 mov esi, ecx
// 00793443  8b06                 mov eax, dword ptr [esi]
// 00793445  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 0079344b  ffd2                 call edx
// 0079344d  8bce                 mov ecx, esi
// 0079344f  5e                   pop esi
// 00793450  e927dcf0ff           jmp 0x6a107c
// library xtp-11.2.2-shared-mfc/Source\Controls\XTCaptionPopupWnd.cpp (function ?OnDestroy@CXTCaptionPopupWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaptionPopupWnd.cpp
