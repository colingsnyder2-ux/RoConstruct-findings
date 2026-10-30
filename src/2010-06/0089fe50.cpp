// roc 2010-06 0089fe50  unit: CXTPDialogBar::CControlCaptionPopup  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089fe50
//
// 0089fe50  83b98401000000       cmp dword ptr [ecx + 0x184], 0
// 0089fe57  7405                 je 0x89fe5e
// 0089fe59  e942f8f4ff           jmp 0x7ef6a0
// 0089fe5e  b801000000           mov eax, 1
// 0089fe63  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnSetPopup@CControlCaptionPopup@CXTPDialogBar@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
