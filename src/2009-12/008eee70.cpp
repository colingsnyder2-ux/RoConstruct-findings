// roc 2009-12 008eee70  unit: CXTPRibbonTabPopupToolBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eee70
//
// 008eee70  8b8978020000         mov ecx, dword ptr [ecx + 0x278]
// 008eee76  8b01                 mov eax, dword ptr [ecx]
// 008eee78  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 008eee7e  ffe2                 jmp edx
// copied from an identical function in another client (function ?IsKeyboardCuesVisible@CXTPRibbonTabPopupToolBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp