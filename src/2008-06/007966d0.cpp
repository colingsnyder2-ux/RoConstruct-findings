// roc 2008-06 007966d0  unit: CXTPRibbonTabPopupToolBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007966d0
//
// 007966d0  8b8978020000         mov ecx, dword ptr [ecx + 0x278]
// 007966d6  8b01                 mov eax, dword ptr [ecx]
// 007966d8  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 007966de  ffe2                 jmp edx
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonPopups.cpp (function ?IsKeyboardCuesVisible@CXTPRibbonTabPopupToolBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp
