// roc 2009-06 00812ff0  unit: CXTPRibbonTabPopupToolBar  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00812ff0
//
// 00812ff0  8b8174020000         mov eax, dword ptr [ecx + 0x274]
// 00812ff6  50                   push eax
// 00812ff7  81c15c020000         add ecx, 0x25c
// 00812ffd  e89e8bfaff           call 0x7bbba0
// 00813002  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?CreateKeyboardTips@CXTPRibbonTabPopupToolBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
