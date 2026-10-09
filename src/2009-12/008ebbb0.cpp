// roc 2009-12 008ebbb0  unit: CXTPDialogBar::CControlCaptionPopup  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ebbb0
//
// 008ebbb0  83b98401000000       cmp dword ptr [ecx + 0x184], 0
// 008ebbb7  7405                 je 0x8ebbbe
// 008ebbb9  e992f9f4ff           jmp 0x83b550
// 008ebbbe  b801000000           mov eax, 1
// 008ebbc3  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnSetPopup@CControlCaptionPopup@CXTPDialogBar@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
