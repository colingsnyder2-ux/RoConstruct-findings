// from server: 100% by auto
// roc 2008-06 006db980  unit: CXTPReportSelectedRows  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006db980
//
// 006db980  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006db984  8b542408             mov edx, dword ptr [esp + 8]
// 006db988  50                   push eax
// 006db989  8b442408             mov eax, dword ptr [esp + 8]
// 006db98d  52                   push edx
// 006db98e  50                   push eax
// 006db98f  83c154               add ecx, 0x54
// 006db992  e809220000           call 0x6ddba0
// 006db997  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTShellTreeBaseCTreeCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTShellTreeCtrlView.cpp
