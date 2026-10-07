// roc 2007-08 00664a10  unit: CXTPReportRows  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664a10
//
// 00664a10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00664a14  8b542408             mov edx, dword ptr [esp + 8]
// 00664a18  50                   push eax
// 00664a19  8b442408             mov eax, dword ptr [esp + 8]
// 00664a1d  52                   push edx
// 00664a1e  50                   push eax
// 00664a1f  83c160               add ecx, 0x60
// 00664a22  e8d9230000           call 0x666e00
// 00664a27  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTShellTreeBaseCTreeView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTShellTreeCtrlView.cpp
