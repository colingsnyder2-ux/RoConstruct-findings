// from server: 100% by auto
// roc 2008-06 006dba10  unit: CXTPReportSelectedRows  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dba10
//
// 006dba10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006dba14  8b542408             mov edx, dword ptr [esp + 8]
// 006dba18  50                   push eax
// 006dba19  8b442408             mov eax, dword ptr [esp + 8]
// 006dba1d  52                   push edx
// 006dba1e  50                   push eax
// 006dba1f  83c154               add ecx, 0x54
// 006dba22  e8a91e0000           call 0x6dd8d0
// 006dba27  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTShellTreeBaseCTreeCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTShellTreeCtrlView.cpp
