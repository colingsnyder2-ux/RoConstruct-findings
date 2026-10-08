// roc 2011-06 008fb8c0  unit: CXTPRibbonTabPopupToolBar  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fb8c0
//
// 008fb8c0  8b8174020000         mov eax, dword ptr [ecx + 0x274]
// 008fb8c6  50                   push eax
// 008fb8c7  81c15c020000         add ecx, 0x25c
// 008fb8cd  e8bee7faff           call 0x8aa090
// 008fb8d2  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?CreateKeyboardTips@CXTPRibbonTabPopupToolBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
