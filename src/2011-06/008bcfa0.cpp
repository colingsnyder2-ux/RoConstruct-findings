// roc 2011-06 008bcfa0  unit: CXTPDockingPaneAutoHidePanel  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bcfa0
//
// 008bcfa0  8b442404             mov eax, dword ptr [esp + 4]
// 008bcfa4  56                   push esi
// 008bcfa5  50                   push eax
// 008bcfa6  8bf1                 mov esi, ecx
// 008bcfa8  e80bf61000           call 0x9cc5b8
// 008bcfad  85c0                 test eax, eax
// 008bcfaf  7408                 je 0x8bcfb9
// 008bcfb1  50                   push eax
// 008bcfb2  8bce                 mov ecx, esi
// 008bcfb4  e8a7f1ffff           call 0x8bc160
// 008bcfb9  b801000000           mov eax, 1
// 008bcfbe  5e                   pop esi
// 008bcfbf  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPScrollBase.cpp (function ?OnPrintClient@CXTPCommandBarScrollBarCtrl@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPScrollBase.cpp
