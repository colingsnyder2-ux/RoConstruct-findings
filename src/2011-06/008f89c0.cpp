// roc 2011-06 008f89c0  unit: CXTPDialogBar::CControlCaptionPopup  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f89c0
//
// 008f89c0  83b98401000000       cmp dword ptr [ecx + 0x184], 0
// 008f89c7  7405                 je 0x8f89ce
// 008f89c9  e92285f5ff           jmp 0x850ef0
// 008f89ce  b801000000           mov eax, 1
// 008f89d3  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnSetPopup@CControlCaptionPopup@CXTPDialogBar@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
