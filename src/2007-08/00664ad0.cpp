// roc 2007-08 00664ad0  unit: CXTPReportRows  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664ad0
//
// 00664ad0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00664ad4  8b542408             mov edx, dword ptr [esp + 8]
// 00664ad8  50                   push eax
// 00664ad9  8b442408             mov eax, dword ptr [esp + 8]
// 00664add  52                   push edx
// 00664ade  50                   push eax
// 00664adf  83c160               add ecx, 0x60
// 00664ae2  e8e91e0000           call 0x6669d0
// 00664ae7  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTShellTreeBaseCTreeView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTShellTreeCtrlView.cpp
