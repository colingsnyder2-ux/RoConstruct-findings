// from server: 100% by auto
// roc 2008-06 006db800  unit: CXTPReportSelectedRows  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006db800
//
// 006db800  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006db804  8b542408             mov edx, dword ptr [esp + 8]
// 006db808  50                   push eax
// 006db809  8b442408             mov eax, dword ptr [esp + 8]
// 006db80d  52                   push edx
// 006db80e  50                   push eax
// 006db80f  83c160               add ecx, 0x60
// 006db812  e879240000           call 0x6ddc90
// 006db817  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTShellTreeBaseCTreeView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTShellTreeCtrlView.cpp
