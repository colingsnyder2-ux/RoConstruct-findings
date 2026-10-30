// roc 2009-12 008eeb50  unit: CXTPRibbonTabPopupToolBar  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eeb50
//
// 008eeb50  8b8174020000         mov eax, dword ptr [ecx + 0x274]
// 008eeb56  50                   push eax
// 008eeb57  81c15c020000         add ecx, 0x25c
// 008eeb5d  e85ea2faff           call 0x898dc0
// 008eeb62  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?CreateKeyboardTips@CXTPRibbonTabPopupToolBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
