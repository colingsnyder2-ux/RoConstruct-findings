// roc 2007-08 00664bb0  unit: CXTPReportRows  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664bb0
//
// 00664bb0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00664bb4  8b542408             mov edx, dword ptr [esp + 8]
// 00664bb8  50                   push eax
// 00664bb9  8b442408             mov eax, dword ptr [esp + 8]
// 00664bbd  52                   push edx
// 00664bbe  50                   push eax
// 00664bbf  83c154               add ecx, 0x54
// 00664bc2  e839220000           call 0x666e00
// 00664bc7  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTShellTreeBaseCTreeCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTShellTreeCtrlView.cpp
