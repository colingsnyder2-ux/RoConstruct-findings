// from server: 100% by auto
// roc 2008-06 006db7e0  unit: CXTPReportSelectedRows  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006db7e0
//
// 006db7e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006db7e4  8b542408             mov edx, dword ptr [esp + 8]
// 006db7e8  50                   push eax
// 006db7e9  8b442408             mov eax, dword ptr [esp + 8]
// 006db7ed  52                   push edx
// 006db7ee  50                   push eax
// 006db7ef  83c160               add ecx, 0x60
// 006db7f2  e8a9230000           call 0x6ddba0
// 006db7f7  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTShellTreeBaseCTreeView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTShellTreeCtrlView.cpp
