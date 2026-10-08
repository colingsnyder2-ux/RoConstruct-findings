// roc 2010-06 008a2d30  unit: CXTPRibbonTabPopupToolBar  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a2d30
//
// 008a2d30  8b8174020000         mov eax, dword ptr [ecx + 0x274]
// 008a2d36  50                   push eax
// 008a2d37  81c15c020000         add ecx, 0x25c
// 008a2d3d  e80ea2faff           call 0x84cf50
// 008a2d42  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?CreateKeyboardTips@CXTPRibbonTabPopupToolBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
