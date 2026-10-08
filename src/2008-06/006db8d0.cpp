// from server: 100% by auto
// roc 2008-06 006db8d0  unit: CXTPReportSelectedRows  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006db8d0
//
// 006db8d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006db8d4  8b542408             mov edx, dword ptr [esp + 8]
// 006db8d8  50                   push eax
// 006db8d9  8b442408             mov eax, dword ptr [esp + 8]
// 006db8dd  52                   push edx
// 006db8de  50                   push eax
// 006db8df  83c160               add ecx, 0x60
// 006db8e2  e8e91f0000           call 0x6dd8d0
// 006db8e7  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTShellTreeBaseCTreeView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTShellTreeCtrlView.cpp
