// roc 2009-06 00817320  unit: CXTPDialogBar::CControlCaptionPopup  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00817320
//
// 00817320  83b98401000000       cmp dword ptr [ecx + 0x184], 0
// 00817327  7405                 je 0x81732e
// 00817329  e95294f4ff           jmp 0x760780
// 0081732e  b801000000           mov eax, 1
// 00817333  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnSetPopup@CControlCaptionPopup@CXTPDialogBar@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
