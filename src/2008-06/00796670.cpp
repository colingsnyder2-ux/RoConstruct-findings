// roc 2008-06 00796670  unit: CXTPRibbonTabPopupToolBar  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00796670
//
// 00796670  8b8174020000         mov eax, dword ptr [ecx + 0x274]
// 00796676  50                   push eax
// 00796677  81c15c020000         add ecx, 0x25c
// 0079667d  e88efbf8ff           call 0x726210
// 00796682  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?CreateKeyboardTips@CXTPRibbonTabPopupToolBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
