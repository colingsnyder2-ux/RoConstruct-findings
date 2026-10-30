// roc 2012-06 00a73bf0  unit: CXTPRibbonTabPopupToolBar  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a73bf0
//
// 00a73bf0  8b8174020000         mov eax, dword ptr [ecx + 0x274]
// 00a73bf6  50                   push eax
// 00a73bf7  81c15c020000         add ecx, 0x25c
// 00a73bfd  e83ee9faff           call 0xa22540
// 00a73c02  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?CreateKeyboardTips@CXTPRibbonTabPopupToolBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
