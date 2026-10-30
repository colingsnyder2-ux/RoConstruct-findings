// from server: 100% by auto
// roc 2007-08 00664a30  unit: CXTPReportRows  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664a30
//
// 00664a30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00664a34  8b542408             mov edx, dword ptr [esp + 8]
// 00664a38  50                   push eax
// 00664a39  8b442408             mov eax, dword ptr [esp + 8]
// 00664a3d  52                   push edx
// 00664a3e  50                   push eax
// 00664a3f  83c160               add ecx, 0x60
// 00664a42  e8a9240000           call 0x666ef0
// 00664a47  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTShellTreeBaseCTreeView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTShellTreeCtrlView.cpp
