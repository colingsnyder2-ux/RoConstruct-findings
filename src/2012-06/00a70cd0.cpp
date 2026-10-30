// roc 2012-06 00a70cd0  unit: CXTPDialogBar::CControlCaptionPopup  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a70cd0
//
// 00a70cd0  83b98401000000       cmp dword ptr [ecx + 0x184], 0
// 00a70cd7  7405                 je 0xa70cde
// 00a70cd9  e9e286f5ff           jmp 0x9c93c0
// 00a70cde  b801000000           mov eax, 1
// 00a70ce3  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnSetPopup@CControlCaptionPopup@CXTPDialogBar@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
