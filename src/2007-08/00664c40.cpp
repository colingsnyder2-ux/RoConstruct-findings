// from server: 100% by auto
// roc 2007-08 00664c40  unit: CXTPReportRows  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664c40
//
// 00664c40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00664c44  8b542408             mov edx, dword ptr [esp + 8]
// 00664c48  50                   push eax
// 00664c49  8b442408             mov eax, dword ptr [esp + 8]
// 00664c4d  52                   push edx
// 00664c4e  50                   push eax
// 00664c4f  83c154               add ecx, 0x54
// 00664c52  e8d91e0000           call 0x666b30
// 00664c57  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTShellTreeBaseCTreeCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTShellTreeCtrlView.cpp
