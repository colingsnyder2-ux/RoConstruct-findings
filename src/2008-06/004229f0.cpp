// from server: 100% by auto
// roc 2008-06 004229f0  unit: CXTTreeCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004229f0
//
// 004229f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004229f4  8b542408             mov edx, dword ptr [esp + 8]
// 004229f8  50                   push eax
// 004229f9  8b442408             mov eax, dword ptr [esp + 8]
// 004229fd  52                   push edx
// 004229fe  50                   push eax
// 004229ff  83c154               add ecx, 0x54
// 00422a02  e889b22b00           call 0x6ddc90
// 00422a07  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTShellTreeBaseCTreeCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTShellTreeCtrlView.cpp
