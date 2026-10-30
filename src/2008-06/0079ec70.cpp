// from server: 100% by auto
// roc 2008-06 0079ec70  unit: CXTPDialogBar::CControlCaptionPopup  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079ec70
//
// 0079ec70  83b98401000000       cmp dword ptr [ecx + 0x184], 0
// 0079ec77  7405                 je 0x79ec7e
// 0079ec79  e9e291f4ff           jmp 0x6e7e60
// 0079ec7e  b801000000           mov eax, 1
// 0079ec83  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnSetPopup@CControlCaptionPopup@CXTPDialogBar@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
