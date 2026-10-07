// roc 2012-06 00a354b0  unit: CXTPDockingPaneAutoHidePanel  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a354b0
//
// 00a354b0  8b442404             mov eax, dword ptr [esp + 4]
// 00a354b4  56                   push esi
// 00a354b5  50                   push eax
// 00a354b6  8bf1                 mov esi, ecx
// 00a354b8  e8b5400600           call 0xa99572
// 00a354bd  85c0                 test eax, eax
// 00a354bf  7408                 je 0xa354c9
// 00a354c1  50                   push eax
// 00a354c2  8bce                 mov ecx, esi
// 00a354c4  e897f1ffff           call 0xa34660
// 00a354c9  b801000000           mov eax, 1
// 00a354ce  5e                   pop esi
// 00a354cf  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPScrollBase.cpp (function ?OnPrintClient@CXTPCommandBarScrollBarCtrl@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPScrollBase.cpp
