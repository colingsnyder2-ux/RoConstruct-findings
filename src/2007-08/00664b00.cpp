// roc 2007-08 00664b00  unit: CXTPReportRows  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664b00
//
// 00664b00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00664b04  8b542408             mov edx, dword ptr [esp + 8]
// 00664b08  50                   push eax
// 00664b09  8b442408             mov eax, dword ptr [esp + 8]
// 00664b0d  52                   push edx
// 00664b0e  50                   push eax
// 00664b0f  83c160               add ecx, 0x60
// 00664b12  e819200000           call 0x666b30
// 00664b17  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTShellTreeBaseCTreeView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTShellTreeCtrlView.cpp
