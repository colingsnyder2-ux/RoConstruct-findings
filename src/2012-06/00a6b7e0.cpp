// roc 2012-06 00a6b7e0  unit: CXTCaptionPopupWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6b7e0
//
// 00a6b7e0  56                   push esi
// 00a6b7e1  8bf1                 mov esi, ecx
// 00a6b7e3  8b06                 mov eax, dword ptr [esi]
// 00a6b7e5  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00a6b7eb  ffd2                 call edx
// 00a6b7ed  8bce                 mov ecx, esi
// 00a6b7ef  5e                   pop esi
// 00a6b7f0  e9b173f1ff           jmp 0x982ba6
// library xtp-15.2.1-shared-mfc/Source\Controls\Static\XTPCaptionPopupWnd.cpp (function ?OnDestroy@CXTPCaptionPopupWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Static/XTPCaptionPopupWnd.cpp
