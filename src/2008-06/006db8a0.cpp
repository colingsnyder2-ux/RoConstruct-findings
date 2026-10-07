// roc 2008-06 006db8a0  unit: CXTPReportSelectedRows  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006db8a0
//
// 006db8a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006db8a4  8b542408             mov edx, dword ptr [esp + 8]
// 006db8a8  50                   push eax
// 006db8a9  8b442408             mov eax, dword ptr [esp + 8]
// 006db8ad  52                   push edx
// 006db8ae  50                   push eax
// 006db8af  83c160               add ecx, 0x60
// 006db8b2  e8b91e0000           call 0x6dd770
// 006db8b7  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTShellTreeBaseCTreeView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTShellTreeCtrlView.cpp
